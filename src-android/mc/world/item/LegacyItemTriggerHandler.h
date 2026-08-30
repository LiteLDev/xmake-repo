#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/world/item/ILegacyItemTriggerHandler.h"
#include "mc/world/item/LegacyItemTriggerHandlerConfig.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
struct ActorDefinitionEventStackEntry;
// clang-format on

class LegacyItemTriggerHandler : public ::ILegacyItemTriggerHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LegacyItemTriggerHandler();

    virtual bool executeTrigger(std::unordered_map<std::string, DefinitionEvent> const&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyItemTriggerHandler(::LegacyItemTriggerHandlerConfig&&);

    MCNAPI void _executeEvent(
        std::unordered_map<std::string, DefinitionEvent> const&,
        ::ItemStackBase&,
        std::string const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::RenderParams&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyItemTriggerHandlerConfig&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $executeTrigger(
        std::unordered_map<std::string, DefinitionEvent> const&,
        ::ItemStackBase&,
        ::DefinitionTrigger const&,
        ::RenderParams&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
