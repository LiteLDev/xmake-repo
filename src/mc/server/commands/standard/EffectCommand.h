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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                    mTargets;
    ::ll::TypedStorage<4, 4, ::EffectCommand::Mode> mMode;
    ::ll::TypedStorage<8, 8, ::MobEffect const*>    mEffect;
    ::ll::TypedStorage<4, 4, int>                   mDuration;
    ::ll::TypedStorage<4, 4, int>                   mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                  mHideParticles;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 4, ::EffectCommand::Mode>        mMode;
    ::ll::TypedStorage<8, 8, ::MobEffect const*>           mEffect;
    ::ll::TypedStorage<4, 4, int>                          mDuration;
    ::ll::TypedStorage<4, 4, int>                          mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                         mHideParticles;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EffectCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _add(::CommandSelectorResults<Actor>&, ::CommandOutput&, ::EffectDuration) const;
#else // @header-generator platform
    MCAPI void
    _add(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output, ::EffectDuration duration) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearAllEffects(::CommandSelectorResults<Actor>&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void _clearEffect(
        ::CommandSelectorResults<::Actor>& targets,
        ::CommandOutput&                   output,
        ::MobEffect const&                 effect,
        bool                               throwsErrorOnNoEffect
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static void _clearAllEffects(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
