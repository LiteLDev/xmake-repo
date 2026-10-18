#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"

// auto generated forward declare list
// clang-format off
class RenderChunkGeometry;
class RenderChunkShared;
class RenderChunkSorter;
class Vec3;
struct ChunkLayerRenderObject;
struct RangeIndices;
struct RenderChunkDirectIndexData;
struct TerrainLayer;
namespace mce { class IndexBufferContainer; }
namespace mce { class MaterialPtr; }
namespace mce { struct BufferResourceService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class RenderChunkInstanced {
public:
    // RenderChunkInstanced inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SortState : uchar {
        Sorting = 0,
        Idle    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mDistanceFromCamera2;
    ::ll::UntypedStorage<4, 4> mChunkBuildPriority;
    bool mCanRender : 1;
    bool mCameraMovedEnough : 1;
    bool mFallbackToUnsorted : 1;
    bool mNewSortData : 1;
    bool mCurrentGeometryHasSortedLayers : 1;
    bool mEmpty : 1;
    ::ll::TypedStorage<1, 1, std::atomic<RenderChunkInstanced::SortState>> mSortState;
    ::ll::TypedStorage<1, 1, uchar> mLastSortRenderChunkGeometryVersion;
    ::ll::TypedStorage<4, 4, float> mAverageBrightness;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkShared>> mRenderChunkShared;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkGeometry>> mCurrentRenderChunkGeometry;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, std::shared_ptr<mce::IndexBufferContainer>, std::shared_ptr<RenderChunkDirectIndexData>>> mCurrentIndices;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::array<RangeIndices, 22>>> mCurrentIndexRanges;
    ::ll::TypedStorage<8, 8, ulong> mIndexBufferSizeEstimate;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkGeometry>> mSortingRenderChunkGeometry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkGeometry>> mNextRenderChunkGeometry;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, std::shared_ptr<mce::IndexBufferContainer>, std::shared_ptr<RenderChunkDirectIndexData>>> mNextIndices;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::array<RangeIndices, 22>>> mNextIndexRanges;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>> mLastSortCameraDelta;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>> mCurrentIndexBufferCameraDelta;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mGuaranteedPromoteTime;
    ::ll::TypedStorage<8, 16, std::weak_ptr<mce::BufferResourceService>> mBufferResourceService;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderChunkInstanced();

    MCNAPI void _startSortCommon(::RenderChunkSorter&);

    MCNAPI std::shared_ptr<RenderChunkShared> acquireRenderChunkShared();

    MCNAPI bool canRender() const;

    MCNAPI void clearMeshData();

    MCNAPI ::ChunkLayerRenderObject createLayerRenderObject(
        ::TerrainLayer const&,
        ::TerrainLayerLOD const,
        ::mce::MaterialPtr const&,
        ulong,
        uint,
        ::RangeIndices
    ) const;

    MCNAPI bool currentGeometryHasSortedLayers() const;

    MCNAPI bool doesCurrentRenderChunkGeometryExist() const;

    MCNAPI void endSort(::RenderChunkSorter&, ::mce::BufferResourceService&);

    MCNAPI float getAverageBrightness() const;

    MCNAPI float getDistanceFromPlayerCamera2() const;

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getGuaranteedPromoteTime() const;

    MCNAPI uchar getLastSortedRenderChunkGeometryVersion() const;

    MCNAPI ::RenderChunkGeometry* getNextRenderChunkGeometry() const;

    MCNAPI ::RangeIndices getRangeIndices(::TerrainLayer const&, ::TerrainLayerLOD const) const;

    MCNAPI ::RenderChunkGeometry* getRenderChunkGeometry() const;

    MCNAPI std::variant<
        std::monostate,
        std::shared_ptr<mce::IndexBufferContainer>,
        std::shared_ptr<RenderChunkDirectIndexData>> const&
    getRenderChunkIndices() const;

    MCNAPI ulong getRenderChunkIndicesEstimatedSize() const;

    MCNAPI ::RenderChunkShared const* getRenderChunkShared() const;

    MCNAPI ::RenderChunkShared* getRenderChunkShared();

    MCNAPI std::array<RangeIndices, 22> const& getSortedIndexRanges() const;

    MCNAPI bool hasNewChunkGeometry() const;

    MCNAPI bool isEmptyVisibility() const;

    MCNAPI bool isNewSortData() const;

    MCNAPI bool isSortState(::RenderChunkInstanced::SortState);

    MCNAPI void onOrthographicCameraMoved(::Vec3 const&);

    MCNAPI void onPerspectiveCameraMoved(::Vec3 const&, bool);

    MCNAPI void prefetchIndexBufferPtr() const;

    MCNAPI void promoteSortedGeometry();

    MCNAPI void setRenderChunkShared(std::shared_ptr<RenderChunkShared>);

    MCNAPI bool shouldSort() const;

    MCNAPI void sortAndCullFaces(::RenderChunkSorter&);

    MCNAPI void startSortOrthographic(::RenderChunkSorter&, ::Vec3 const&);

    MCNAPI void startSortPerspective(::RenderChunkSorter&, ::Vec3 const&);

    MCNAPI void updateDistanceFromPlayerCamera(::Vec3 const&);

    MCNAPI ~RenderChunkInstanced();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _resetIndices(
        std::variant<
            std::monostate,
            std::shared_ptr<mce::IndexBufferContainer>,
            std::shared_ptr<RenderChunkDirectIndexData>>&
    );

    MCNAPI static void garbageCollectIndexBuffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::MPMCQueue<std::variant<
        std::monostate,
        std::shared_ptr<mce::IndexBufferContainer>,
        std::shared_ptr<RenderChunkDirectIndexData>>>&
    mIndexBufferGarbageList();
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
#else // @header-generator platform
    enum class SortState : uchar {};
#endif // @header-generator platform
};
