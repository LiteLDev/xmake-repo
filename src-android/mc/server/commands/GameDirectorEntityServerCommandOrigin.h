#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ActorServerCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CompoundTag;
class Level;
struct ActorUniqueID;
// clang-format on

class GameDirectorEntityServerCommandOrigin : public ::ActorServerCommandOrigin {
public:
    // prevent constructor by default
    GameDirectorEntityServerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameDirectorEntityServerCommandOrigin();

    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::CommandOriginType getOriginType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameDirectorEntityServerCommandOrigin(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
