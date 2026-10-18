#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/AddressMode.h"
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"
#include "mc/external/render_dragon/rendering/FilterMode.h"

namespace dragon {

struct SamplerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::dragon::rendering::AddressMode        mUAddressMode       : 2;
    ::dragon::rendering::AddressMode        mVAddressMode       : 2;
    ::dragon::rendering::AddressMode        mWAddressMode       : 2;
    ::dragon::rendering::FilterMode         mMinFilter          : 2;
    ::dragon::rendering::FilterMode         mMagFilter          : 2;
    ::dragon::rendering::FilterMode         mMipFilter          : 2;
    ::dragon::rendering::ComparisonFunction mComparisonFunction : 4;
    // NOLINTEND

public:
    // prevent constructor by default
    SamplerDescription();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
