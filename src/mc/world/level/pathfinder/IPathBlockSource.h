#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IPathBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPathBlockSource();
#else // @header-generator platform
    virtual ~IPathBlockSource() = default;
#endif // @header-generator platform

    virtual bool isInWater() const = 0;

    virtual bool isInLava() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWaterBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool isWaterBlock(::BlockPos const& blockPos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLavaBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool isLavaBlock(::BlockPos const& blockPos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlock(::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isSolidBlock(::BlockPos const& blockPos) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
