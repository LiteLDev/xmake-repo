#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEventStackEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEventName;
    ::ll::TypedStorage<8, 24, std::string> mEntityNameTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    ::ll::TypedStorage<8, 32, ::std::string> mEntityNameTag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorDefinitionEventStackEntry& operator=(ActorDefinitionEventStackEntry const&);
    ActorDefinitionEventStackEntry(ActorDefinitionEventStackEntry const&);
    ActorDefinitionEventStackEntry();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::ActorDefinitionEventStackEntry const&) const;

    MCNAPI ~ActorDefinitionEventStackEntry();
#else // @header-generator platform
    MCAPI ~ActorDefinitionEventStackEntry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
