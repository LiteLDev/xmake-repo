#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/social/IToastManager.h"
#include "mc/client/social/ToastChannel.h"
#include "mc/client/social/ToastMessage.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/client/social/ToastState.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IToastEventListener;
class IToastListener;
class Option;
class PushNotificationMessage;
class RecipeToastDataViewer;
class ResourcePackManager;
struct ToastIconData;
namespace Json { class Value; }
// clang-format on

class ToastManager : public ::IToastManager,
                     public ::Bedrock::Threading::EnableQueueForMainThread,
                     public ::std::enable_shared_from_this<ToastManager>,
                     public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<4, 4, ::ToastState> mState;
    ::ll::UntypedStorage<8, 24> mResourcePackManager;
    ::ll::TypedStorage<8, 320, std::optional<ToastMessage>> mCurrentMessage;
    ::ll::TypedStorage<8, 24, std::vector<ToastMessage>> mQueuedToastMessages;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ToastChannel, IToastListener*>>> mListeners;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IToastEventListener*>>> mEventListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RecipeToastDataViewer>> mIconsViewer;
    ::ll::TypedStorage<1, 1, bool> mToastClicked;
    ::ll::TypedStorage<1, 1, bool> mToastsEnabled;
    ::ll::TypedStorage<1, 1, bool> mRefreshPendingInvites;
    ::ll::TypedStorage<1, 1, bool> mDestroyToast;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mToastStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mToastEndTime;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTimePoint;
    ::ll::TypedStorage<8, 8, ::Option*> mEnableDebugToastsOption;
    ::ll::TypedStorage<8, 24, std::string> mLongestRecipeText;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ToastManager& operator=(ToastManager const&);
    ToastManager(ToastManager const&);
    ToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastManager();

    virtual void pushToast(::ToastMessage&&);

    virtual bool isEditorModeEnabled() const;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ToastManager(::IClientInstance&, ::Option*, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>);

    MCNAPI void _destroyToast();

    MCNAPI std::string _getNewRecipesText() const;

    MCNAPI void _handleInvite(bool);

    MCNAPI bool _isToastAllowed(::ToastMessageType) const;

    MCNAPI void _reportClick();

    MCNAPI void _sendRemoveToast();

    MCNAPI void _sendShowToast(bool const);

    MCNAPI void _sendTTS(bool, std::string const&) const;

    MCNAPI void _setInitialToastValues();

    MCNAPI void _showNewToast();

    MCNAPI void _updateLongestRecipeText();

    MCNAPI float getCurrentToastDisplaySeconds() const;

    MCNAPI float getCurrentToastRemainingDuration() const;

    MCNAPI float getCurrentToastTotalDuration() const;

    MCNAPI ::ToastIconData getIconData();

    MCNAPI std::string const& getLongestRecipeText() const;

    MCNAPI std::string getMoreRecipesTitle() const;

    MCNAPI std::string getRecipeTitle() const;

    MCNAPI std::string getRecipeTranslationText();

    MCNAPI bool getRefreshPendingInvites() const;

    MCNAPI ::ToastMessageType getToastMessageType() const;

    MCNAPI ::ui::ViewRequest handleToastButton();

    MCNAPI bool hasActiveToast() const;

    MCNAPI bool isToastAllowed(::ToastMessageType) const;

    MCNAPI void pushNotificationReceived(::PushNotificationMessage const&);

    MCNAPI void registerEventListener(::gsl::not_null<IToastEventListener*>);

    MCNAPI void registerListener(::IToastListener*, ::ToastChannel);

    MCNAPI void setRefreshPendingInvites(bool);

    MCNAPI void setToastsEnabled(bool);

    MCNAPI void toastAnimatedInEvent();

    MCNAPI void toastAnimatedOutEvent();

    MCNAPI void unregisterEventListener(::gsl::not_null<IToastEventListener*>);

    MCNAPI void unregisterListener(::IToastListener*);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&, ::Option*, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $pushToast(::ToastMessage&&);

    MCNAPI bool $isEditorModeEnabled() const;

    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/social/IToastManager.h"
#include "mc/client/social/ToastChannel.h"
#include "mc/client/social/ToastMessage.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/client/social/ToastState.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IToastEventListener;
class IToastListener;
class Option;
class PushNotificationMessage;
class RecipeToastDataViewer;
class ResourcePackManager;
// clang-format on

class ToastManager : public ::IToastManager,
                     public ::Bedrock::Threading::EnableQueueForMainThread,
                     public ::ResourcePackListener,
                     public ::std::enable_shared_from_this<::ToastManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                             mClient;
    ::ll::TypedStorage<4, 4, ::ToastState>                                                   mState;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>>          mResourcePackManager;
    ::ll::TypedStorage<8, 376, ::std::optional<::ToastMessage>>                              mCurrentMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::ToastMessage>>                                 mQueuedToastMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ToastChannel, ::IToastListener*>>> mListeners;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IToastEventListener*>>>        mEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RecipeToastDataViewer>>                     mIconsViewer;
    ::ll::TypedStorage<1, 1, bool>                                                           mToastClicked;
    ::ll::TypedStorage<1, 1, bool>                                                           mToastsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                           mRefreshPendingInvites;
    ::ll::TypedStorage<1, 1, bool>                                                           mDestroyToast;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mToastStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mToastEndTime;
    ::ll::TypedStorage<4, 4, float>                                                          mDeltaTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mLastUpdateTimePoint;
    ::ll::TypedStorage<8, 8, ::Option*>                                                      mEnableDebugToastsOption;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mLongestRecipeText;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastManager& operator=(ToastManager const&);
    ToastManager(ToastManager const&);
    ToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastManager() /*override*/ = default;

    virtual void pushToast(::ToastMessage&& message) /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToastManager(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );

    MCAPI void _destroyToast();

    MCAPI ::std::string _getNewRecipesText() const;

    MCAPI void _handleInvite(bool parseJSON);

    MCAPI bool _isToastAllowed(::ToastMessageType messageType) const;

    MCAPI void _reportClick();

    MCAPI void _sendShowToast(bool const animateIn);

    MCAPI void _sendTTS(bool useIndication, ::std::string const& message) const;

    MCAPI void _setInitialToastValues();

    MCAPI void _showNewToast();

    MCAPI void _updateLongestRecipeText();

    MCAPI ::std::string getMoreRecipesTitle() const;

    MCAPI ::std::string getRecipeTranslationText();

    MCAPI ::ui::ViewRequest handleToastButton();

    MCAPI void pushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void unregisterListener(::IToastListener* listener);

    MCAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $pushToast(::ToastMessage&& message);

    MCAPI bool $isEditorModeEnabled() const;

    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND
};
#else // @header-generator platform
class ToastManager {};
#endif // @header-generator platform
#endif // @header-generator platform
