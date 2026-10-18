#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BiomeFilterGroup;
class IMinecraftEventing;
class MobSpawnRules;
class ResourcePackManager;
class SemVersion;
class SpawnGroupData;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorSpawnRuleData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SpawnGroupRegistry {
public:
    // SpawnGroupRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SpawnGroupRegistryMap = std::vector<std::unique_ptr<SpawnGroupData>>;
#else // @header-generator platform
    using SpawnGroupLookupMap = ::std::unordered_map<::std::string, ::SpawnGroupData*>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SpawnGroupLookupMap = std::unordered_map<std::string, SpawnGroupData*>;
#else // @header-generator platform
    using SpawnGroupRegistryMap = ::std::vector<::std::unique_ptr<::SpawnGroupData>>;
#endif // @header-generator platform

    using SpawnRulesHandler =
#if defined(LL_PLAT_A) // @header-generator platform
        std::function<void(const std::string&, int, BiomeFilterGroup&, MobSpawnRules&, const SemVersion&)>;
#else // @header-generator platform
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SpawnGroupData>>>     mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SpawnGroupData*>> mSpawnGroupLookupMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpawnGroupData>>>     mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SpawnGroupData*>> mSpawnGroupLookupMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                   mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupRegistry& operator=(SpawnGroupRegistry const&);
    SpawnGroupRegistry(SpawnGroupRegistry const&);
    SpawnGroupRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpawnGroupRegistry();
#else // @header-generator platform
    virtual ~SpawnGroupRegistry() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnGroupRegistry(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI void _getResources(
        ::ResourcePackManager&,
        std::function<void(const std::string&, int, BiomeFilterGroup&, MobSpawnRules&, const SemVersion&)>
#else // @header-generator platform
    MCAPI void _getResources(
        ::ResourcePackManager& resourcePackManager,
        ::std::function<void(::std::string const&, int, ::BiomeFilterGroup&, ::MobSpawnRules&, ::SemVersion const&)>
            callback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnGroupData const* getSpawnGroup(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::SpawnGroupData const* getSpawnGroup(::std::string const& identifier) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
