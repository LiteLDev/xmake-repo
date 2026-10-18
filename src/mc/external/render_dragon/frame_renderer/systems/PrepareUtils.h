#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::bgfximpl { struct GPUState; }
namespace dragon::frameobject::components { struct PassState; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
class PrepareUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::bgfximpl::GPUState
    getGPUStateForPassState(::dragon::frameobject::components::PassState const&);
    // NOLINTEND
};
#else // @header-generator platform
class PrepareUtils {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
