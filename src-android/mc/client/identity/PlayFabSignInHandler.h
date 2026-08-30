#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PlayFabSignInResult; }
// clang-format on

namespace Social {

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

} // namespace Social
