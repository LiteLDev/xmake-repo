#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // MovementAttributesComponent inner types define
    using MemberPtr = std::optional<float> MovementAttributesComponent::*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>> mMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mUnderwaterMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mLavaMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mJumpStrength;
    ::ll::TypedStorage<4, 8, std::optional<float>> mHealth;
    ::ll::TypedStorage<4, 8, std::optional<float>> mHunger;
    ::ll::TypedStorage<4, 8, std::optional<float>> mFrictionModifier;
    ::ll::TypedStorage<4, 8, std::optional<float>> mBounciness;
    ::ll::TypedStorage<4, 8, std::optional<float>> mAirDragModifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getAirDragModifier() const;

    MCNAPI float getBounciness() const;

    MCNAPI float getFrictionModifier() const;

    MCNAPI float getHealth() const;

    MCNAPI float getHunger() const;

    MCNAPI float getJumpStrength() const;

    MCNAPI float getLavaMovementSpeed() const;

    MCNAPI float getMovementSpeed() const;

    MCNAPI float getUnderwaterMovementSpeed() const;

    MCNAPI bool operator==(::MovementAttributesComponent const&) const;
    // NOLINTEND
};
