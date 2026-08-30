#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelStorage;
class Scheduler;
class TaskGroup;
namespace PositionTrackingDB { class CacheManager; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBServer : public ::std::enable_shared_from_this<PositionTrackingDB::PositionTrackingDBServer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                          mLevel;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                      mCallbackContext;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                   mLevelStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                        mAsyncTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PositionTrackingDB::CacheManager>> mLocalCache;
    ::ll::TypedStorage<8, 24, std::vector<PositionTrackingDB::TrackingRecord*>> mPendingUpdateQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBServer& operator=(PositionTrackingDBServer const&);
    PositionTrackingDBServer(PositionTrackingDBServer const&);
    PositionTrackingDBServer();
};

} // namespace PositionTrackingDB
