#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkLightUpdate.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
struct Brightness;
// clang-format on

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
    struct RuntimeLightingSubchunkList;
    struct RelightingChunkElement;
    // clang-format on

    // RuntimeLightingManager inner types define
    struct RuntimeLightingSubchunkList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::vector<SubChunkLightUpdate>>> mAlteredSubchunkBlockList;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimeLightingSubchunkList& operator=(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RuntimeLightingSubchunkList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RelightingChunkElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                             mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>                        mChunkPos;
        ::ll::TypedStorage<8, 8, ulong>                             mSubChunkIndex;
        ::ll::TypedStorage<8, 8, std::vector<SubChunkLightUpdate>*> mAlteredBlockList;
        // NOLINTEND

    public:
        // prevent constructor by default
        RelightingChunkElement& operator=(RelightingChunkElement const&);
        RelightingChunkElement(RelightingChunkElement const&);
        RelightingChunkElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, RuntimeLightingManager::RuntimeLightingSubchunkList>> mLevelChunksToLight;
    ::ll::TypedStorage<8, 24, std::vector<RuntimeLightingManager::RelightingChunkElement>> mListOfChunksToProcess;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mProcessedSubchunks;
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<1, 1, bool> mWorkerScheduled;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLightingTimeboxTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RuntimeLightingManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RuntimeLightingManager(::Dimension&);

    MCNAPI void _getListOfChunksWithPlayerDistance();

    MCNAPI void _relightChunks(std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    MCNAPI void _removeProcessedSubchunks();

    MCNAPI void flushRunTimeLighting();

    MCNAPI void updateBlockLight(::BlockPos const&, ::Brightness, ::Brightness, ::Brightness, ::Brightness, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
