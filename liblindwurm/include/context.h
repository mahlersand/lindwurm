#ifndef CONTEXT_H
#define CONTEXT_H

#include "backends.h"
#include "liblindwurm_global.h"

#include <filesystem>

namespace LW {
  //! A lindwurm context object
  class Context
  {
  public:
	Context();


    template<LW::backends::AuthenticationBackend>
    bool registerAuthenticationBackend();

    template<LW::backends::TransportBackend>
    bool registerTransportBackend();

    template<LW::backends::TunnelBackend>
    bool registerTunnelBackend();

	void registerDefaultBackends();
  };

  template<LW::backends::AuthenticationBackend Backend>
  bool registerAuthenticationBackend()
  {
    return false;
  }

  template<LW::backends::TransportBackend Backend>
  bool Context::registerTransportBackend()
  {
    return false;
  }

  template<LW::backends::TunnelBackend Backend>
  bool Context::registerTunnelBackend()
  {
    return false;
  }
}

#endif // CONTEXT_H
