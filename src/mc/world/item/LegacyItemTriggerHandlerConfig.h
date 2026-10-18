#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class Block;
class DefinitionTrigger;
class EventResponse;
class ItemStackBase;
class RenderParams;
struct ActorDefinitionEventStackEntry;
struct VariantParameterList;
// clang-format on

struct LegacyItemTriggerHandlerConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mBlockEventHandler;
    ::ll::UntypedStorage<8, 48> mBlockTriggerHandler;
    ::ll::UntypedStorage<8, 48> mItemStackEventHandler;
    ::ll::UntypedStorage<8, 48> mActorTriggerHandler;
    ::ll::UntypedStorage<8, 48> mEventResponseHandler;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void(::Block const*, ::std::string const&, ::RenderParams&)>>
        mBlockEventHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Block const&, ::DefinitionTrigger const&, ::RenderParams&)>>
        mBlockTriggerHandler;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStackBase&, ::std::string const&, ::RenderParams&)>>
        mItemStackEventHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::Actor&,
            ::ActorDefinitionTrigger const&,
            ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>&,
            ::VariantParameterList const&
        )>>
                                                                                              mActorTriggerHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EventResponse const&, ::RenderParams&)>> mEventResponseHandler;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandlerConfig& operator=(LegacyItemTriggerHandlerConfig const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LegacyItemTriggerHandlerConfig();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyItemTriggerHandlerConfig();
#else // @header-generator platform
    MCAPI LegacyItemTriggerHandlerConfig(::LegacyItemTriggerHandlerConfig const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyItemTriggerHandlerConfig(::LegacyItemTriggerHandlerConfig const&);

    MCNAPI ~LegacyItemTriggerHandlerConfig();
#else // @header-generator platform
    MCAPI ~LegacyItemTriggerHandlerConfig();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LegacyItemTriggerHandlerConfig const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::LegacyItemTriggerHandlerConfig const&);
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
