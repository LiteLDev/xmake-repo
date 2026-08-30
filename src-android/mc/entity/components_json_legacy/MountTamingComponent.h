#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class ItemStack;
class MountTameableDefinition;
class Player;
// clang-format on

class MountTamingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTemper;
    ::ll::TypedStorage<4, 4, int> mCounter;
    ::ll::TypedStorage<4, 4, int> mTemperMod;
    ::ll::TypedStorage<4, 4, int> mWaitCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MountTamingComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void becomeTame(::Actor&, bool);

    MCNAPI int& getCounter();

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI int getTemperMod() const;

    MCNAPI int getWaitCount() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tameToPlayer(::Actor&, ::Player&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
