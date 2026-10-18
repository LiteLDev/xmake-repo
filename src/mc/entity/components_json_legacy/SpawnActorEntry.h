#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SpawnActorParameters.h"

struct SpawnActorEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 248, ::SpawnActorParameters> mParams;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SpawnActorParameters> mParams;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                      mSpawnTimer;
    ::ll::TypedStorage<1, 1, bool>                     mStopSpawning;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SpawnActorEntry& operator=(SpawnActorEntry const&);
    SpawnActorEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnActorEntry(::SpawnActorEntry&&);

    MCNAPI ~SpawnActorEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnActorEntry&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
