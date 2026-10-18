#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/SummonSpellStage.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SummonSpellStage;
// clang-format on
#endif // @header-generator platform

struct SummonSpellData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  minActivationRange;
    ::ll::TypedStorage<4, 4, float>                                  maxActivationRange;
    ::ll::TypedStorage<4, 4, int>                                    cooldownTime;
    ::ll::TypedStorage<4, 4, float>                                  weight;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    targetFilter;
    ::ll::TypedStorage<4, 4, float>                                  castDuration;
    ::ll::TypedStorage<1, 1, bool>                                   doCastingAnimation;
    ::ll::TypedStorage<4, 4, int>                                    particleColor;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SummonSpellStage>>         stages;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SummonSpellStage>>     stages;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> startSound;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SummonSpellData& operator=(SummonSpellData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SummonSpellData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
