#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class ILevel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct UpdateBlockSyncedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>              mPos;
    ::ll::TypedStorage<4, 4, uint>                     mLayer;
    ::ll::TypedStorage<1, 1, uchar>                    mUpdateFlags;
    ::ll::TypedStorage<4, 4, uint>                     mRuntimeId;
    ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mEntityBlockSyncMessage;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateBlockSyncedPacketPayload(::BlockPos const&, uint, uint const, uchar, ::ActorBlockSyncMessage const&);

    MCNAPI ::Block const& getBlock(::ILevel const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, uint, uint const, uchar, ::ActorBlockSyncMessage const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
