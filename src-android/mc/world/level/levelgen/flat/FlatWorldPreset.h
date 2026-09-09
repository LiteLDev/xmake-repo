#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/levelgen/flat/FlatWorldLayer.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct FlatWorldPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FlatWorldPresetID>          id;
    ::ll::UntypedStorage<2, 2>                             biome;
    ::ll::TypedStorage<8, 24, std::vector<FlatWorldLayer>> layers;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldPreset& operator=(FlatWorldPreset const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ushort getBiomeId() const;

    MCNAPI ::Json::Value toJson() const;

    MCNAPI ~FlatWorldPreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
