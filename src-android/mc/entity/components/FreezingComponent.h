#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class FreezingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFreezingEffectStrength;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void decreaseFreezingEffect();

    MCNAPI float getFreezingEffectStrength() const;

    MCNAPI void increaseFreezingEffect();

    MCNAPI bool isFullyFrozen() const;

    MCNAPI bool isFullyUnfrozen() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void resetFreezingEffect();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& mMaxFreezingEffectStrength();
    // NOLINTEND
};
