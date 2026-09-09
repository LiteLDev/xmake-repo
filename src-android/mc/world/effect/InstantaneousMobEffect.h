#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InstantaneousMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantaneousMobEffect();

    virtual bool isInstantaneous() const;

    virtual bool isDurationEffectTick(int, int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;

    MCNAPI bool $isDurationEffectTick(int, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
