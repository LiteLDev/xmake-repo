#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/PositionTrackingId.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityId;
#else // @header-generator platform
class CompoundTag;
#endif // @header-generator platform
namespace PositionTrackingDB { class OperationBase; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace PositionTrackingDB { class PositionTrackingDBServer; }
#endif // @header-generator platform
// clang-format on

namespace PositionTrackingDB {

class TrackingRecord {
public:
    // TrackingRecord inner types define
    enum class RecordStatus : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
        OK            = 0,
#else // @header-generator platform
        Ok            = 0,
#endif // @header-generator platform
        PendingUpdate = 1,
        Deleted       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PositionTrackingId>                                             mId;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                                  mDimensionType;
    ::ll::TypedStorage<1, 1, ::PositionTrackingDB::TrackingRecord::RecordStatus>               mStatus;
    ::ll::TypedStorage<1, 1, bool>                                                             mDirty;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<PositionTrackingDB::OperationBase>>> mPendingOperations;
    ::ll::UntypedStorage<1, 32>                                                                mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PositionTrackingId>                                                   mId;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                            mPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                                        mDimensionType;
    ::ll::TypedStorage<1, 1, ::PositionTrackingDB::TrackingRecord::RecordStatus>                     mStatus;
    ::ll::TypedStorage<1, 1, bool>                                                                   mDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PositionTrackingDB::OperationBase>>> mPendingOperations;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityId>>                                                mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _addTransaction(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent,
        ::std::unique_ptr<::PositionTrackingDB::OperationBase>          newTransaction
    );

#ifdef LL_PLAT_C
    MCAPI void deserialize(::CompoundTag const& tag);
#endif

    MCAPI bool processPendingTransactions(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent);

    MCAPI ::CompoundTag serialize() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PositionTrackingDB
