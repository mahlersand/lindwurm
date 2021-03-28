#pragma once

#include <string>

namespace LW {
  namespace backends {
    template <typename T>
    concept Backend =
      requires {
        T::cname();
        T::version();
      };

    template<typename T>
    concept AuthenticationBackend =
      Backend<T>
      && requires {
        T::beginClientAuthentication();
        T::beginServerAuthentication();
      };

    template<typename T>
    concept TransportBackend =
      Backend<T>
      && requires {
        T::createInterface();
      };

    template<typename T>
    concept TunnelBackend =
      Backend<T>
      && requires {
        T::createTunnel();
      };
  }
}
