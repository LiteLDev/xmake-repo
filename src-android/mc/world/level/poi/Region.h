#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/poi/ChunkRelPos.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct Chunk; }
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<Poi::ChunkRelPos, std::unique_ptr<Poi::Chunk>>> mChunks;
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mChunkMutex;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>                                             mRegistry;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                     mBox;
    // NOLINTEND
};

} // namespace Poi
