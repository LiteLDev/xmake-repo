#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace dragon::atlas {

class DirtyTileRange {
public:
    // DirtyTileRange inner types define
    using Cleaner = ::brstd::move_only_function<void(const std::vector<dragon::atlas::AtlasTileHandle>&)>;

    using Iterator = const dragon::atlas::AtlasTileHandle*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<const dragon::atlas::IAtlasHandle>> mAtlas;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::AtlasTileHandle>>        mTiles;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                                 mSkippedTiles;
    ::ll::UntypedStorage<8, 64>                                                   mCleaner;
    // NOLINTEND
};

} // namespace dragon::atlas
