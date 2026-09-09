#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::bgfximpl { struct GPUState; }
namespace dragon::frameobject::components { struct PassState; }
// clang-format on

namespace dragon::framerenderer {

class PrepareUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::bgfximpl::GPUState
    getGPUStateForPassState(::dragon::frameobject::components::PassState const&);
    // NOLINTEND
};

} // namespace dragon::framerenderer
