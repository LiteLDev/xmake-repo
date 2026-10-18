#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GameplayUserManager;
// clang-format on

class GameplayUserManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameplayUserManagerProxy();
#else // @header-generator platform
    virtual ~GameplayUserManagerProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> validatePlayerName(std::string const&, ::GameplayUserManager const&) const;
#else // @header-generator platform
    virtual ::std::optional<::std::string>
    validatePlayerName(::std::string const& playerName, ::GameplayUserManager const& gameplayUserManager) const;
#endif // @header-generator platform

    virtual bool shouldGeneratePlayerIndex() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadActor(::Actor&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void reloadActor(::Actor& actor) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> $validatePlayerName(std::string const&, ::GameplayUserManager const&) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::string>
    $validatePlayerName(::std::string const& playerName, ::GameplayUserManager const& gameplayUserManager) const;
#endif // @header-generator platform

    MCNAPI bool $shouldGeneratePlayerIndex() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadActor(::Actor&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $reloadActor(::Actor& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
