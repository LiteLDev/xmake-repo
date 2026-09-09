#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/world/actor/DefinitionEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class DefinitionTrigger;
class RenderParams;
struct ActorDefinitionEventStackEntry;
// clang-format on

class BlockDeprecatedR16EventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDeprecatedR16EventListenerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDeprecatedR16EventListenerComponent(std::unordered_map<std::string, DefinitionEvent> const&);

    MCNAPI void _executeEvent(
        std::string const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::RenderParams&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void executeEvent(::Block const&, std::string const&, ::RenderParams&);

    MCNAPI static bool executeTrigger(::Block const&, ::DefinitionTrigger const&, ::RenderParams&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unordered_map<std::string, DefinitionEvent> const&);
    // NOLINTEND
};
