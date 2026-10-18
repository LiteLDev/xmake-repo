#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/LeashablePreset.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LeashablePreset;
#endif // @header-generator platform
// clang-format on

class LeashableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeStolen;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnLeash;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                          mOnUnleashInteractOnly;
    ::ll::TypedStorage<4, 4, float>                         mAngularMomentum;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeStolen;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnLeash;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                              mOnUnleashInteractOnly;
    ::ll::TypedStorage<4, 4, float>                             mAngularMomentum;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LeashableComponent& operator=(LeashableComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LeashableComponent(LeashableComponent const&);
    LeashableComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LeashableComponent(::LeashableComponent&&);
#else // @header-generator platform
    MCAPI LeashableComponent(::LeashableComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LeashableComponent(::LeashableComponent const&);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI ::LeashableComponent& operator=(::LeashableComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LeashableComponent& operator=(::LeashableComponent&&);

    MCNAPI ~LeashableComponent();
#else // @header-generator platform
    MCAPI ~LeashableComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LeashableComponent&&);

    MCNAPI void* $ctor(::LeashableComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::LeashableComponent&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
