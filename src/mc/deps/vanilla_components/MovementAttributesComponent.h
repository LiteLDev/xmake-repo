#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // MovementAttributesComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MemberPtr = std::optional<float> MovementAttributesComponent::*;
#else // @header-generator platform
    using MemberPtr = ::std::optional<float> MovementAttributesComponent::*;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>> mMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mUnderwaterMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mLavaMovementSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mJumpStrength;
    ::ll::TypedStorage<4, 8, std::optional<float>> mHealth;
    ::ll::TypedStorage<4, 8, std::optional<float>> mHunger;
    ::ll::TypedStorage<4, 8, std::optional<float>> mFrictionModifier;
    ::ll::TypedStorage<4, 8, std::optional<float>> mBounciness;
    ::ll::TypedStorage<4, 8, std::optional<float>> mAirDragModifier;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mUnderwaterMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mLavaMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mJumpStrength;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mHealth;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mHunger;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mFrictionModifier;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mBounciness;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mAirDragModifier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool operator==(::MovementAttributesComponent const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};
