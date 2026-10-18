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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ILegacyItemTriggerHandler& operator=(ILegacyItemTriggerHandler const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ILegacyItemTriggerHandler() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool executeTrigger(std::unordered_map<std::string, DefinitionEvent> const&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual bool executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
