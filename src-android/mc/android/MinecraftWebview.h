#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/code_builder/detail/WebviewInterfaceBase.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/platform/android/ScopedJObject.h"
#include "mc/platform/webview/PlatformArguments.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct WebviewError;
// clang-format on

class MinecraftWebview : public ::WebviewInterfaceBase,
                         public ::std::enable_shared_from_this<MinecraftWebview>,
                         public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_JavaVM&>               mVM;
    ::ll::TypedStorage<8, 8, ::Bedrock::ScopedJObject> mViewInstance;
    ::ll::TypedStorage<4, 4, int>                      mId;
    ::ll::UntypedStorage<8, 32>                        mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftWebview();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftWebview();

    virtual void setRect(::RectangleArea const&);

    virtual void setPropagatedAlpha(float);

    virtual void setMuted(bool);

    virtual void setUrl(std::string const&, bool);

    virtual void setShowView(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftWebview(::_JavaVM&, ::Webview::PlatformArguments&&);

    MCNAPI void OnProcessMessageReceived(std::string const&, std::string const&, std::string const&);

    MCNAPI void init();

    MCNAPI void postErrorOnMainThread(::WebviewError const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::_JavaVM&, ::Webview::PlatformArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setRect(::RectangleArea const&);

    MCNAPI void $setPropagatedAlpha(float);

    MCNAPI void $setMuted(bool);

    MCNAPI void $setUrl(std::string const&, bool);

    MCNAPI void $setShowView(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
