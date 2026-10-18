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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BribeableComponent();
#else // @header-generator platform
    MCAPI bool _canBribe(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canBribe(::ItemStack const&);
#else // @header-generator platform
    MCAPI bool clientBribeCheck(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform
    // NOLINTEND
};
