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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
class ItemStack;
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class WeakEntityRef;
#if defined(LL_PLAT_A) // @header-generator platform
struct OffspringDefinition;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BreedableComponent {
public:
    // BreedableComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MatingResult = std::vector<WeakEntityRef>;
#else // @header-generator platform
    using MatingResult = ::std::vector<::WeakEntityRef>;
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnExperienceOrbs(::Actor&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _spawnLoveParticles(::Actor&);
#else // @header-generator platform
    MCAPI bool canMate(::Actor const& owner, ::Actor const& partner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canMate(::Actor const&, ::Actor const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::WeakEntityRef> mate(::Actor& owner, ::Actor& partner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void decrementBreedCooldown();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void decrementLoveTimer();
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _spawnExperienceOrbs(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBreedCooldown() const;
#else // @header-generator platform
    MCAPI static void _spawnLoveParticles(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI int getLoveTimer() const;

    MCNAPI std::vector<WeakEntityRef> mate(::Actor&, ::Actor&);

    MCNAPI bool meetsSittingRequirements(::Actor const&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void resetLove(::Actor&);

    MCNAPI void setLoveTimer(int);
#else // @header-generator platform
    MCAPI static bool meetsSittingRequirements(::Actor const& actor);
#endif // @header-generator platform
    // NOLINTEND
};
