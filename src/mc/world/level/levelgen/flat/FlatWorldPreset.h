#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/flat/FlatWorldLayer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct FlatWorldLayer;
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct FlatWorldPreset {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FlatWorldPresetID>          id;
    ::ll::UntypedStorage<2, 2>                             biome;
    ::ll::TypedStorage<8, 24, std::vector<FlatWorldLayer>> layers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FlatWorldPresetID>              id;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                    biome;
    ::ll::TypedStorage<8, 24, ::std::vector<::FlatWorldLayer>> layers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FlatWorldPreset& operator=(FlatWorldPreset const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getBiomeId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ushort getBiomeId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value toJson() const;

    MCNAPI ~FlatWorldPreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::Json::Value toJson() const;
#endif // @header-generator platform
    // NOLINTEND
};
