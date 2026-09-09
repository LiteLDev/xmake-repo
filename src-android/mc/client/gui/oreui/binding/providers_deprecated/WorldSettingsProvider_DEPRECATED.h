#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/world/WorldCreationHelper.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IMinecraftGame;
class MainMenuScreenController;
class MainMenuScreenModel;
class TrialManager;
class WorldTemplateLoader;
class WorldTemplateManager;
struct ContentViews;
namespace OreUI { class Router; }
namespace OreUI { class RouterLocation; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class WorldSettingsProvider_DEPRECATED {
public:
    // WorldSettingsProvider_DEPRECATED inner types define
    enum class StartLoadingTemplateResult : int {
        Ok              = 0,
        MissingTemplate = 1,
    };

    enum class TemplateLoadingState : int {
        InProgress = 0,
        Done       = 1,
        Error      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1496>                                        mLevelDataWrapper;
    ::ll::UntypedStorage<8, 1496>                                        mDefaultLevelDataWrapper;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                      mTrialManager;
    ::ll::UntypedStorage<8, 2080>                                        mWorldCreator;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>               mLevelDataBindings;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>               mDefaultLevelDataBindings;
    ::ll::UntypedStorage<8, 696>                                         mLevelSummary;
    ::ll::TypedStorage<8, 112, ::WorldSettingsRules>                     mWorldSettingsRules;
    ::ll::TypedStorage<8, 24, std::string>                               mWorldPreviewImagePath;
    ::ll::TypedStorage<1, 1, bool>                                       mIsWorldCreated;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenController>> mMainMenuScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>>      mMainMenuScreenModel;
    ::ll::UntypedStorage<8, 16>                                          mResourcePackFacet;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateLoader>>       mWorldTemplateLoader;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                         mLevelListCache;
    ::ll::UntypedStorage<8, 24>                                          mKeyProvider;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                    mUserManager;
    ::ll::UntypedStorage<8, 24>                                          mWorldTemplateManager;
    ::ll::TypedStorage<4, 4, int>                                        mAmountOfScenesOnStack;
    ::ll::TypedStorage<1, 1, bool>                                       mHasBeenReset;
    ::ll::TypedStorage<1, 1, bool>                                       mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                       mNextFrameDirty;
    ::ll::TypedStorage<1, 1, bool>                                       mReloadInitialTemplate;
    ::ll::TypedStorage<1, 1, bool>                                       mTemplateLoadingComplete;
    ::ll::TypedStorage<1, 1, bool>                                       mInitializeResourcePacks;
    ::ll::TypedStorage<1, 1, bool>                                       mRestoreSelectedResourcePacks;
    ::ll::TypedStorage<1, 1, bool>                                       isRealmsSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                             mNeedToReloadTemplateAndResourcePacksWhenGoingBackToCNW;
    ::ll::TypedStorage<1, 1, bool>                             mHasUserChangedPacks;
    ::ll::TypedStorage<1, 1, bool>                             mSnapshotIsPacksEnabled;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentViews>>   mSnapshotTexturePackViews;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentViews>>   mSnapshotBehaviourPackViews;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>              mSnapshotTexturePacksIDs;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>              mSnapshotBehaviourPacksIDs;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsProvider_DEPRECATED& operator=(WorldSettingsProvider_DEPRECATED const&);
    WorldSettingsProvider_DEPRECATED(WorldSettingsProvider_DEPRECATED const&);
    WorldSettingsProvider_DEPRECATED();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool arePacksDifferentFromSnapshotPacks() const;

    MCNAPI bool consumeDirtyFlag();

    MCNAPI bool consumeInitializeResourcePacksFlag();

    MCNAPI bool consumeReloadInitialTemplate();

    MCNAPI bool consumeResetFlag();

    MCNAPI bool consumeRestoreSelectedResourcePacksFlag();

    MCNAPI bool getHasNonAddonBehaviourPack() const;

    MCNAPI std::string getInitialLoadTemplateID();

    MCNAPI ::OreUI::LevelDataBindings& getLevelDataBindings();

    MCNAPI ::LevelSummary& getLevelSummary();

    MCNAPI std::shared_ptr<MainMenuScreenController> getMainMenuScreenController() const;

    MCNAPI std::shared_ptr<MainMenuScreenModel> getMainMenuScreenModel() const;

    MCNAPI bool getTemplateLoadingCompletedFlag() const;

    MCNAPI ::WorldCreationHelper& getWorldCreationHelper();

    MCNAPI std::string const& getWorldPreviewImagePath() const;

    MCNAPI ::WorldSettingsRules& getWorldSettingsRules();

    MCNAPI bool isFromWorldTemplate() const;

    MCNAPI void reset();

    MCNAPI void saveResourcePacksSnapshot();

    MCNAPI void saveSettingsSnapshot();

    MCNAPI void setContentViews(std::shared_ptr<ContentViews>, std::shared_ptr<ContentViews>);

    MCNAPI void setEditorWorldCreationFlag(bool);

    MCNAPI void setHasNonAddonBehaviourPack(bool);

    MCNAPI void setWorldCreated(bool);

    MCNAPI void setWorldPreviewImagePath(std::string const&);

    MCNAPI ::OreUI::WorldSettingsProvider_DEPRECATED::StartLoadingTemplateResult
    startLoadingTemplate(std::string const&);

    MCNAPI ::OreUI::WorldSettingsProvider_DEPRECATED::TemplateLoadingState tickTemplateLoader();

    MCNAPI void toggleTemplateLoadingComplete();
    // NOLINTEND
};

} // namespace OreUI
