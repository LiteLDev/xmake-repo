#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace PositionTrackingDB { class CacheManager; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                          mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PositionTrackingDB::CacheManager>> mLocalCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBClient& operator=(PositionTrackingDBClient const&);
    PositionTrackingDBClient(PositionTrackingDBClient const&);
    PositionTrackingDBClient();
};

} // namespace PositionTrackingDB
