#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameplayUserManagerProxy.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
// clang-format on

class ServerGameplayUserManagerProxy : public ::GameplayUserManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerGameplayUserManagerProxy();
#else // @header-generator platform
    virtual ::std::optional<::std::string>
    validatePlayerName(::std::string const& playerName, ::GameplayUserManager const& gameplayUserManager) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> validatePlayerName(std::string const&, ::GameplayUserManager const&) const;

    virtual bool shouldGeneratePlayerIndex() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool shouldGeneratePlayerIndex() const /*override*/;
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
    // NOLINTEND
#else // @header-generator platform
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
