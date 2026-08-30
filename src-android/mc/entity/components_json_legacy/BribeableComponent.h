#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BribeableDefinition;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class ItemStack;
class Player;
// clang-format on

class BribeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BribeableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mBribeTimer;
    ::ll::TypedStorage<4, 4, int>                          mBribeCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBribeCooldownTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BribeableComponent();

    MCNAPI bool _canBribe(::ItemStack const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool clientBribeCheck(::Actor&);

    MCNAPI int& getBribeCooldown();

    MCNAPI int& getBribeTimer();

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void resetBribe(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
