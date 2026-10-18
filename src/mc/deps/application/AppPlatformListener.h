#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PushNotificationMessage;
// clang-format on

class AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLowMemorySubscription;
    ::ll::TypedStorage<1, 1, bool>                             mListenerRegistered;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AppPlatformListener();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatformListener();

    virtual void onAppPaused();

    virtual void onAppUnpaused();

    virtual void onAppPreSuspended();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual void onAppTerminated();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onOperationModeChanged(::OperationMode const);
#else // @header-generator platform
    virtual void onOperationModeChanged(::OperationMode const operationMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPerformanceModeChanged(bool const);
#else // @header-generator platform
    virtual void onPerformanceModeChanged(bool const boost);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPushNotificationReceived(::PushNotificationMessage const&);
#else // @header-generator platform
    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg);
#endif // @header-generator platform

    virtual void onResizeBegin();

    virtual void onResizeEnd();

    virtual void onDeviceLost();

    virtual void onAppSurfaceCreated();

    virtual void onAppSurfaceDestroyed();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onClipboardCopy(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onClipboardCopy(::std::string const&);
#else // LL_PLAT_C
    virtual void onClipboardCopy(::std::string const& clipString);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onClipboardPaste(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onClipboardPaste(::std::string const&);
#else // LL_PLAT_C
    virtual void onClipboardPaste(::std::string const& clipString);
#endif
#endif // @header-generator platform

    virtual void onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AppPlatformListener(bool);
#else // @header-generator platform
    MCAPI void initListener(float priority);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initListener(float);

    MCNAPI void terminate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void terminate();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppPaused();
#else // @header-generator platform
    MCFOLD void $onAppPaused();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppUnpaused();
#else // @header-generator platform
    MCFOLD void $onAppUnpaused();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppPreSuspended();
#else // @header-generator platform
    MCFOLD void $onAppPreSuspended();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppSuspended();
#else // @header-generator platform
    MCFOLD void $onAppSuspended();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppResumed();
#else // @header-generator platform
    MCFOLD void $onAppResumed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppFocusLost();
#else // @header-generator platform
    MCFOLD void $onAppFocusLost();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppFocusGained();
#else // @header-generator platform
    MCFOLD void $onAppFocusGained();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppTerminated();
#else // @header-generator platform
    MCFOLD void $onAppTerminated();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onOperationModeChanged(::OperationMode const);
#else // @header-generator platform
    MCFOLD void $onOperationModeChanged(::OperationMode const operationMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPerformanceModeChanged(bool const);
#else // @header-generator platform
    MCFOLD void $onPerformanceModeChanged(bool const boost);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPushNotificationReceived(::PushNotificationMessage const&);
#else // @header-generator platform
    MCFOLD void $onPushNotificationReceived(::PushNotificationMessage const& msg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onResizeBegin();
#else // @header-generator platform
    MCFOLD void $onResizeBegin();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onResizeEnd();
#else // @header-generator platform
    MCFOLD void $onResizeEnd();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDeviceLost();
#else // @header-generator platform
    MCFOLD void $onDeviceLost();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppSurfaceCreated();
#else // @header-generator platform
    MCFOLD void $onAppSurfaceCreated();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppSurfaceDestroyed();
#else // @header-generator platform
    MCFOLD void $onAppSurfaceDestroyed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onClipboardCopy(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onClipboardCopy(::std::string const&);
#else // LL_PLAT_C
    MCFOLD void $onClipboardCopy(::std::string const& clipString);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onClipboardPaste(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onClipboardPaste(::std::string const&);
#else // LL_PLAT_C
    MCFOLD void $onClipboardPaste(::std::string const& clipString);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLowMemory(::LowMemorySeverity);
#else // @header-generator platform
    MCFOLD void $onLowMemory(::LowMemorySeverity);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
