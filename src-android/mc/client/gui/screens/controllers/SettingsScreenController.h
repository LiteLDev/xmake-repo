#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/options/OptionSaveDeferral.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenController;
class MainMenuScreenModel;
class RealmsInviteLinkSettingsScreenController;
class RealmsSettingsScreenController;
class SocialSettingsScreenController;
class WorldSettingsScreenController;
struct SettingsScreenCapabilities;
namespace Json { class Value; }
// clang-format on

class SettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // SettingsScreenController inner types declare
    // clang-format off
    struct SettingsScreenTabInfo;
    // clang-format on

    // SettingsScreenController inner types define
    struct SettingsScreenTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const> mTabName;
        ::ll::TypedStorage<4, 4, int const>          mTabVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        SettingsScreenTabInfo& operator=(SettingsScreenTabInfo const&);
        SettingsScreenTabInfo(SettingsScreenTabInfo const&);
        SettingsScreenTabInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SettingsTabIndex> mCurrentTab;
    ::ll::TypedStorage<1, 1, bool> mInitialTabSelected;
    ::ll::TypedStorage<4, 4, ::SettingsTabIndex> mInitialTab;
    ::ll::TypedStorage<8, 24, std::string> mCurrentTabTitle;
    ::ll::TypedStorage<8, 24, std::string> mInitialPack;
    ::ll::TypedStorage<4, 4, ::SettingsScreenMode> mSettingsMode;
    ::ll::TypedStorage<1, 1, bool> mShowRealmsSettings;
    ::ll::TypedStorage<8, 608, ::Realms::World> mWorld;
    ::ll::TypedStorage<1, 1, bool> mNavigateToMenuOnExit;
    ::ll::TypedStorage<1, 1, bool> mIsGlobalSettingsScreen;
    ::ll::TypedStorage<1, 1, bool> mReloadTexturePacksOnExit;
    ::ll::TypedStorage<1, 1, bool const> mMaintainOldFocusOnOpen;
    ::ll::TypedStorage<8, 24, std::string> mTTSSettingsScreenName;
    ::ll::TypedStorage<1, 1, bool> mShowInviteLinkSettings;
    ::ll::TypedStorage<8, 120, ::Realms::InviteLink> mInviteLink;
    ::ll::TypedStorage<1, 1, bool> mFullscreen;
    ::ll::TypedStorage<1, 1, bool> mLegacySyncOnly;
    ::ll::TypedStorage<8, 16, ::OptionSaveDeferral> mOptionsSaveDeferral;
    ::ll::TypedStorage<8, 24, std::string> mCurrentFocus;
    ::ll::UntypedStorage<8, 696> mProvidedLevelSummary;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RealmsSettingsScreenController>> mRealmsSettingsScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RealmsInviteLinkSettingsScreenController>> mRealmsInviteLinkSettingsScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeneralSettingsScreenController>> mGeneralSettingsScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldSettingsScreenController>> mWorldSettingsScreenController;
    ::ll::UntypedStorage<8, 24> mSocialSettingsScreenController;
    ::ll::UntypedStorage<8, 48> mOnOpenCallback;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenController();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;

    virtual int getScreenVersion() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SettingsScreenController(std::shared_ptr<MainMenuScreenModel>, bool, ::SettingsTabIndex, bool const);

    MCNAPI SettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        ::SettingsTabIndex,
        bool const,
        std::string const
    );

    MCNAPI SettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        ::Realms::InviteLink const&,
        ::SettingsTabIndex,
        bool
    );

    MCNAPI SettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::LevelSummary const&,
        bool,
        std::string const,
        std::function<void()>,
        ::SettingsTabIndex,
        bool const
    );

    MCNAPI SettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::LevelSummary const&,
        ::SettingsTabIndex,
        bool,
        bool const,
        std::string const&,
        bool,
        bool
    );

    MCNAPI void _init();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addStaticScreenVars(
        ::Json::Value&,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        ::SettingsScreenCapabilities const&,
        ::BuildPlatform const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<int, SettingsScreenController::SettingsScreenTabInfo> const& mScreenInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, bool, ::SettingsTabIndex, bool const);

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        ::SettingsTabIndex,
        bool const,
        std::string const
    );

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        ::Realms::InviteLink const&,
        ::SettingsTabIndex,
        bool
    );

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::LevelSummary const&,
        bool,
        std::string const,
        std::function<void()>,
        ::SettingsTabIndex,
        bool const
    );

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::LevelSummary const&,
        ::SettingsTabIndex,
        bool,
        bool const,
        std::string const&,
        bool,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI int $getScreenVersion() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
