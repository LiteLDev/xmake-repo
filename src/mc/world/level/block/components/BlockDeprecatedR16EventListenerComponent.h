#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/DefinitionEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
class DefinitionEvent;
#endif // @header-generator platform
class DefinitionTrigger;
class RenderParams;
struct ActorDefinitionEventStackEntry;
// clang-format on

class BlockDeprecatedR16EventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockDeprecatedR16EventListenerComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockDeprecatedR16EventListenerComponent(std::unordered_map<std::string, DefinitionEvent> const&);

    MCNAPI void _executeEvent(
        std::string const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::RenderParams&
#else // @header-generator platform
    MCAPI void _executeEvent(
        ::std::string const&                                            eventName,
        ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>& eventStack,
        ::RenderParams&                                                 params
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void executeEvent(::Block const&, std::string const&, ::RenderParams&);
#else // @header-generator platform
    MCAPI static void executeEvent(::Block const& block, ::std::string const& eventName, ::RenderParams& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool executeTrigger(::Block const&, ::DefinitionTrigger const&, ::RenderParams&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unordered_map<std::string, DefinitionEvent> const&);
#else // @header-generator platform
    MCAPI static bool executeTrigger(::Block const& block, ::DefinitionTrigger const& trigger, ::RenderParams& params);
#endif // @header-generator platform
    // NOLINTEND
};
