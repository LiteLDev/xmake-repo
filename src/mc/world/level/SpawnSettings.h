#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBiomeType.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SpawnSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SpawnBiomeType> type;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>     userDefinedBiomeName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>   userDefinedBiomeName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DimensionType>  dimension;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpawnSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
