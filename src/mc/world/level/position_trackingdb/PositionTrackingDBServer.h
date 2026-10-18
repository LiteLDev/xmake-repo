#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/ResultCode.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Level;
class LevelStorage;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PositionTrackingDBClientRequestPacket;
class PositionTrackingId;
#endif // @header-generator platform
class Scheduler;
class TaskGroup;
namespace PositionTrackingDB { class CacheManager; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

#if defined(LL_PLAT_A) // @header-generator platform
class PositionTrackingDBServer : public ::std::enable_shared_from_this<PositionTrackingDB::PositionTrackingDBServer> {
#else // @header-generator platform
class PositionTrackingDBServer : public ::std::enable_shared_from_this<::PositionTrackingDB::PositionTrackingDBServer> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                          mLevel;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                      mCallbackContext;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                   mLevelStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                        mAsyncTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PositionTrackingDB::CacheManager>> mLocalCache;
    ::ll::TypedStorage<8, 24, std::vector<PositionTrackingDB::TrackingRecord*>> mPendingUpdateQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                              mLevel;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                          mCallbackContext;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                       mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mAsyncTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::CacheManager>> mLocalCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::PositionTrackingDB::TrackingRecord*>> mPendingUpdateQueue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBServer& operator=(PositionTrackingDBServer const&);
    PositionTrackingDBServer(PositionTrackingDBServer const&);
    PositionTrackingDBServer();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PositionTrackingDBServer(::Level& level, ::Scheduler& callbackContext);

    MCAPI void
    _beginWriteTrackingRecordToLevelStorage(::PositionTrackingDB::TrackingRecord const* record, bool forceWrite);

    MCAPI void _broadcastUpdateToClients(::PositionTrackingDB::TrackingRecord const* record);

    MCAPI void _initializeNewPositionTrackerId(::PositionTrackingId& inOut, bool writeToPersistent);

    MCAPI ::PositionTrackingDB::ResultCode destroyTracker(::PositionTrackingId const& id, bool forceLocalCacheEntry);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);

    MCAPI void onReceivePacket(::PositionTrackingDBClientRequestPacket const& packet);

    MCAPI bool tick();

    MCAPI ~PositionTrackingDBServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::Scheduler& callbackContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace PositionTrackingDB
