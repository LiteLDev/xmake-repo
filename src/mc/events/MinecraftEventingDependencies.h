#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social::Events { class EventManager; }
#endif // @header-generator platform
class IBrazeEventListener;
#if defined(LL_PLAT_A) // @header-generator platform
class IEventFilter;
class IEventRecorder;
class IEventTime;
#else // @header-generator platform
#endif // @header-generator platform
class IPurchaseEventing;
class IRealmsTelemetry;
class IResourceLoadEventing;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social::Events { class EventManager; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct MinecraftEventingDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::Events::EventManager>>> mEventManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<uint>>>                         mPrimaryLocalUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IBrazeEventListener>>                           mBraze;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPurchaseEventing>>                              mPurchaseEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IResourceLoadEventing>>                          mResourceLoadEventing;
    ::ll::UntypedStorage<8, 64>                                                               mRealmsTelemetryFactory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Social::Events::EventManager>>> mEventManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<uint>>>                           mPrimaryLocalUser;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IBrazeEventListener>>                           mBraze;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPurchaseEventing>>                              mPurchaseEventing;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IResourceLoadEventing>>                          mResourceLoadEventing;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::std::unique_ptr<::IRealmsTelemetry>() const>>
        mRealmsTelemetryFactory;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MinecraftEventingDependencies& operator=(MinecraftEventingDependencies const&);
    MinecraftEventingDependencies(MinecraftEventingDependencies const&);
#else // @header-generator platform
#endif // @header-generator platform
    MinecraftEventingDependencies();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MinecraftEventingDependencies(std::shared_ptr<Social::Events::EventManager>);

    MCNAPI std::unique_ptr<IEventFilter> createEventFilter();

    MCNAPI std::unique_ptr<IEventRecorder> createEventRecorder();

    MCNAPI std::unique_ptr<IEventTime> createTime();
#else // @header-generator platform
    MCNAPI explicit MinecraftEventingDependencies(::std::shared_ptr<::Social::Events::EventManager> events);
#endif // @header-generator platform

    MCNAPI ~MinecraftEventingDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<Social::Events::EventManager>);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::shared_ptr<::Social::Events::EventManager> events);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
