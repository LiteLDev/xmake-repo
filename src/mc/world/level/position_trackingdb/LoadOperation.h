#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/world/level/position_trackingdb/AsyncOperationBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

#endif // @header-generator platform
namespace PositionTrackingDB {

class LoadOperation : public ::PositionTrackingDB::AsyncOperationBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mTaskHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mTaskHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoadOperation() /*override*/ = default;

    virtual char const* getDescription() const /*override*/;

    virtual bool _init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) /*override*/;

    virtual bool _tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>,
        ::PositionTrackingDB::TrackingRecord&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getDescription() const;

    MCAPI bool $_init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    MCAPI bool
    $_tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PositionTrackingDB
