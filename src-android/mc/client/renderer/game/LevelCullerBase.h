#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DimensionHeightRange;
class LevelBuilder;
class LevelCullerShadow;
class LevelRendererCamera;
class RenderChunkShared;
class SubChunkPos;
struct Bounds;
struct LevelCullerResults;
// clang-format on

class LevelCullerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<LevelRendererCamera>> mLevelRendererCamera;
    ::ll::TypedStorage<8, 8, ::LevelBuilder&>                     mLevelBuilder;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerBase& operator=(LevelCullerBase const&);
    LevelCullerBase(LevelCullerBase const&);
    LevelCullerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerBase();

    virtual void handleCullingDutiesThisUpdate() = 0;

    virtual void triggerCull(bool) = 0;

    virtual void getCullerResults(std::function<void(const LevelCullerResults&)>&) = 0;

    virtual void resetCullingWorldDimensions(int, ::DimensionHeightRange const&, int) = 0;

    virtual void changeValidArea(::Bounds const&) = 0;

    virtual void updateChunkData(::RenderChunkShared const&, bool) = 0;

    virtual bool isBlockPositionVisible(::BlockPos const&) const = 0;

    virtual void invalidateChunk(::SubChunkPos const&) = 0;

    virtual bool isBusy() const;

    virtual bool shouldRecullAfterChunkChange(::RenderChunkShared const*);

    virtual uint getCullIteration() = 0;

    virtual ::LevelCullerShadow* asLevelCullerShadow();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBusy() const;

    MCNAPI bool $shouldRecullAfterChunkChange(::RenderChunkShared const*);

    MCNAPI ::LevelCullerShadow* $asLevelCullerShadow();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
