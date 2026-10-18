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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mConfig;
#else // @header-generator platform
    ::ll::TypedStorage<8, 320, ::LegacyItemTriggerHandlerConfig> mConfig;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LegacyItemTriggerHandler();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LegacyItemTriggerHandler();

    virtual bool executeTrigger(std::unordered_map<std::string, DefinitionEvent> const&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LegacyItemTriggerHandler(::LegacyItemTriggerHandlerConfig&&);

    MCNAPI void _executeEvent(
        std::unordered_map<std::string, DefinitionEvent> const&,
        ::ItemStackBase&,
        std::string const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::RenderParams&
#else // @header-generator platform
    MCAPI void _executeEvent(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const&   eventHandlers,
        ::ItemStackBase&                                                item,
        ::std::string const&                                            name,
        ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>& eventStack,
        ::RenderParams&                                                 params
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $executeTrigger(
        std::unordered_map<std::string, DefinitionEvent> const&,
        ::ItemStackBase&,
        ::DefinitionTrigger const&,
        ::RenderParams&
#else // @header-generator platform
    MCAPI bool $executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
