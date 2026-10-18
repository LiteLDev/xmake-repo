#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/poi/ChunkRelPos.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct Chunk; }
namespace Poi { struct Registry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<Poi::ChunkRelPos, std::unique_ptr<Poi::Chunk>>> mChunks;
    ::ll::TypedStorage<4, 40, std::mutex>                                                        mChunkMutex;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>                                             mRegistry;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                     mBox;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk126dfe;
    ::ll::UntypedStorage<8, 80> mUnkb039e8;
    ::ll::UntypedStorage<8, 8>  mUnkd30fd1;
    ::ll::UntypedStorage<4, 24> mUnkcfe556;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Region& operator=(Region const&);
    Region(Region const&);
    Region();
#endif // @header-generator platform
};

} // namespace Poi
