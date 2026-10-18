#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorDefinitionTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>           mActor;
    ::ll::TypedStorage<8, 24, std::string const> mEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>             mActor;
    ::ll::TypedStorage<8, 32, ::std::string const> mEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTriggeredEvent& operator=(ActorDefinitionTriggeredEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorDefinitionTriggeredEvent(ActorDefinitionTriggeredEvent const&);
#endif // @header-generator platform
    ActorDefinitionTriggeredEvent();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~ActorDefinitionTriggeredEvent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
