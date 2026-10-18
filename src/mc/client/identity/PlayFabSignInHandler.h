#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PlayFabSignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabSignInHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayFabSignInHandler() = default;

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> signIn(std::string, bool) = 0;

    virtual ::Bedrock::Threading::Async<Social::PlayFabSignInResult> link();

    virtual void onPlayFabSignInComplete();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::PlayFabSignInResult> $link();

    MCNAPI void $onPlayFabSignInComplete();
    // NOLINTEND
};
#else // @header-generator platform
class PlayFabSignInHandler {};
#endif // @header-generator platform

} // namespace Social
