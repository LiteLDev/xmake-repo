#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionGroup;
// clang-format on

class ActorDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*> mGroup;
    ::ll::TypedStorage<8, 8, ::ActorDefinition*>      mPtr;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    ActorDefinitionPtr();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorDefinitionPtr();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionPtr& operator=(::ActorDefinitionPtr const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDefinitionPtr();
#else // @header-generator platform
    MCAPI ::ActorDefinitionPtr& operator=(::ActorDefinitionPtr const& rhs);

    MCAPI ~ActorDefinitionPtr();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorDefinitionPtr const& NONE();
#else // @header-generator platform
    MCAPI static ::ActorDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorDefinitionPtr const& rhs);
#endif
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
