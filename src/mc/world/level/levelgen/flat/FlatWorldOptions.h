#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/biome/BiomeIdType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/flat/BlockLayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LevelData;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
struct BlockLayer;
#endif // @header-generator platform
// clang-format on

class FlatWorldOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                      mEncodingVersion;
    ::ll::TypedStorage<8, 24, std::vector<BlockLayer>> mBlockLayers;
    ::ll::UntypedStorage<2, 2>                         mBiomeId;
    ::ll::UntypedStorage<8, 16>                        mStructureOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>           mWorldVersion;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          mEncodingVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLayer>> mBlockLayers;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                mBiomeId;
    ::ll::TypedStorage<8, 16, ::Json::Value>               mStructureOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>               mWorldVersion;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FlatWorldOptions();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _load(::Json::Value const&, ::LevelData const&);

    MCNAPI ~FlatWorldOptions();
#else // @header-generator platform
    MCAPI bool _load(::Json::Value const& root, ::LevelData const& levelData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Json::Value getLayers(::LevelData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Json::Value getLayers(::LevelData const& levelData);
#endif // @header-generator platform
    // NOLINTEND
};
