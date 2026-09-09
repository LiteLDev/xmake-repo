#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class LevelChunk;
class LevelChunkBlockActorAccessToken;
class Random;
struct Bounds;
struct DimensionType;
struct LevelChunkFinalDeleter;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

class ChunkViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>  mParentLoadMode;
    ::ll::UntypedStorage<8, 400> mArea;
    ::ll::UntypedStorage<8, 16>  mMainSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&);
    ChunkViewSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ChunkViewSource();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Random&);

    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    virtual bool isWithinWorldLimit(::ChunkPos const&) const;

    virtual void setLevelChunk(std::shared_ptr<LevelChunk>);

    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkViewSource(::ChunkViewSource const&);

    MCNAPI ChunkViewSource(::ChunkSource&, ::ChunkSource::LoadMode);

    MCNAPI void addChunkPosForProcessingNeighbours(std::shared_ptr<LevelChunk>);

    MCNAPI void clear();

    MCNAPI void clearEntryAtChunkPos(::ChunkPos const&);

    MCNAPI std::vector<LevelChunkBlockActorAccessToken> enableBlockEntityAccess();

    MCNAPI ::GridArea<std::shared_ptr<LevelChunk>>& getArea();

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI void move(
        ::Bounds const&,
        bool,
        ::ChunkSourceViewGenerateMode,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        float const*
    );

    MCNAPI void move(
        ::BlockPos const&,
        ::BlockPos const&,
        bool,
        ::ChunkSourceViewGenerateMode,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        float const*
    );

    MCNAPI void move(
        ::BlockPos const&,
        int,
        bool,
        ::ChunkSourceViewGenerateMode,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        float const*
    );

    MCNAPI void rebuildSpecificArea(::Bounds const&, bool, std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkViewSource const&);

    MCNAPI void* $ctor(::ChunkSource&, ::ChunkSource::LoadMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<LevelChunk> $getExistingChunk(::ChunkPos const&);

    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Random&);

    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    MCNAPI bool $isWithinWorldLimit(::ChunkPos const&) const;

    MCNAPI void $setLevelChunk(std::shared_ptr<LevelChunk>);

    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
