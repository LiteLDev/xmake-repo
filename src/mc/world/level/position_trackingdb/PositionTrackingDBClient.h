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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PositionTrackingDBServerBroadcastPacket;
class PositionTrackingId;
#endif // @header-generator platform
namespace PositionTrackingDB { class CacheManager; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace PositionTrackingDB { class TrackingRecord; }
#endif // @header-generator platform
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBClient {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                          mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PositionTrackingDB::CacheManager>> mLocalCache;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                              mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::CacheManager>> mLocalCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBClient& operator=(PositionTrackingDBClient const&);
    PositionTrackingDBClient(PositionTrackingDBClient const&);
    PositionTrackingDBClient();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PositionTrackingDBClient(::Level& level);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);

#ifdef LL_PLAT_C
    MCAPI void onReceivePacket(::PositionTrackingDBServerBroadcastPacket const& packet);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace PositionTrackingDB
