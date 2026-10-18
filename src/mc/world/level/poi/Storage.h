#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/WorldGenContext.h"
#include "mc/world/level/poi/FileStorage.h"
#include "mc/world/level/poi/RegionId.h"
#include "mc/world/level/poi/StorageInfo.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class Dimension;
class LevelStorage;
namespace Poi { struct Chunk; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Poi { struct Region; }
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

struct Storage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<Poi::RegionId, std::unique_ptr<Poi::Region>, std::hash<Poi::RegionId>, std::equal_to<void>, std::allocator<std::pair<const Poi::RegionId, std::unique_ptr<Poi::Region>>>>> mRegions;
    ::ll::TypedStorage<8, 40, std::unordered_set<Poi::RegionId>> mDirtyRegions;
    ::ll::TypedStorage<2, 6, ::br::worldgen::WorldGenContext> mWorldContext;
    ::ll::TypedStorage<4, 40, std::mutex> mRegionMutex;
    ::ll::TypedStorage<8, 48, ::Poi::StorageInfo> mInfo;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCtx;
    ::ll::TypedStorage<8, 40, ::Poi::FileStorage> mBackingStorage;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*> mRegistry;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::Poi::RegionId, ::std::unique_ptr<::Poi::Region>>> mRegions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::Poi::RegionId>>                                mDirtyRegions;
    ::ll::TypedStorage<2, 6, ::br::worldgen::WorldGenContext>                                       mWorldContext;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                          mRegionMutex;
    ::ll::TypedStorage<8, 64, ::Poi::StorageInfo>                                                   mInfo;
    ::ll::TypedStorage<8, 128, ::cereal::ReflectionCtx>                                             mCtx;
    ::ll::TypedStorage<8, 64, ::Poi::FileStorage>                                                   mBackingStorage;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>                                                mRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Storage();
#else // @header-generator platform
    MCAPI ~Storage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Poi
