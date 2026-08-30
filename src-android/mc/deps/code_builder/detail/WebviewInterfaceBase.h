#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/platform/WebviewInterface.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class WebviewObserver;
struct WebviewDownloadInfo;
struct WebviewError;
namespace Core { class SingleThreadedLock; }
// clang-format on

class WebviewInterfaceBase : public ::AppPlatformListener, public ::WebviewInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::RectangleArea> mRect;
    ::ll::TypedStorage<4, 4, float>            mAlpha;
    ::ll::TypedStorage<1, 1, bool>             mMuted;
    ::ll::TypedStorage<8, 24, std::string>     mUrl;
    ::ll::TypedStorage<1, 1, bool>             mIsShown;
    ::ll::TypedStorage<1, 1, bool>             mResizing;
    ::ll::TypedStorage<1, 1, bool>             mIsLoaded;
    ::ll::TypedStorage<1, 1, bool>             mHandlesReset;
    ::ll::TypedStorage<1, 1, bool>             mSendSignal;
    ::ll::UntypedStorage<8, 48>                mMessageSender;
    ::ll::UntypedStorage<8, 16>                mSubject;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebviewInterfaceBase();

    virtual void onAppSuspended();

    virtual void onResizeBegin();

    virtual void onResizeEnd();

    virtual void addObserver(::WebviewObserver&);

    virtual void clearObservers();

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

    virtual bool isShown() const;

    virtual bool isLoaded() const;

    virtual bool handlesLoadingCallbacks();

    virtual void onError(::WebviewError const&);

    virtual bool handlesResetCallbacks();

    virtual void setCanReset(bool);

    virtual void onWebviewChanged();

    virtual void onDownloadBegin(::WebviewDownloadInfo const&);

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

    virtual void onDownloadComplete(::WebviewDownloadInfo const&);

    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);

    virtual void onMessageRecieved(std::string const&) const;

    virtual void sendMessage(std::string const&);

    virtual void requestSetRect(::RectangleArea const&);

    virtual void requestSetPropagatedAlpha(float);

    virtual void requestSetMuted(bool);

    virtual void requestSetUrl(std::string const&, bool);

    virtual void requestSetShowView(bool);

    virtual void requestReset();

    virtual void setRect(::RectangleArea const&) = 0;

    virtual void setPropagatedAlpha(float) = 0;

    virtual void setMuted(bool) = 0;

    virtual void setUrl(std::string const&, bool) = 0;

    virtual void setShowView(bool) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebviewInterfaceBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onResizeBegin();

    MCNAPI void $onResizeEnd();

    MCNAPI void $addObserver(::WebviewObserver&);

    MCNAPI void $clearObservers();

    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

    MCNAPI bool $isShown() const;

    MCNAPI bool $isLoaded() const;

    MCNAPI bool $handlesLoadingCallbacks();

    MCNAPI void $onError(::WebviewError const&);

    MCNAPI bool $handlesResetCallbacks();

    MCNAPI void $setCanReset(bool);

    MCNAPI void $onWebviewChanged();

    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCNAPI void $onMessageRecieved(std::string const&) const;

    MCNAPI void $sendMessage(std::string const&);

    MCNAPI void $requestSetRect(::RectangleArea const&);

    MCNAPI void $requestSetPropagatedAlpha(float);

    MCNAPI void $requestSetMuted(bool);

    MCNAPI void $requestSetUrl(std::string const&, bool);

    MCNAPI void $requestSetShowView(bool);

    MCNAPI void $requestReset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
