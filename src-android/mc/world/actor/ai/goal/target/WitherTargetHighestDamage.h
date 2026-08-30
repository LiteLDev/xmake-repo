#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
class WitherBoss;
struct MobDescriptor;
// clang-format on

class WitherTargetHighestDamage : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss&> mWitherBoss;
    ::ll::TypedStorage<8, 8, ::Mob*>        mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherTargetHighestDamage& operator=(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WitherTargetHighestDamage();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool _canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WitherTargetHighestDamage(::Mob&);

    MCNAPI ::Player* getHighestDamageTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $_canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
