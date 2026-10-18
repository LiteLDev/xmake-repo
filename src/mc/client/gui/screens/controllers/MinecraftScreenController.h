#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/SafeZoneBuffer.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/gui/screens/controllers/SplitScreenPosition.h"
#include "mc/client/gui/screens/controllers/UpdateSliderProgressMode.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/InputMode.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class DropdownScreenController;
class FilePickerSettings;
class ItemInstance;
class MinecraftScreenModel;
class UIPropertyBag;
struct ModalScreenData;
struct PDFOptions;
struct SplitScreenInfo;
namespace Core { class Path; }
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

class MinecraftScreenController : public ::ScreenController,
                                  public ::Bedrock::EnableNonOwnerReferences,
                                  public ::std::enable_shared_from_this<MinecraftScreenController> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/SafeZoneBuffer.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/gui/screens/controllers/UpdateSliderProgressMode.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/InputMode.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class DropdownScreenController;
class MinecraftScreenModel;
class UIPropertyBag;
struct ModalScreenData;
struct PDFOptions;
namespace Core { class Path; }
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

class MinecraftScreenController : public ::ScreenController,
                                  public ::Bedrock::EnableNonOwnerReferences,
                                  public ::std::enable_shared_from_this<::MinecraftScreenController> {
#else // @header-generator platform
class MinecraftScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecraftScreenController inner types declare
    // clang-format off
    struct LeaveScreenInfo;
    // clang-format on

    // MinecraftScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct LeaveScreenInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         mShouldLeave;
        ::ll::TypedStorage<8, 24, std::string> mExpectedScreenName;
        // NOLINTEND

    public:
        // prevent constructor by default
        LeaveScreenInfo& operator=(LeaveScreenInfo const&);
        LeaveScreenInfo(LeaveScreenInfo const&);
    };

    using ProgressSliderOptionLabeller = std::function<std::string(const std::string&, float, bool)>;

    using BooleanOptionGetter = std::function<bool()>;

    using IntegerOptionGetter = std::function<int()>;

    using IntegerOptionSetter = std::function<void(int)>;

    using CollectionBooleanOptionGetter = std::function<bool(int)>;

    using CollectionIntegerOptionGetter = std::function<int(int)>;

    using CollectionIntegerOptionSetter = std::function<void(int, int)>;

    using StringOptionGetter = std::function<std::string()>;

    using FloatOptionGetter = std::function<float()>;

    using FloatOptionSetter = std::function<void(float)>;

    using StepSliderOptionLabeller = std::function<std::string(int)>;

    using IntValuesVectorGetter = std::function<std::vector<int>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftScreenModel>>              mMinecraftScreenModel;
    ::ll::TypedStorage<4, 4, ::ScreenExitBehavior>                                mExitBehavior;
    ::ll::TypedStorage<4, 4, ::InputMode>                                         mInputMode;
    ::ll::TypedStorage<4, 4, ::InputMode>                                         mPreviousInputMode;
    ::ll::UntypedStorage<1, 12>                                                   mPlayerDied;
    ::ll::UntypedStorage<8, 48>                                                   mModalDialogResultCallback;
    ::ll::TypedStorage<8, 24, std::string>                                        mTTSTitle;
    ::ll::TypedStorage<8, 24, std::string>                                        mTTSDialogMessage;
    ::ll::TypedStorage<8, 32, ::MinecraftScreenController::LeaveScreenInfo>       mLeaveScreen;
    ::ll::TypedStorage<1, 1, bool>                                                mRayTracingActive;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<bool>>> mDropDownActive;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>>               mStepSliderValues;
    ::ll::TypedStorage<1, 1, bool>                                                mIsShowErrorScreenInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onInit();

    virtual void onDelete();

    virtual ::ui::ViewRequest tryExit();

    virtual void leaveScreen(std::string const&);

    virtual bool bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual bool bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual void setSuspendInput(bool);

    virtual void setSuspendDirectionalInput(bool);

    virtual uint getSceneId() const;

    virtual bool _doesScreenHaveExitBehavior() const;

    virtual bool _isStillValid() const;

    virtual bool _getGamepadHelperVisible() const;

    virtual bool _getMixedHelperVisible() const;

    virtual bool _getKeyboardHelperVisible() const;

    virtual bool _getGestureControlEnabled() const;

    virtual std::string _getButtonStartDescription();

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonBDescription();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();

    virtual std::string _getButtonKeyboardDescription();

    virtual std::string _getScreenName() const;

    virtual ::ui::ViewRequest promptConnect(bool, std::function<void (Social::UserPlatformConnectionResult)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>, ::ScreenExitBehavior, bool);

    MCNAPI void _attemptAddFriends(std::function<void()>);

    MCNAPI void _attemptConnect(std::function<void(Social::UserPlatformConnectionResult)>);

    MCNAPI bool _attemptSignIn(
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(Social::MultiIdentitySigninResult)>
    );

    MCNAPI bool _checkRealmCreatePermissions();

    MCNAPI void _closeJsonDefinedControlPopup(std::string const&, std::string const&);

    MCNAPI void _closeModalDialog();

    MCNAPI void _displayCustomModalPopup(::ModalScreenData const&, std::function<void(ModalScreenButtonId)>);

    MCNAPI void
    _displayJsonDefinedControlPopup(::UIPropertyBag const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void _displayJsonDefinedControlPopup(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void _displayPrivilegesBlockedModalPopup(std::string const&, std::string const&, bool);

    MCNAPI void _displaySignOutFailedModalPopup(std::string const&);

    MCNAPI void _displayStandardModalPopup(
        std::string const&,
        std::string const&,
        ::ModalScreenButtonMode,
        std::function<void(bool)>,
        std::string const&
    );

    MCNAPI void _gateRealmsWhenCrossPlatformIsDisabled(std::function<void()>);

    MCNAPI ::NetworkFilter _getNetworkFilter() const;

    MCNAPI void _handleSignInFailure(
        ::Social::MultiIdentitySigninResult const&,
        std::function<void(Social::MultiIdentitySigninResult)>,
        bool
    );

    MCNAPI bool _isApprovedLink(std::string const&) const;

    MCNAPI ::ui::ViewRequest _onModalEventReceived(::ModalScreenButtonId, bool);

    MCNAPI void _promptEduSwitchAccounts(bool, std::string const&, ::LastClickedSource);

    MCNAPI bool _resolveSafeZoneVisibility(::SafeZoneBuffer) const;

    MCNAPI std::string const _retrieveBindingValueFromPropertyBag(std::string const&, ::UIPropertyBag&) const;

    MCNAPI void _setExitBehavior(::ScreenExitBehavior);

    MCNAPI void _showLiveMultiplayerModal();

    MCNAPI void _showNoWifiModal();

    MCNAPI bool _tryNavigateToXblUpsellScreen();

    MCNAPI bool _tryShowSuspendWarningModal(std::function<void()>);

    MCNAPI bool _usingGamepadBehavior() const;

    MCNAPI void closeJsonDefinedControlPopup(std::string const&, std::string const&);

    MCNAPI void displayJsonDefinedControlPopup(std::string const&, std::string const&, std::string const&);

    MCNAPI void exportPDF(::PDFOptions, std::string const&, std::function<void(bool)>);

    MCNAPI void exportWorld(std::string const&, std::string const&, ::FileArchiver::ExportType);

    MCNAPI void gateOnPlatformSignInForStoreAccess(std::function<void()>);

    MCNAPI ::InputMode getInputMode() const;

    MCNAPI bool isRayTracingEnabled() const;

    MCNAPI bool isUsingGamepadBehavior() const;

    MCNAPI ::ui::ViewRequest promptSignIn(
        ::Social::IdentitySignInTrigger,
        std::string const&,
        std::function<void(Social::MultiIdentitySigninResult)>
    );

    MCNAPI std::shared_ptr<DropdownScreenController> setUpCallbacksForCollectionDropdownOption(
        std::string const&,
        int const&,
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&,
        std::string const&,
        std::function<bool(int)>,
        std::function<int(int)>,
        std::function<void(int, int)>
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        ::OptionID,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&,
        std::function<int()>,
        std::function<void(int)>
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&,
        std::string const&,
        std::function<bool()>,
        std::function<int()>,
        std::function<void(int)>
    );

    MCNAPI void setUpCallbacksForFloatOption(
        ::OptionID,
        std::string const&,
        std::string const&,
        std::function<std::string(const std::string&, float, bool)>,
        ::UpdateSliderProgressMode
    );

    MCNAPI void setUpCallbacksForFloatOption(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<std::string()>,
        std::function<bool()>,
        std::function<float()>,
        std::function<void(float)>,
        std::function<float()>,
        std::function<float()>,
        std::string const&,
        std::function<std::string(const std::string&, float, bool)>,
        ::UpdateSliderProgressMode
    );

    MCNAPI void setUpCallbacksForNestedButtonInCollection(
        std::string const&,
        std::string const&,
        std::string,
        std::function<int(UIPropertyBag&)>,
        std::function<bool(UIPropertyBag&, int)>,
        std::vector<uint>
    );

    MCNAPI void setUpCallbacksForStackPanelGrid(
        std::string const&,
        std::function<int()>,
        std::function<int()>,
        std::function<int()>
    );

    MCNAPI void setUpCallbacksForStepOption(::OptionID, std::string const&, std::function<std::string(int)>, bool);

    MCNAPI void setUpCallbacksForStepOption(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<std::string()>,
        std::function<bool()>,
        std::function<std::vector<int>()>,
        std::function<int()>,
        std::function<void(int)>,
        std::function<std::string(int)>,
        bool,
        ::OptionID
    );

    MCNAPI void showPickFileDialog(std::shared_ptr<FilePickerSettings>);

    MCNAPI void showPlayerProfile(std::string const&, std::string const&);

    MCNAPI void showRemoteStorageErrorModal(::Core::Path const&);

    MCNAPI ::ui::ViewRequest showSignIn();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getControllerSliderOptionTitle();

    MCNAPI static ::ModalScreenData getProfanityModalData();

    MCNAPI static ::OptionID const getSliderOptionID();

    MCNAPI static int packItemInstance(::ItemInstance const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& defaultOptionFormat();

    MCNAPI static std::function<std::string(const std::string&, float, bool)>& defaultProgressSliderOptionLabeller();

    MCNAPI static ::UpdateSliderProgressMode const& defaultUpdateSliderProgressMode();

    MCNAPI static ::OptionID& mSliderOptionID();

    MCNAPI static std::string& mSliderOptionTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::ScreenExitBehavior, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onInit();

    MCNAPI void $onDelete();

    MCNAPI ::ui::ViewRequest $tryExit();

    MCNAPI void $leaveScreen(std::string const&);

    MCNAPI bool $bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI bool $bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI void $setSuspendInput(bool);

    MCNAPI void $setSuspendDirectionalInput(bool);

    MCNAPI uint $getSceneId() const;

    MCNAPI bool $_doesScreenHaveExitBehavior() const;

    MCNAPI bool $_isStillValid() const;

    MCNAPI bool $_getGamepadHelperVisible() const;

    MCNAPI bool $_getMixedHelperVisible() const;

    MCNAPI bool $_getKeyboardHelperVisible() const;

    MCNAPI bool $_getGestureControlEnabled() const;

    MCNAPI std::string $_getButtonStartDescription();

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonBDescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();

    MCNAPI std::string $_getButtonKeyboardDescription();

    MCNAPI std::string $_getScreenName() const;

    MCNAPI ::ui::ViewRequest $promptConnect(bool, std::function<void(Social::UserPlatformConnectionResult)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LeaveScreenInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>           mShouldLeave;
        ::ll::TypedStorage<8, 32, ::std::string> mExpectedScreenName;
        // NOLINTEND
    };

    using BooleanOptionGetter = ::std::function<bool()>;

    using IntegerOptionGetter = ::std::function<int()>;

    using IntegerOptionSetter = ::std::function<void(int)>;

    using CollectionBooleanOptionGetter = ::std::function<bool(int)>;

    using CollectionIntegerOptionGetter = ::std::function<int(int)>;

    using CollectionIntegerOptionSetter = ::std::function<void(int, int)>;

    using StepSliderOptionLabeller = ::std::function<::std::string(int)>;

    using IntValuesVectorGetter = ::std::function<::std::vector<int>()>;

    using StringOptionGetter = ::std::function<::std::string()>;

    using ProgressSliderOptionLabeller = ::std::function<::std::string(::std::string const&, float, bool)>;

    using FloatOptionGetter = ::std::function<float()>;

    using FloatOptionSetter = ::std::function<void(float)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftScreenModel>>                mMinecraftScreenModel;
    ::ll::TypedStorage<4, 4, ::ScreenExitBehavior>                                      mExitBehavior;
    ::ll::TypedStorage<4, 4, ::InputMode>                                               mInputMode;
    ::ll::TypedStorage<4, 4, ::InputMode>                                               mPreviousInputMode;
    ::ll::TypedStorage<1, 1, bool>                                                      mPlayerDied;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ModalScreenButtonId)>>             mModalDialogResultCallback;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTTSTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTTSDialogMessage;
    ::ll::TypedStorage<8, 40, ::MinecraftScreenController::LeaveScreenInfo>             mLeaveScreen;
    ::ll::TypedStorage<1, 1, bool>                                                      mRayTracingActive;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<bool>>> mDropDownActive;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>                 mStepSliderValues;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsShowErrorScreenInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScreenController() /*override*/;

    virtual ::ui::ViewRequest tryExit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual uint getSceneId() const /*override*/;

    virtual void setSuspendInput(bool suspendInput) /*override*/;

    virtual void setSuspendDirectionalInput(bool suspendDirectionalInput) /*override*/;

    virtual void leaveScreen(::std::string const& expectedScreenName) /*override*/;

    virtual void onInit() /*override*/;

    virtual void onDelete() /*override*/;

    virtual void onOpen() /*override*/;

    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual bool _doesScreenHaveExitBehavior() const /*override*/;

    virtual bool _isStillValid() const;

    virtual bool _getGamepadHelperVisible() const;

    virtual bool _getMixedHelperVisible() const;

    virtual bool _getKeyboardHelperVisible() const;

    virtual bool _getGestureControlEnabled() const;

    virtual ::std::string _getButtonStartDescription();

    virtual ::std::string _getButtonADescription();

    virtual ::std::string _getButtonBDescription();

    virtual ::std::string _getButtonXDescription();

    virtual ::std::string _getButtonYDescription();

    virtual ::std::string _getButtonKeyboardDescription();

    virtual ::std::string _getScreenName() const;

    virtual ::ui::ViewRequest
    promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::ScreenExitBehavior                      exitBehavior,
        bool                                      usesErrorPopupInfo
    );

    MCAPI void _attemptAddFriends(::std::function<void()> callback);

    MCAPI void _attemptConnect(::std::function<void(::Social::UserPlatformConnectionResult)> callback);

    MCAPI bool _attemptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCAPI bool _checkRealmCreatePermissions();

    MCAPI void _closeModalDialog();

    MCAPI void
    _displayCustomModalPopup(::ModalScreenData const& modalData, ::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _displayJsonDefinedControlPopup(
        ::UIPropertyBag const& popupBag,
        ::std::string const&   factory,
        ::std::string const&   ttsTitle,
        ::std::string const&   ttsContent
    );

    MCAPI void _displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name,
        ::std::string const& ttsTitle,
        ::std::string const& ttsContent
    );

    MCAPI void _displayPrivilegesBlockedModalPopup(
        ::std::string const& messageString,
        ::std::string const& closeButtonTitle,
        bool                 showOpenAccountSettingButton
    );

    MCAPI void _displaySignOutFailedModalPopup(::std::string const& error);

    MCAPI void _displayStandardModalPopup(
        ::std::string const&        title,
        ::std::string const&        message,
        ::ModalScreenButtonMode     buttonNumber,
        ::std::function<void(bool)> callback,
        ::std::string const&        telemetryOverride
    );

    MCAPI void _gateRealmsWhenCrossPlatformIsDisabled(::std::function<void()> callback);

    MCAPI int
    _getStepSliderValue(::std::function<int()> getValue, ::std::string const& valueBindingName, bool continuousUpdate);

    MCAPI void _handleSignInFailure(
        ::Social::MultiIdentitySigninResult const&                 signInResult,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback,
        bool                                                       isAutoSignIn
    );

    MCAPI bool _isApprovedLink(::std::string const& hyperlink) const;

    MCAPI ::ui::ViewRequest _onModalEventReceived(::ModalScreenButtonId modalResult, bool buttonClosesModal);

    MCAPI void
    _promptEduSwitchAccounts(bool showModal, ::std::string const& buttonName, ::LastClickedSource lastClickedSource);

    MCAPI bool _resolveSafeZoneVisibility(::SafeZoneBuffer buffer) const;

    MCAPI ::std::string const
    _retrieveBindingValueFromPropertyBag(::std::string const& bindingName, ::UIPropertyBag& propertyBag) const;

    MCAPI void _showLiveMultiplayerModal();

    MCAPI void _showMobileDataBlockedModal();

    MCAPI void _showNoWifiModal();

    MCAPI void _showServerCapacityFullModal();

    MCAPI bool _tryNavigateToXblUpsellScreen();

    MCAPI bool _tryShowSuspendWarningModal(::std::function<void()> onConfirm);

    MCAPI void displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name
    );

    MCAPI void
    exportPDF(::PDFOptions options, ::std::string const& defaultOutName, ::std::function<void(bool)> onComplete);

    MCAPI void
    exportWorld(::std::string const& levelId, ::std::string const& levelName, ::FileArchiver::ExportType type);

    MCAPI void gateOnPlatformSignInForStoreAccess(::std::function<void()> callback);

    MCAPI ::ui::ViewRequest promptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCAPI ::std::shared_ptr<::DropdownScreenController> setUpCallbacksForCollectionDropdownOption(
        ::std::string const&                            collectionName,
        int const&                                      collectionSize,
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool(int)>                      isEnabled,
        ::std::function<int(int)>                       getValue,
        ::std::function<void(int, int)>                 setValue
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::OptionID                                      optionID,
        ::std::string const&                            dropdownName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& nameLabelPairs,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool()>                         isEnabled,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void setUpCallbacksForFloatOption(
        ::OptionID                                                        optionID,
        ::std::string const&                                              sliderName,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCAPI void setUpCallbacksForFloatOption(
        ::std::string const&                                              sliderName,
        ::std::string const&                                              valueBindingName,
        ::std::string const&                                              enabledBindingName,
        ::std::string const&                                              labelBindingName,
        ::std::string const&                                              ttsBindingName,
        ::std::function<::std::string()>                                  getOptionName,
        ::std::function<bool()>                                           isEnabled,
        ::std::function<float()>                                          getValue,
        ::std::function<void(float)>                                      setValue,
        ::std::function<float()>                                          getMin,
        ::std::function<float()>                                          getMax,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCAPI void setUpCallbacksForNestedButtonInCollection(
        ::std::string const&                         nestedBaseButtonId,
        ::std::string const&                         nestedControlEnabledBinding,
        ::std::string                                firstControlName,
        ::std::function<int(::UIPropertyBag&)>       indexSelectionFunc,
        ::std::function<bool(::UIPropertyBag&, int)> visibilityFunction,
        ::std::vector<uint>                          ignoredControls
    );

    MCAPI void setUpCallbacksForStackPanelGrid(
        ::std::string const&   gridCollectionPrefix,
        ::std::function<int()> widthCallback,
        ::std::function<int()> heightCallback,
        ::std::function<int()> itemCountCallback
    );

    MCAPI void setUpCallbacksForStepOption(
        ::OptionID                          optionID,
        ::std::string const&                sliderName,
        ::std::function<::std::string(int)> valueLabeller,
        bool                                continuousUpdate
    );

    MCAPI void setUpCallbacksForStepOption(
        ::std::string const&                  sliderName,
        ::std::string const&                  valueBindingName,
        ::std::string const&                  enabledBindingName,
        ::std::string const&                  stepsBindingName,
        ::std::string const&                  labelBindingName,
        ::std::string const&                  ttsBindingName,
        ::std::function<::std::string()>      getOptionName,
        ::std::function<bool()>               isEnabled,
        ::std::function<::std::vector<int>()> getValues,
        ::std::function<int()>                getValue,
        ::std::function<void(int)>            setValue,
        ::std::function<::std::string(int)>   valueLabeller,
        bool                                  continuousUpdate,
        ::OptionID                            sliderOptionID
    );

    MCAPI void showRemoteStorageErrorModal(::Core::Path const& storageDirectory);

    MCAPI ::ui::ViewRequest showSignIn();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ModalScreenData getProfanityModalData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& defaultOptionFormat();

    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>&
    defaultProgressSliderOptionLabeller();

    MCAPI static ::OptionID& mSliderOptionID();

    MCAPI static ::std::string& mSliderOptionTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::ScreenExitBehavior exitBehavior, bool usesErrorPopupInfo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $tryExit();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI uint $getSceneId() const;

    MCAPI void $setSuspendInput(bool suspendInput);

    MCAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCAPI void $leaveScreen(::std::string const& expectedScreenName);

    MCFOLD void $onInit();

    MCAPI void $onDelete();

    MCAPI void $onOpen();

    MCAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $_doesScreenHaveExitBehavior() const;

    MCFOLD bool $_isStillValid() const;

    MCAPI bool $_getGamepadHelperVisible() const;

    MCAPI bool $_getMixedHelperVisible() const;

    MCAPI bool $_getKeyboardHelperVisible() const;

    MCAPI bool $_getGestureControlEnabled() const;

    MCAPI ::std::string $_getButtonStartDescription();

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonBDescription();

    MCFOLD ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCFOLD ::std::string $_getButtonKeyboardDescription();

    MCAPI ::std::string $_getScreenName() const;

    MCAPI ::ui::ViewRequest
    $promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND
#else // @header-generator platform
    struct LeaveScreenInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};
