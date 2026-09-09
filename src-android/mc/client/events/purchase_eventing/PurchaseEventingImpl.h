#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/IPurchaseEventing.h"

// auto generated forward declare list
// clang-format off
class IEventClientPlatformInfo;
class IEventFilter;
class IEventRecorder;
class IEventTime;
// clang-format on

namespace PurchaseEventing {

class PurchaseEventingImpl : public ::IPurchaseEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IEventRecorder>>>           mRecorder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IEventFilter>>>             mFilter;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IEventClientPlatformInfo>>> mPlatform;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IEventTime>>>               mTime;
    // NOLINTEND
};

} // namespace PurchaseEventing
