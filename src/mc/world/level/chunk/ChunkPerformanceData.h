#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/ChunkLoadTelemetryData.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/AtomicTimeAccumulator.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ClientChunkPerformanceData;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelChunkEventManagerConnector;
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ClientChunkPerformanceData;
#endif // @header-generator platform
// clang-format on

struct ChunkPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkPerformanceData inner types declare
    // clang-format off
    class AtomicMemoryAccumulator;
    struct PaletteData;
    // clang-format on

    // ChunkPerformanceData inner types define
    class AtomicMemoryAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCount;
        ::ll::TypedStorage<8, 8, std::atomic<ulong>> mMemorySum;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtomicMemoryAccumulator();

        MCNAPI void addMemory(ulong);

        MCNAPI ulong getMemoryAverage() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mCount;
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mMemorySum;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct PaletteData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>  mMin;
        ::ll::TypedStorage<8, 8, ulong>  mMax;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mMin;
        ::ll::TypedStorage<8, 8, uint64> mMax;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, double> mAverage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ChunkPerformanceData::AtomicMemoryAccumulator> mRenderChunkMemorySizePerformanceData;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator>                         mServerLevelChunkSaveTime;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                mServerLevelChunkChunksSavedCount;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                              mServerLevelChunkChunksSavedCount;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 76, ::ChunkLoadTelemetryData>                        mChunkLoadTelemetryData;
    ::ll::TypedStorage<1, 1, bool>                                             mShouldResetData;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkSharedCount;
    ::ll::TypedStorage<4, 4, uint>                                             mWeakRenderChunkSharedCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkSharedMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryBaseMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryVertexCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryVertexBufferSize;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryMeshVertexBufferSize;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkGeometryFaceMetadataMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedCount;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedBaseMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedIndexMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedDifferentGeoCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                mClientLevelChunkMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerLevelChunkMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerSynchedBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mClientSynchedBiomeData3DMemory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                               mClientLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedBiomeData3DMemory;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mClientSubChunkPaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mServerSubChunkPaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mClientBiomePaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mServerBiomePaletteData;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                mClientLevelChunkBlockTickingQueueMemory;
    ::ll::TypedStorage<8, 8, ulong>                                mServerLevelChunkBlockTickingQueueMemory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                               mClientLevelChunkBlockTickingQueueMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerLevelChunkBlockTickingQueueMemory;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingRenderChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingClientLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingServerLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingClientSynchedLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingServerSynchedLevelChunkData;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>>> mClientChunkSourceLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>>> mServerChunkSourceLookupMap;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                        mServerChunksQueued;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                        mServerChunksSent;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                        mServerChunksExpired;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                        mSubChunkHashInitializations;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                        mSubChunkHashRecalculations;
    ::ll::TypedStorage<4, 4, uint>                                                     mRenderDistance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mOnChunkLoaded;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>>
        mClientChunkSourceLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>>
                                                               mServerChunkSourceLookupMap;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksQueued;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksSent;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksExpired;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mSubChunkHashInitializations;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mSubChunkHashRecalculations;
    ::ll::TypedStorage<4, 4, uint>                             mRenderDistance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChunkPerformanceData();
#else // @header-generator platform
    virtual ~ChunkPerformanceData() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void visit(::brstd::function_ref<void(ClientChunkPerformanceData&)>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void visit(::brstd::function_ref<void(::ClientChunkPerformanceData&)>);
#else // LL_PLAT_C
    virtual void visit(::brstd::function_ref<void(::ClientChunkPerformanceData&)> visitor);
#endif
#endif // @header-generator platform

    virtual void resetAll();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);
#else // @header-generator platform
    MCAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $visit(::brstd::function_ref<void(ClientChunkPerformanceData&)>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $visit(::brstd::function_ref<void(::ClientChunkPerformanceData&)>);
#else // LL_PLAT_C
    MCFOLD void $visit(::brstd::function_ref<void(::ClientChunkPerformanceData&)> visitor);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetAll();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $resetAll();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
