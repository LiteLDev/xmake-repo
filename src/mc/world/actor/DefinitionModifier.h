#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class DefinitionTrigger;
#endif // @header-generator platform
class EventResponse;
// clang-format on

struct DefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, std::vector<const EventResponse*>> mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionModifier(::DefinitionModifier const&);

    MCNAPI ~DefinitionModifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DefinitionModifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::EventResponse const*>> mResponses;
#endif // @header-generator platform
    // NOLINTEND
};
