#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TrialSpawnerConfig;
// clang-format on
#endif // @header-generator platform

class TrialSpawnerConfigRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, TrialSpawnerConfig>> mAliasesToConfig;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::TrialSpawnerConfig>> mAliasesToConfig;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TrialSpawnerConfigRegistry();
#else // @header-generator platform
    MCAPI TrialSpawnerConfigRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TrialSpawnerConfig const& getConfig(std::string const&) const;
#else // @header-generator platform
    MCAPI ::TrialSpawnerConfig const& getConfig(::std::string const& registryKey) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
