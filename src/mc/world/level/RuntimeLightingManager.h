#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/SubChunkLightUpdate.h"
#include "mc/world/level/SubChunkPos.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SubChunkPos;
#endif // @header-generator platform
struct Brightness;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SubChunkLightUpdate;
#endif // @header-generator platform
// clang-format on

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct RuntimeLightingSubchunkList;
#else // @header-generator platform
#endif // @header-generator platform
    struct RelightingChunkElement;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RuntimeLightingSubchunkList;
#endif // @header-generator platform
    // clang-format on

    // RuntimeLightingManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct RelightingChunkElement {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                             mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>                        mChunkPos;
        ::ll::TypedStorage<8, 8, ulong>                             mSubChunkIndex;
        ::ll::TypedStorage<8, 8, std::vector<SubChunkLightUpdate>*> mAlteredBlockList;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                                 mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>                            mChunkPos;
        ::ll::TypedStorage<8, 8, uint64>                                mSubChunkIndex;
        ::ll::TypedStorage<8, 8, ::std::vector<::SubChunkLightUpdate>*> mAlteredBlockList;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RuntimeLightingSubchunkList {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        RelightingChunkElement& operator=(RelightingChunkElement const&);
        RelightingChunkElement(RelightingChunkElement const&);
        RelightingChunkElement();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::SubChunkLightUpdate>>> mAlteredSubchunkBlockList;
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, RuntimeLightingManager::RuntimeLightingSubchunkList>> mLevelChunksToLight;
    ::ll::TypedStorage<8, 24, std::vector<RuntimeLightingManager::RelightingChunkElement>> mListOfChunksToProcess;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mProcessedSubchunks;
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<1, 1, bool> mWorkerScheduled;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLightingTimeboxTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::RuntimeLightingManager::RuntimeLightingSubchunkList>>
                                                                                               mLevelChunksToLight;
    ::ll::TypedStorage<8, 24, ::std::vector<::RuntimeLightingManager::RelightingChunkElement>> mListOfChunksToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>>                                    mProcessedSubchunks;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                     mDimension;
    ::ll::TypedStorage<1, 1, bool>                                                             mWorkerScheduled;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                                       mLightingTimeboxTime;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RuntimeLightingManager();
#else // @header-generator platform
    virtual ~RuntimeLightingManager() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RuntimeLightingManager(::Dimension&);
#else // @header-generator platform
    MCAPI void _getListOfChunksWithPlayerDistance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _getListOfChunksWithPlayerDistance();
#else // @header-generator platform
    MCAPI void _relightChunks(::std::chrono::nanoseconds timeLimit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _relightChunks(std::chrono::duration<long long, std::ratio<1, 1000000000>>);
#else // @header-generator platform
    MCAPI void _removeProcessedSubchunks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updateBlockLight(
        ::BlockPos const& blockPos,
        ::Brightness      oldBrightness,
        ::Brightness      newBrightness,
        ::Brightness      oldAbsorption,
        ::Brightness      newAbsorption,
        bool              isSkyLight
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
