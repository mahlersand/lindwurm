#ifndef CONTEXT_H
#define CONTEXT_H

#include "backends.h"
#include "liblindwurm_global.h"

#include <filesystem>

namespace LW {
  class Context
  {
  public:
    Context();


    template<LW::backends::AuthenticationBackend Backend>
    bool registerAuthenticationBackend();

    template<LW::backends::TransportBackend>
    bool registerTransportBackend();

    template<LW::backends::TunnelBackend>
    bool registerTunnelBackend();
  };
}

#endif // CONTEXT_H
