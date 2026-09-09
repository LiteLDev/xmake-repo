#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class AgeableDefinition;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class ItemStack;
class Player;
// clang-format on

struct AgeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mAge;
    ::ll::TypedStorage<1, 1, bool> mGrowthPaused;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult
    _growthToggle(::Actor&, ::Player&, ::ActorInteraction&, ::AgeableDefinition const&, ::ItemStack const&, bool const);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int getAge() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI bool isGrowthPaused() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setAge(int);
    // NOLINTEND
};
