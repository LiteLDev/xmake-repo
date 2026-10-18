#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionModifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionModifier;
#endif // @header-generator platform
// clang-format on

struct ActorDefinitionEndedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                                    mActor;
    ::ll::TypedStorage<8, 24, std::string const>                          mEvent;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionModifier> const> mDefinitionModifiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                                        mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier> const> mDefinitionModifiers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&);
#endif // @header-generator platform
    ActorDefinitionEndedEvent();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDefinitionEndedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
