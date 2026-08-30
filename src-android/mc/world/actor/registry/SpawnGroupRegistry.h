#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BiomeFilterGroup;
class IMinecraftEventing;
class MobSpawnRules;
class ResourcePackManager;
class SemVersion;
class SpawnGroupData;
struct ActorSpawnRuleData;
// clang-format on

class SpawnGroupRegistry {
public:
    // SpawnGroupRegistry inner types define
    using SpawnGroupRegistryMap = std::vector<std::unique_ptr<SpawnGroupData>>;

    using SpawnGroupLookupMap = std::unordered_map<std::string, SpawnGroupData*>;

    using SpawnRulesHandler =
        std::function<void(const std::string&, int, BiomeFilterGroup&, MobSpawnRules&, const SemVersion&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SpawnGroupData>>>     mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SpawnGroupData*>> mSpawnGroupLookupMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupRegistry& operator=(SpawnGroupRegistry const&);
    SpawnGroupRegistry(SpawnGroupRegistry const&);
    SpawnGroupRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnGroupRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnGroupRegistry(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI void _getResources(
        ::ResourcePackManager&,
        std::function<void(const std::string&, int, BiomeFilterGroup&, MobSpawnRules&, const SemVersion&)>
    );

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
