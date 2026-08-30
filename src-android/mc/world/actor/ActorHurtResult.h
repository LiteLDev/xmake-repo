#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                      mShouldAllowKnockback;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHurtResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorHurtResult& setHurt(bool);

    MCNAPI ::ActorHurtResult& setShouldAllowKnockback(bool);

    MCNAPI bool shouldAllowKnockback() const;

    MCNAPI bool wasDealtDamage() const;

    MCNAPI bool wasHurt() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorHurtResult createHurt(std::optional<float>);

    MCNAPI static ::ActorHurtResult createHurtNoDamage();

    MCNAPI static ::ActorHurtResult createNotHurt();
    // NOLINTEND
};
