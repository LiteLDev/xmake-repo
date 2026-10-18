#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class ILevel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct UpdateBlockPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, uint>        mLayer;
    ::ll::TypedStorage<1, 1, uchar>       mUpdateFlags;
    ::ll::TypedStorage<4, 4, uint>        mRuntimeId;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateBlockPacketPayload(::BlockPos const&, uint, uint const, uchar);

    MCNAPI ::Block const& getBlock(::ILevel const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, uint, uint const, uchar);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
