#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/ActorCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CompoundTag;
class Level;
// clang-format on

class ActorServerCommandOrigin : public ::ActorCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mTargetOther;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorServerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorServerCommandOrigin();

    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CompoundTag serialize() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorUniqueID getTargetOther() const;

    MCNAPI void setTargetOther(::ActorUniqueID const);
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

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CompoundTag $serialize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
