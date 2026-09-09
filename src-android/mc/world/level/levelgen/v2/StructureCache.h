#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/v2/StructureInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureCache {
public:
    // StructureCache inner types declare
    // clang-format off
    struct StructureTempOwner;
    struct StructurePair;
    // clang-format on

    // StructureCache inner types define
    struct StructureTempOwner {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<int>>                                              mTimers;
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<br::worldgen::StructureInstance>>> mInstances;
        ::ll::UntypedStorage<1, 144>                                                             mMutex;
        // NOLINTEND
    };

    struct StructurePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                           mStructure;
        ::ll::TypedStorage<8, 16, std::weak_ptr<br::worldgen::StructureInstance>> mInstance;
        // NOLINTEND

    public:
        // prevent constructor by default
        StructurePair& operator=(StructurePair const&);
        StructurePair(StructurePair const&);
        StructurePair();
    };

    using StructureMap = std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>>> mCache;
    ::ll::UntypedStorage<1, 144> mCacheMutex;
    ::ll::TypedStorage<8, 192, ::br::worldgen::StructureCache::StructureTempOwner> mWaitingToBeClaimed;
    ::ll::TypedStorage<4, 4, int> mGcTimer;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureCache();

    MCNAPI std::shared_ptr<const br::worldgen::StructureInstance> at(::BlockPos) const;

    MCNAPI std::vector<std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> collectGroupByStep() const;

    MCNAPI bool setInstanceForStructure(
        ::br::worldgen::Structure const&,
        std::shared_ptr<br::worldgen::StructureInstance>&&,
        ::ChunkPos
    );

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
    // NOLINTEND
};

} // namespace br::worldgen
