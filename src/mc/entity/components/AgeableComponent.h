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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult
    _growthToggle(::Actor&, ::Player&, ::ActorInteraction&, ::AgeableDefinition const&, ::ItemStack const&, bool const);
#else // @header-generator platform
    MCAPI ::InteractionResult _growthToggle(
        ::Actor&                   actor,
        ::Player&                  player,
        ::ActorInteraction&        interaction,
        ::AgeableDefinition const& definition,
        ::ItemStack const&         item,
        bool const                 growthPaused
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAge() const;
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI bool isGrowthPaused() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setAge(int);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform
    // NOLINTEND
};
