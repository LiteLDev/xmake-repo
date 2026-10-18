#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct DepthBiasState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mDepthBiasConst;
    ::ll::TypedStorage<4, 4, float> mDepthBiasSlope;
    ::ll::TypedStorage<4, 4, float> mDepthBiasClamp;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::rendering::DepthBiasState getDefault();
    // NOLINTEND
};
#else // @header-generator platform
struct DepthBiasState {};
#endif // @header-generator platform

} // namespace dragon::rendering
