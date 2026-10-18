#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerBase.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DimensionHeightRange;
class LevelBuilder;
class LevelRendererCamera;
class RenderChunkShared;
struct Bounds;
struct LevelCullerResults;
// clang-format on

class LevelCullerNone : public ::LevelCullerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mVisibleSubChunks;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerNone();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerNone();

    virtual void handleCullingDutiesThisUpdate();

    virtual void triggerCull(bool);

    virtual void getCullerResults(std::function<void(const LevelCullerResults&)>&);

    virtual void resetCullingWorldDimensions(int, ::DimensionHeightRange const&, int);

    virtual void changeValidArea(::Bounds const&);

    virtual void updateChunkData(::RenderChunkShared const&, bool);

    virtual bool isBlockPositionVisible(::BlockPos const&) const;

    virtual void invalidateChunk(::SubChunkPos const&);

    virtual uint getCullIteration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleCullingDutiesThisUpdate();

    MCNAPI void $triggerCull(bool);

    MCNAPI void $getCullerResults(std::function<void(const LevelCullerResults&)>&);

    MCNAPI void $resetCullingWorldDimensions(int, ::DimensionHeightRange const&, int);

    MCNAPI void $changeValidArea(::Bounds const&);

    MCNAPI void $updateChunkData(::RenderChunkShared const&, bool);

    MCNAPI bool $isBlockPositionVisible(::BlockPos const&) const;

    MCNAPI void $invalidateChunk(::SubChunkPos const&);

    MCNAPI uint $getCullIteration();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LevelCullerNone {};
#endif // @header-generator platform
