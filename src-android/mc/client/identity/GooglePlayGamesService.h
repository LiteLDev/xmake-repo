#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/IGooglePlayGamesService.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
struct PgsAchievementsClient;
struct PgsGamesSignInClient;
// clang-format on

namespace Social {

class GooglePlayGamesService : public ::Social::IGooglePlayGamesService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PgsAchievementsClient*> mAchievements;
    ::ll::TypedStorage<8, 8, ::PgsGamesSignInClient*>  mSignIn;
    // NOLINTEND

public:
    // prevent constructor by default
    GooglePlayGamesService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GooglePlayGamesService();

    virtual ::Bedrock::Threading::Async<bool> isAuthenticated();

    virtual void unlockAchievement(std::string_view);

    virtual void incrementAchievement(std::string_view, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Social::IGooglePlayGamesService> create();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool> $isAuthenticated();

    MCNAPI void $unlockAchievement(std::string_view);

    MCNAPI void $incrementAchievement(std::string_view, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
