#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateAddEditExternalServerScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::LevelSummary const&)>>
                                                                                     mCreateEditWorldScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateHowToPlayScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::CraftingType)>>
                                                                                     mCreateInventoryScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateNewRealmScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateNXSignInScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::SettingsTabIndex)>>
        mCreateOptionsScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::PlayScreenDefaultTab)>>
                                                                                         mCreatePlayScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(bool)>> mCreateStartMenuScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::StoreDataDrivenScreenParams const&)>>
                                                                                           mCreateStoreHomeScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreatePauseScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateWorldTemplateScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateWorldUpsellScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateChatScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreatePortfolioScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateDeathScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateCreditsScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateGlobalPauseScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::MainMenuScreenModel>()>> mCreateMainMenuScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(uint, ::std::string const&)>>
        mCreateServerForm;
    // NOLINTEND
};
#else // @header-generator platform
struct SceneFactoryProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
