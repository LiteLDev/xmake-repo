#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class BlockActor;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkViewSource;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class MapItemSavedData;
class Packet;
// clang-format on

class MapItemTrackedActor {
public:
    // MapItemTrackedActor inner types declare
    // clang-format off
    struct UniqueId;
    // clang-format on

    // MapItemTrackedActor inner types define
    enum class Type : int {
        Entity      = 0,
        BlockEntity = 1,
        Other       = 2,
    };

    struct UniqueId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::MapItemTrackedActor::Type> type;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>             keyEntityId;
        ::ll::TypedStorage<4, 12, ::BlockPos>                 keyBlockPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::MapItemTrackedActor::UniqueId>  mUniqueId;
    ::ll::TypedStorage<1, 1, bool>                              mNeedsResend;
    ::ll::TypedStorage<4, 4, uint>                              mMinDirtyX;
    ::ll::TypedStorage<4, 4, uint>                              mMinDirtyY;
    ::ll::TypedStorage<4, 4, uint>                              mMaxDirtyX;
    ::ll::TypedStorage<4, 4, uint>                              mMaxDirtyY;
    ::ll::TypedStorage<4, 4, int>                               mTick;
    ::ll::TypedStorage<4, 4, float>                             mLastRotation;
    ::ll::UntypedStorage<1, 1>                                  mDecorationType;
    ::ll::TypedStorage<4, 4, ::DimensionType>                   mDimensionId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mChunkViewSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::MapItemTrackedActor::UniqueId>      mUniqueId;
    ::ll::TypedStorage<1, 1, bool>                                  mNeedsResend;
    ::ll::TypedStorage<4, 4, uint>                                  mMinDirtyX;
    ::ll::TypedStorage<4, 4, uint>                                  mMinDirtyY;
    ::ll::TypedStorage<4, 4, uint>                                  mMaxDirtyX;
    ::ll::TypedStorage<4, 4, uint>                                  mMaxDirtyY;
    ::ll::TypedStorage<4, 4, int>                                   mTick;
    ::ll::TypedStorage<4, 4, float>                                 mLastRotation;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type>                 mDecorationType;
    ::ll::TypedStorage<4, 4, ::DimensionType>                       mDimensionId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>> mChunkViewSource;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MapItemTrackedActor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> nextUpdatePacket(::MapItemSavedData const&);

    MCNAPI void setNeedsResend();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> nextUpdatePacket(::MapItemSavedData const& savedData);
#endif // @header-generator platform
    // NOLINTEND
};
