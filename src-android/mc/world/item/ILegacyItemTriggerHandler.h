#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
// clang-format on

class ILegacyItemTriggerHandler {
public:
    // prevent constructor by default
    ILegacyItemTriggerHandler& operator=(ILegacyItemTriggerHandler const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ILegacyItemTriggerHandler() = default;

    virtual bool executeTrigger(std::unordered_map<std::string, DefinitionEvent> const&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&) const = 0;
    // clang-format on
    // NOLINTEND
};
