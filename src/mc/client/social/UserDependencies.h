#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Social { class AuthServiceApi; }
namespace Social { class PlayFabApi; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct UserDependencies {};
#endif // @header-generator platform

} // namespace Social
