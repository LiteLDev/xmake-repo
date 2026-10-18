#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
class ActorEventResponse;
// clang-format on

struct ActorDefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>               mAddGroups;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>               mRemoveGroups;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, std::vector<const ActorEventResponse*>> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mAddGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mRemoveGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorEventResponse const*>> mResponses;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorDefinitionModifier& operator=(ActorDefinitionModifier const&);
    ActorDefinitionModifier();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionModifier(::ActorDefinitionModifier const&);
#else // @header-generator platform
    MCAPI ActorDefinitionModifier(::ActorDefinitionModifier const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier&&);
#else // @header-generator platform
    MCAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionModifier const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionModifier const&);
#endif // @header-generator platform
    // NOLINTEND
};
