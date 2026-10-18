#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/VisibilityNode.h"
#include "mc/client/renderer/game/LevelCullerBase.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkVisibilityCache;
class LevelBuilder;
class LevelRendererCamera;
class RenderChunkShared;
// clang-format on

class LevelCullerCachedBase : public ::LevelCullerBase {
#else // @header-generator platform
class LevelCullerCachedBase {
#endif // @header-generator platform
public:
    // LevelCullerCachedBase inner types declare
    // clang-format off
    struct ChangeElement;
#if defined(LL_PLAT_A) // @header-generator platform
    struct UpdateChunkData;
#else // @header-generator platform
#endif // @header-generator platform
    struct ResetCullingWorldDimensions;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UpdateChunkData;
#endif // @header-generator platform
    // clang-format on

    // LevelCullerCachedBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ChangeID : int {
        ResetCullingWorldDimensions = 0,
        ChangeValidArea             = 1,
        UpdateChunkData             = 2,
        Invalidate                  = 3,
    };
#else // @header-generator platform
    enum class ChangeID : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ChangeElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::LevelCullerCachedBase::ChangeID> mChangeType;
        ::ll::TypedStorage<8, 8, ulong>                             mListIdx;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ChangeElement {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UpdateChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::SubChunkPos>   mRenderChunkPosition;
        ::ll::TypedStorage<1, 1, bool>             mIsSkyLit;
        ::ll::TypedStorage<1, 6, ::VisibilityNode> mVisibilityNode;
        ::ll::TypedStorage<1, 1, bool>             mChunkIsEmpty;
        ::ll::TypedStorage<1, 1, bool>             mForceRequery;
        // NOLINTEND
#else // @header-generator platform
    struct ResetCullingWorldDimensions {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        UpdateChunkData& operator=(UpdateChunkData const&);
    };

    struct ResetCullingWorldDimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                    mViewSideSize;
        ::ll::TypedStorage<2, 4, ::DimensionHeightRange> mHeightRange;
        ::ll::TypedStorage<4, 4, int>                    mMaxCullingSteps;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkVisibilityCache>> mChunkVisibilityCache;
    ::ll::TypedStorage<4, 4, int> mChunkViewAreaSide;
    ::ll::TypedStorage<2, 6, std::optional<DimensionHeightRange>> mHeightRange;
    ::ll::TypedStorage<4, 4, int> mMaxCullingSteps;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mLastCullingChunkPos;
    ::ll::TypedStorage<1, 1, uchar> mChunkVisibilityFrameID;
    ::ll::TypedStorage<8, 24, std::vector<LevelCullerCachedBase::ChangeElement>> mChangeList;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mApplyInvalidateList;
    ::ll::TypedStorage<8, 24, std::vector<LevelCullerCachedBase::UpdateChunkData>> mApplyUpdatesList;
    ::ll::TypedStorage<8, 24, std::vector<LevelCullerCachedBase::ResetCullingWorldDimensions>> mApplyResetCullingWorldDataList;
    ::ll::TypedStorage<8, 24, std::vector<Bounds>> mChangeValidAreaList;
    ::ll::TypedStorage<4, 48, ::Bounds> mValidArea;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mApplyChangesSpinLock;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerCachedBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerCachedBase();

    virtual void resetCullingWorldDimensions(int, ::DimensionHeightRange const&, int);

    virtual void changeValidArea(::Bounds const&);

    virtual void updateChunkData(::RenderChunkShared const&, bool);

    virtual bool isBlockPositionVisible(::BlockPos const&) const;

    virtual void invalidateChunk(::SubChunkPos const&);

    virtual bool shouldRecullAfterChunkChange(::RenderChunkShared const*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelCullerCachedBase(std::weak_ptr<LevelRendererCamera>, ::LevelBuilder&);

    MCNAPI void _applyChunkCacheChanges();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<LevelRendererCamera>, ::LevelBuilder&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $resetCullingWorldDimensions(int, ::DimensionHeightRange const&, int);

    MCNAPI void $changeValidArea(::Bounds const&);

    MCNAPI void $updateChunkData(::RenderChunkShared const&, bool);

    MCNAPI bool $isBlockPositionVisible(::BlockPos const&) const;

    MCNAPI void $invalidateChunk(::SubChunkPos const&);

    MCNAPI bool $shouldRecullAfterChunkChange(::RenderChunkShared const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct UpdateChunkData {};
#endif // @header-generator platform
};
