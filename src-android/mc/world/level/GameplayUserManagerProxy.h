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
    virtual ~GameplayUserManagerProxy();

    virtual std::optional<std::string> validatePlayerName(std::string const&, ::GameplayUserManager const&) const;

    virtual bool shouldGeneratePlayerIndex() const;

    virtual void reloadActor(::Actor&) const;
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

    MCNAPI void $reloadActor(::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
