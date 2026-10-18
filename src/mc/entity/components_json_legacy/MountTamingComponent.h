#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class DataLoadHelper;
#else // @header-generator platform
#endif // @header-generator platform
class InteractionResult;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
class MountTameableDefinition;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MountTamingComponent();
#else // @header-generator platform
    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);
#endif // @header-generator platform
    // NOLINTEND
};
