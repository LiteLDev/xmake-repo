#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
