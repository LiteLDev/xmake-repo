#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/levelgen/v2/StructureSpawnOverride.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
// clang-format on

class StructureSpawnRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>>> mStaticStructures;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::weak_ptr<br::worldgen::Structure>>> mDynamicStructures;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride> const*
           get(std::string const&) const;

    MCNAPI void
    insert(std::string_view, std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>&&);

    MCNAPI void insert(std::string_view, std::weak_ptr<br::worldgen::Structure>&&);

    MCNAPI ~StructureSpawnRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
