#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/StructureInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { class StructureInstance; }
#endif // @header-generator platform
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureCache {
public:
    // StructureCache inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct StructureTempOwner;
#else // @header-generator platform
#endif // @header-generator platform
    struct StructurePair;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct StructureTempOwner;
#endif // @header-generator platform
    // clang-format on

    // StructureCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct StructureTempOwner {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<int>>                                              mTimers;
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<br::worldgen::StructureInstance>>> mInstances;
        ::ll::UntypedStorage<1, 144>                                                             mMutex;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct StructurePair {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                           mStructure;
        ::ll::TypedStorage<8, 16, std::weak_ptr<br::worldgen::StructureInstance>> mInstance;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                                              mStructure;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::br::worldgen::StructureInstance>> mInstance;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        StructurePair& operator=(StructurePair const&);
        StructurePair(StructurePair const&);
        StructurePair();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using StructureMap = std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>>;
#else // @header-generator platform
    struct StructureTempOwner {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<int>>                                                  mTimers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance>>> mInstances;
        ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                                  mMutex;
        // NOLINTEND
    };

    using StructureMap = ::std::unordered_map<::ChunkPos, ::std::vector<::br::worldgen::StructureCache::StructurePair>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>>> mCache;
    ::ll::UntypedStorage<1, 144> mCacheMutex;
    ::ll::TypedStorage<8, 192, ::br::worldgen::StructureCache::StructureTempOwner> mWaitingToBeClaimed;
    ::ll::TypedStorage<4, 4, int> mGcTimer;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ChunkPos, ::std::vector<::br::worldgen::StructureCache::StructurePair>>>
                                                                                  mCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                 mCacheMutex;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureCache::StructureTempOwner> mWaitingToBeClaimed;
    ::ll::TypedStorage<4, 4, int>                                                 mGcTimer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureCache();
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance const> at(::BlockPos pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<const br::worldgen::StructureInstance> at(::BlockPos) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>>
    collectGroupByStep() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> collectGroupByStep() const;

    MCNAPI bool setInstanceForStructure(
        ::br::worldgen::Structure const&,
        std::shared_ptr<br::worldgen::StructureInstance>&&,
        ::ChunkPos
#else // @header-generator platform
    MCAPI bool setInstanceForStructure(
        ::br::worldgen::Structure const&                       structure,
        ::std::shared_ptr<::br::worldgen::StructureInstance>&& instance,
        ::ChunkPos                                             chunkPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();

    MCNAPI ~StructureCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
