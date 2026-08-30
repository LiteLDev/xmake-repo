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
    ::ll::UntypedStorage<8, 48> mBlockEventHandler;
    ::ll::UntypedStorage<8, 48> mBlockTriggerHandler;
    ::ll::UntypedStorage<8, 48> mItemStackEventHandler;
    ::ll::UntypedStorage<8, 48> mActorTriggerHandler;
    ::ll::UntypedStorage<8, 48> mEventResponseHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandlerConfig& operator=(LegacyItemTriggerHandlerConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyItemTriggerHandlerConfig();

    MCNAPI LegacyItemTriggerHandlerConfig(::LegacyItemTriggerHandlerConfig const&);

    MCNAPI ~LegacyItemTriggerHandlerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LegacyItemTriggerHandlerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
