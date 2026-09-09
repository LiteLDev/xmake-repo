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
    virtual ~ServerGameplayUserManagerProxy();

    virtual std::optional<std::string> validatePlayerName(std::string const&, ::GameplayUserManager const&) const;

    virtual bool shouldGeneratePlayerIndex() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<std::string> $validatePlayerName(std::string const&, ::GameplayUserManager const&) const;

    MCNAPI bool $shouldGeneratePlayerIndex() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
