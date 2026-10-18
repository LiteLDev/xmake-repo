#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
// clang-format on

class PlayerInteractionSystem {
public:
    // PlayerInteractionSystem inner types declare
    // clang-format off
    struct InteractionMappingBase;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template<typename T0> struct InteractionMapping;
#endif // @header-generator platform
    // clang-format on

    // PlayerInteractionSystem inner types define
    struct InteractionMappingBase {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~InteractionMappingBase();
#else // @header-generator platform
        virtual ~InteractionMappingBase() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::InteractionResult
        getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction) const = 0;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    template <typename T0>
    struct InteractionMapping {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<PlayerInteractionSystem::InteractionMappingBase>>> mInteractionMappings;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const;

    MCNAPI ~PlayerInteractionSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PlayerInteractionSystem::InteractionMappingBase>>>
        mInteractionMappings;
#endif // @header-generator platform
    // NOLINTEND
};
