#pragma once

#include "lwbackends.h"

class LWContext
{
public:
  LWContext();

  template<LW::backends::AuthenticationBackend T>
  bool registerAuthenticationBackend();

  template<LW::backends::TransportBackend T>
  bool registerTransportBackend();

  template<LW::backends::TunnelBackend T>
  bool registerTunnelBackend();
};

