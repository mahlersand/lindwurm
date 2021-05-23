#pragma once

#include <backend/BackendBase.h>

namespace LW::backend {
	class TransportBackend;

	class TransportBackend :
	        public LW::backend::BackendBase
	{
	public:
		virtual ~TransportBackend();
	};
}
