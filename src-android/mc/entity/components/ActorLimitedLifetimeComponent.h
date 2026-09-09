#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class ActorLimitedLifetimeComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void convertFromLegacyData(::CompoundTag const&, ::CompoundTag&);

    MCNAPI static bool needsLegacyConversion(::CompoundTag const&);
    // NOLINTEND
};
