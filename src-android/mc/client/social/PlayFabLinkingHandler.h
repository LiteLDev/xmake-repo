#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Social { class AuthServiceApi; }
namespace Social { class Identity; }
namespace Social { class XboxLiveIdentity; }
// clang-format on

namespace Social {

class PlayFabLinkingHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                              mPlayFabSessionTicket;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::XboxLiveIdentity>>                  mXboxLiveIdentity;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::Identity>>                          mPlatformIdentity;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mTaskGroup;
    // NOLINTEND
};

} // namespace Social
