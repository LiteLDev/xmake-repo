#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FaceSortingMetaDataBase;
class RenderChunkSorterSharedInfo;
class SubChunkPos;
class Vec3;
struct TerrainLayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class RenderChunkSorter {
public:
    // RenderChunkSorter inner types declare
    // clang-format off
    struct FaceInfo;
    // clang-format on

    // RenderChunkSorter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct FaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> distance;
        uint                            index   : 31;
        uint                            reverse : 1;
        // NOLINTEND

    public:
        // prevent constructor by default
        FaceInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                           mRawIndexBytes;
    ::ll::TypedStorage<4, 176, std::array<RangeIndices, 22>>                mSortedLayers;
    ::ll::TypedStorage<4, 176, std::array<RangeIndices, 22>>                mLayers;
    ::ll::TypedStorage<8, 24, std::vector<RenderChunkSorter::FaceInfo>>     mFaceInfo;
    ::ll::TypedStorage<4, 4, uint>                                          mIndexSize;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>>        mCameraDelta;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkSorterSharedInfo>> mSharedInfo;
    ::ll::TypedStorage<1, 1, bool>                                          mForceDisableCulling;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkSorter& operator=(RenderChunkSorter const&);
    RenderChunkSorter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkSorter();

    virtual void sortAndCullFaces(::SubChunkPos const&, ::buffer_span<std::shared_ptr<FaceSortingMetaDataBase>>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RenderChunkSorter(std::shared_ptr<RenderChunkSorterSharedInfo>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::RangeIndices
    getRangeIndices(::buffer_span<RangeIndices>, ::TerrainLayer const&, ::TerrainLayerLOD const, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<RenderChunkSorterSharedInfo>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sortAndCullFaces(::SubChunkPos const&, ::buffer_span<std::shared_ptr<FaceSortingMetaDataBase>>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct FaceInfo {};
#endif // @header-generator platform
};
