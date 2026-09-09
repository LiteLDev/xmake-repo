#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MobEffect;
struct EffectDuration;
// clang-format on

class EffectCommand : public ::Command {
public:
    // EffectCommand inner types define
    enum class Mode : int {
        Add         = 0,
        Clear       = 1,
        AddInfinite = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                    mTargets;
    ::ll::TypedStorage<4, 4, ::EffectCommand::Mode> mMode;
    ::ll::TypedStorage<8, 8, ::MobEffect const*>    mEffect;
    ::ll::TypedStorage<4, 4, int>                   mDuration;
    ::ll::TypedStorage<4, 4, int>                   mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                  mHideParticles;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EffectCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _add(::CommandSelectorResults<Actor>&, ::CommandOutput&, ::EffectDuration) const;

    MCNAPI void _clearAllEffects(::CommandSelectorResults<Actor>&, ::CommandOutput&) const;
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
