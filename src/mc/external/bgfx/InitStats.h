#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/InitState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct InitStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx::InitState> currentState;
    // NOLINTEND
};
#else // @header-generator platform
struct InitStats {};
#endif // @header-generator platform

} // namespace bgfx
