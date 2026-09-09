#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/levelgen/flat/BlockLayer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Json { class Value; }
// clang-format on

class FlatWorldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mEncodingVersion;
    ::ll::TypedStorage<8, 24, std::vector<BlockLayer>> mBlockLayers;
    ::ll::UntypedStorage<2, 2>                         mBiomeId;
    ::ll::UntypedStorage<8, 16>                        mStructureOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>           mWorldVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _load(::Json::Value const&, ::LevelData const&);

    MCNAPI ~FlatWorldOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value getLayers(::LevelData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
