#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/StructureSpawnOverride.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { struct StructureSpawnOverride; }
#endif // @header-generator platform
// clang-format on

class StructureSpawnRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>>> mStaticStructures;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::weak_ptr<br::worldgen::Structure>>> mDynamicStructures;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>>
        mStaticStructures;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::weak_ptr<::br::worldgen::Structure>>>
        mDynamicStructures;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride> const*
    get(::std::string const& key) const;
#endif // @header-generator platform
    // NOLINTEND
};
