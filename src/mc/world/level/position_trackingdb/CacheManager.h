#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DimensionType;
#endif // @header-generator platform
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class CacheManager {
public:
    // CacheManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TrackingRecordMap = std::map<PositionTrackingId, std::unique_ptr<PositionTrackingDB::TrackingRecord>>;
#else // @header-generator platform
    using TrackingRecordMap = ::std::map<::PositionTrackingId, ::std::unique_ptr<::PositionTrackingDB::TrackingRecord>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<PositionTrackingId, std::unique_ptr<PositionTrackingDB::TrackingRecord>>> mLocalCache;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::PositionTrackingId, ::std::unique_ptr<::PositionTrackingDB::TrackingRecord>>>
        mLocalCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CacheManager& operator=(CacheManager const&);
    CacheManager(CacheManager const&);
    CacheManager();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::not_null<::PositionTrackingDB::TrackingRecord*> createTrackingRecordInLocalCache(
        ::PositionTrackingId const& id,
        ::BlockPos const&           pos,
        ::DimensionType const&      dimension
    );
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace PositionTrackingDB
