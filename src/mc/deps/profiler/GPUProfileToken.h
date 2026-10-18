#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ScopeToken.h"

namespace Core::Profile {

#if defined(LL_PLAT_A) // @header-generator platform
class GPUProfileToken : public ::Core::Profile::ScopeToken {
public:
    // prevent constructor by default
    GPUProfileToken& operator=(GPUProfileToken const&);
    GPUProfileToken(GPUProfileToken const&);
    GPUProfileToken();
};
#else // @header-generator platform
class GPUProfileToken : public ::Core::Profile::ScopeToken {};
#endif // @header-generator platform

} // namespace Core::Profile
