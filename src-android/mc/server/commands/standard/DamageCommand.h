#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class DamageCommand : public ::Command {
public:
    // DamageCommand inner types define
    enum class DamageOrigin : uchar {
        None  = 0,
        Actor = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                                      mTargets;
    ::ll::UntypedStorage<8, 200>                                      mDamager;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, int>                                     mAmount;
    ::ll::TypedStorage<1, 1, ::DamageCommand::DamageOrigin>           mDamageOrigin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DamageCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _applyDamage(::CommandSelectorResults<Actor>&, ::ActorDamageSource const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
