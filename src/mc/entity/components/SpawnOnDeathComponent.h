#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct SpawnOnDeathComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mEntityDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mEntityDefinition;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilterGroup;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  mSpawnMethod;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                mSpawnMethod;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>       mAdditionalSpawnRange;
    ::ll::TypedStorage<4, 4, int>                           mAmount;
    ::ll::TypedStorage<1, 1, bool>                          mInheritName;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnOnDeathComponent& operator=(SpawnOnDeathComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SpawnOnDeathComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SpawnOnDeathComponent();
#else // @header-generator platform
    MCAPI SpawnOnDeathComponent(::SpawnOnDeathComponent const&);

    MCAPI ::SpawnOnDeathComponent& operator=(::SpawnOnDeathComponent&&);

    MCAPI ~SpawnOnDeathComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpawnOnDeathComponent const&);
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
