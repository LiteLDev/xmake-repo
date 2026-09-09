#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { class GameDependenciesContext; }
namespace LocalServerLauncher { struct ServerInitData; }
// clang-format on

namespace LocalServerLauncher {

struct PrepareLevelDataInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<LocalServerLauncher::ServerInitData>>> mServerInitData;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<LocalServerLauncher::GameDependenciesContext>>> mSelf;
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::TypedStorage<1, 1, bool> mHasAllValidCrossPlatformSkin;
    // NOLINTEND
};

} // namespace LocalServerLauncher
