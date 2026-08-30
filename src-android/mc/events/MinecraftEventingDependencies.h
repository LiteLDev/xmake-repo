#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IBrazeEventListener;
class IEventFilter;
class IEventRecorder;
class IEventTime;
class IPurchaseEventing;
class IRealmsTelemetry;
class IResourceLoadEventing;
namespace Social::Events { class EventManager; }
// clang-format on

struct MinecraftEventingDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::Events::EventManager>>> mEventManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<uint>>>                         mPrimaryLocalUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IBrazeEventListener>>                           mBraze;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPurchaseEventing>>                              mPurchaseEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IResourceLoadEventing>>                          mResourceLoadEventing;
    ::ll::UntypedStorage<8, 64>                                                               mRealmsTelemetryFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftEventingDependencies& operator=(MinecraftEventingDependencies const&);
    MinecraftEventingDependencies(MinecraftEventingDependencies const&);
    MinecraftEventingDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftEventingDependencies(std::shared_ptr<Social::Events::EventManager>);

    MCNAPI std::unique_ptr<IEventFilter> createEventFilter();

    MCNAPI std::unique_ptr<IEventRecorder> createEventRecorder();

    MCNAPI std::unique_ptr<IEventTime> createTime();

    MCNAPI ~MinecraftEventingDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Social::Events::EventManager>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
