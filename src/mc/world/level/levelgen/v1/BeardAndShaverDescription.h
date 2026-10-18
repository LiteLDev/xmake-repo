#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BeardingDescriptionCache.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
struct BeardKernel;
// clang-format on

class BeardAndShaverDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::BeardingDescriptionCache const> mCache;
    ::ll::TypedStorage<8, 8, ::BeardKernel const&>              mBeardKernel;
    ::ll::TypedStorage<4, 4, float const>                       mMinBeardWidth;
    ::ll::TypedStorage<4, 4, float const>                       mMaxBeardWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BeardAndShaverDescription(BeardAndShaverDescription const&);
#endif // @header-generator platform
    BeardAndShaverDescription();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BeardAndShaverDescription(::BeardingDescriptionCache const, ::BeardKernel const&, float, float);

    MCNAPI float calculateContribution(::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BeardingDescriptionCache const, ::BeardKernel const&, float, float);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
