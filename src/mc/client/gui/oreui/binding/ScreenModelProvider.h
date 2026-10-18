#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class MainMenuScreenModel;
class PlayScreenModel;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class MainMenuScreenModel;
class PlayScreenModel;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenModelProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                   mMinecraft;
    ::ll::UntypedStorage<8, 24>                                   mClientInstance;
    ::ll::UntypedStorage<8, 24>                                   mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 16, std::weak_ptr<MainMenuScreenModel>> mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, std::weak_ptr<PlayScreenModel>>     mPlayScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenModelProvider& operator=(ScreenModelProvider const&);
    ScreenModelProvider(ScreenModelProvider const&);
    ScreenModelProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<MainMenuScreenModel> getMainMenuScreenModel();

    MCNAPI std::shared_ptr<PlayScreenModel> getPlayScreenModel();

    MCNAPI ~ScreenModelProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenModelProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClientInstance;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MainMenuScreenModel>>                    mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PlayScreenModel>>                        mPlayScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenModelProvider& operator=(ScreenModelProvider const&);
    ScreenModelProvider(ScreenModelProvider const&);
    ScreenModelProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();

    MCAPI ::std::shared_ptr<::PlayScreenModel> getPlayScreenModel();

    MCAPI ~ScreenModelProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenModelProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
