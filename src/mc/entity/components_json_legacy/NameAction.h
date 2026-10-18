#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct NameAction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNameFilters;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnNamed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mNameFilters;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>    mOnNamed;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NameAction& operator=(NameAction const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addNameFilterByName(std::string const&);

    MCNAPI ~NameAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void addNameFilterByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
