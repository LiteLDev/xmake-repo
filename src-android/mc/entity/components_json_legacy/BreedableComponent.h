#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BreedableDefinition;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class Mob;
class Player;
class WeakEntityRef;
struct OffspringDefinition;
// clang-format on

class BreedableComponent {
public:
    // BreedableComponent inner types define
    using MatingResult = std::vector<WeakEntityRef>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BreedableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mLoveTimer;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldownTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mLoveCause;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _spawnExperienceOrbs(::Actor&);

    MCNAPI void _spawnLoveParticles(::Actor&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool canMate(::Actor const&, ::Actor const&) const;

    MCNAPI void decrementBreedCooldown();

    MCNAPI void decrementLoveTimer();

    MCNAPI int getBreedCooldown() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI int getLoveTimer() const;

    MCNAPI std::vector<WeakEntityRef> mate(::Actor&, ::Actor&);

    MCNAPI bool meetsSittingRequirements(::Actor const&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void resetLove(::Actor&);

    MCNAPI void setLoveTimer(int);
    // NOLINTEND
};
