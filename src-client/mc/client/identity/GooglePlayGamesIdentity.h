#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/identity/IdentityType.h"
#include "mc/network/services/CachedAsync.h"
#include "mc/network/services/CachedAsyncSource.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IGooglePlayGamesService; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct SingleIdentitySignInResult; }
// clang-format on

namespace Social {

class GooglePlayGamesIdentity : public ::Social::Identity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::IGooglePlayGamesService> const> mService;
    ::ll::UntypedStorage<8, 16>                                                      mAuthState;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                          mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    GooglePlayGamesIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GooglePlayGamesIdentity();

    virtual ::Social::IdentityType getType() const;

    virtual ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> signIn(::Social::IdentitySignInProperties&&);

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GooglePlayGamesIdentity(std::unique_ptr<Social::IGooglePlayGamesService>);

    MCNAPI void incrementAchievementSteps(std::string_view, int);

    MCNAPI void unlockAchievement(std::string_view);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Social::GooglePlayGamesIdentity>
        create(std::unique_ptr<Social::IGooglePlayGamesService>);

    MCNAPI static ::Social::IdentityType getTypeStatic();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<Social::IGooglePlayGamesService>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::IdentityType $getType() const;

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    $signIn(::Social::IdentitySignInProperties&&);

    MCNAPI ::gsl::span<const Social::IdentityType> $getDependencies() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
