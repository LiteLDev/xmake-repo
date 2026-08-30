#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IGeometryAtlasKnownTilesReader.h"
#include "mc/client/gui/oreui/IGeometryAtlasKnownTilesWriter.h"
#include "mc/deps/core/math/Random.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace OreUI {

class KnownTileHandles : public ::OreUI::IGeometryAtlasKnownTilesWriter,
                         public ::OreUI::IGeometryAtlasKnownTilesReader {
public:
    // KnownTileHandles inner types define
    using Map = ::brstd::flat_map<
        uint,
        std::weak_ptr<GeometryAtlas::IAtlasTile>,
        std::less<uint>,
        std::vector<uint>,
        std::vector<std::weak_ptr<GeometryAtlas::IAtlasTile>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192>                mTiles;
    ::ll::TypedStorage<1, 1, uchar>             mGCTimer;
    ::ll::TypedStorage<8, 2536, ::Core::Random> mRandom;
    ::ll::UntypedStorage<8, 64>                 mFactory;
    // NOLINTEND
};

} // namespace OreUI
