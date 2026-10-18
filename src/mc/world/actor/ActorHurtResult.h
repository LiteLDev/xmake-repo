#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                      mShouldAllowKnockback;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                        mShouldAllowKnockback;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    //TODO: check
    operator bool() const {
        if (std::holds_alternative<bool>(*mHurtOrDamage)) {
            return std::get<bool>(*mHurtOrDamage);
        }
        return std::get<float>(*mHurtOrDamage) > 0;
    }
#endif // @header-generator platform
};
