#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class MainMenuScreenModel;
struct LevelSummary;
struct StoreDataDrivenScreenParams;
// clang-format on

struct SceneFactoryProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCreateAddEditExternalServerScreen;
    ::ll::UntypedStorage<8, 48> mCreateEditWorldScreen;
    ::ll::UntypedStorage<8, 48> mCreateHowToPlayScreen;
    ::ll::UntypedStorage<8, 48> mCreateInventoryScreen;
    ::ll::UntypedStorage<8, 48> mCreateNewRealmScreen;
    ::ll::UntypedStorage<8, 48> mCreateNXSignInScreen;
    ::ll::UntypedStorage<8, 48> mCreateOptionsScreen;
    ::ll::UntypedStorage<8, 48> mCreatePlayScreen;
    ::ll::UntypedStorage<8, 48> mCreateStartMenuScreen;
    ::ll::UntypedStorage<8, 48> mCreateStoreHomeScreen;
    ::ll::UntypedStorage<8, 48> mCreatePauseScreen;
    ::ll::UntypedStorage<8, 48> mCreateWorldTemplateScreen;
    ::ll::UntypedStorage<8, 48> mCreateWorldUpsellScreen;
    ::ll::UntypedStorage<8, 48> mCreateChatScreen;
    ::ll::UntypedStorage<8, 48> mCreatePortfolioScreen;
    ::ll::UntypedStorage<8, 48> mCreateDeathScreen;
    ::ll::UntypedStorage<8, 48> mCreateCreditsScreen;
    ::ll::UntypedStorage<8, 48> mCreateGlobalPauseScreen;
    ::ll::UntypedStorage<8, 48> mCreateMainMenuScreenModel;
    ::ll::UntypedStorage<8, 48> mCreateServerForm;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactoryProxyCallbacks& operator=(SceneFactoryProxyCallbacks const&);
    SceneFactoryProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SceneFactoryProxyCallbacks(::SceneFactoryProxyCallbacks const&);

    MCNAPI ~SceneFactoryProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SceneFactoryProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
