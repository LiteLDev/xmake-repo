#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/sound/SoundOptions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenControllerProxy;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class Option;
class StorageManagementScreenController;
class SubscriptionsScreenController;
class TaskGroup;
class UIPropertyBag;
struct PackInstanceId;
struct PackManagerContentSourceImpl;
struct TextEditScreenEventData;
struct tm;
namespace Json { class Value; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class GeneralSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mIsGlobalSettings;
    ::ll::TypedStorage<1, 1, bool>                                              mReloadTexturePacksOnExit;
    ::ll::TypedStorage<1, 1, bool>                                              mGlobalResourcePacksVisible;
    ::ll::TypedStorage<1, 1, bool>                                              mLegacySyncOnly;
    ::ll::TypedStorage<1, 1, bool>                                              mHasLoadedCloudInfo;
    ::ll::TypedStorage<1, 1, bool>                                              mCloudConnectionError;
    ::ll::TypedStorage<8, 24, std::string>                                      mCloudUploadUrl;
    ::ll::UntypedStorage<8, 16>                                                 mCloudFolderUrlHandle;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mLanguages;
    ::ll::TypedStorage<8, 8, ulong>                                             mCurrentlySelectedIndex;
    ::ll::TypedStorage<4, 4, int>                                               mLanguageFocusFrameCountdown;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState>                            mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                mContentManager;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSourceImpl*>                   mResourceContentSource;
    ::ll::UntypedStorage<8, 56>                                                 mLastRefreshTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mScreenAnimationsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mGraphicsQualityPresetOptionSubscription;
    ::ll::TypedStorage<8, 24, std::string>                            mOverrideMajorVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mOverrideMinorVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mOverridePatchVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mOverrideBetaVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GeneralSettingsScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>                        mProfileImage;
    ::ll::TypedStorage<8, 24, std::string>                                          mUserDisplayName;
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementScreenController>>   mStorageManagementScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SubscriptionsScreenController>>       mSubscriptionsScreenController;
    ::ll::TypedStorage<8, 64, ::SoundOptions>                                       mSoundOptions;
    ::ll::TypedStorage<8, 24, std::string>                                          mLeakMemoryMB;
    ::ll::TypedStorage<1, 1, bool>                                                  mNeedsOfflineTokenAuthorization;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnableGameTipsDisplay;
    ::ll::TypedStorage<1, 1, bool>                                                  mAdvancedGraphicsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                  mGraphicsApiSwitchingEnabled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                            mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneralSettingsScreenController& operator=(GeneralSettingsScreenController const&);
    GeneralSettingsScreenController(GeneralSettingsScreenController const&);
    GeneralSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeneralSettingsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual bool canExit();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneralSettingsScreenController(std::shared_ptr<MainMenuScreenModel>, bool, bool, std::string const&, bool);

    MCNAPI bool _areAnyPackImportsPending() const;

    MCNAPI void _chooseLanguage(std::string const&, int);

    MCNAPI std::string _generateAccountInformation() const;

    MCNAPI std::string _generateBuildInformation() const;

    MCNAPI std::vector<int> _getGUIScaleValues() const;

    MCNAPI std::vector<PackInstanceId> _getModelManagerIdentities();

    MCNAPI void _processPendingImports();

    MCNAPI void _registerControllerCallbacks();

    MCNAPI void _setGlobalStack(std::vector<PackInstanceId> const&, bool, bool);

    MCNAPI void _setResourcePackStack();

    MCNAPI void _updateProfileImage();

    MCNAPI ::GeneralSettingsScreenControllerProxy* getGeneralSettingsScreenControllerProxy();

    MCNAPI void setGuiScaleOption(int);

    MCNAPI void startExitProcess();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addStaticScreenVars(::Json::Value&, bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, bool, bool, std::string const&, bool);
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

    MCNAPI bool $canExit();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
