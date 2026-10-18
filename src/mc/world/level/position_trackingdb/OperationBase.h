#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

#endif // @header-generator platform
namespace PositionTrackingDB {

#if defined(LL_PLAT_A) // @header-generator platform
class OperationBase {};
#else // @header-generator platform
class OperationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OperationBase() = default;

    virtual bool tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) = 0;

    virtual char const* getDescription() const = 0;

    virtual bool isAsync() const;

    virtual bool isComplete() const;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace PositionTrackingDB
