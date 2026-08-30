#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class AuthServiceApi; }
namespace Social { class PlayFabApi; }
// clang-format on

namespace Social {

struct UserDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>>     mPlayFabApi;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDependencies();
};

} // namespace Social
