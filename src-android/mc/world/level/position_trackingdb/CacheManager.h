#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class CacheManager {
public:
    // CacheManager inner types define
    using TrackingRecordMap = std::map<PositionTrackingId, std::unique_ptr<PositionTrackingDB::TrackingRecord>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    ::ll::TypedStorage<8, 24, std::map<PositionTrackingId, std::unique_ptr<PositionTrackingDB::TrackingRecord>>> mLocalCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CacheManager& operator=(CacheManager const&);
    CacheManager(CacheManager const&);
    CacheManager();
};

} // namespace PositionTrackingDB
