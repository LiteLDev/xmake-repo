#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/biome/MobSpawnRules.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on
#endif // @header-generator platform

class SpawnGroupData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<MobSpawnRules>> mSpawnRules;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnRules>> mSpawnRules;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnGroupData(std::string const&, ::MobSpawnRules&);
#else // @header-generator platform
    MCAPI SpawnGroupData(::std::string const& identifier, ::MobSpawnRules& spawnRules);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSpawnRules(::MobSpawnRules&);

    MCNAPI std::vector<MobSpawnRules> const& getSpawnRules() const;
#else // @header-generator platform
    MCAPI ~SpawnGroupData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::MobSpawnRules&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& identifier, ::MobSpawnRules& spawnRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
