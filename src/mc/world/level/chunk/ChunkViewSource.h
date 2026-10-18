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
#if defined(LL_PLAT_A) // @header-generator platform
class LevelChunkBlockActorAccessToken;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
struct Bounds;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
struct LevelChunkFinalDeleter;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

class ChunkViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 16>  mParentLoadMode;
    ::ll::UntypedStorage<8, 400> mArea;
    ::ll::UntypedStorage<8, 16>  mMainSource;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ChunkSource::LoadMode>                       mParentLoadMode;
    ::ll::TypedStorage<8, 304, ::GridArea<::std::shared_ptr<::LevelChunk>>> mArea;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                mMainSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&);
    ChunkViewSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ChunkViewSource();
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Random&);
#else // @header-generator platform
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWithinWorldLimit(::ChunkPos const&) const;
#else // @header-generator platform
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLevelChunk(std::shared_ptr<LevelChunk>);
#else // @header-generator platform
    virtual ::std::shared_ptr<::br::worldgen::StructureInstance>
    _tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
#else // @header-generator platform
    virtual ~ChunkViewSource() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkViewSource(::ChunkViewSource const&);
#else // @header-generator platform
    MCAPI ChunkViewSource(::ChunkViewSource const& otherChunkViewSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkViewSource(::ChunkSource&, ::ChunkSource::LoadMode);
#else // @header-generator platform
    MCAPI ChunkViewSource(::ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addChunkPosForProcessingNeighbours(std::shared_ptr<LevelChunk>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ChunkViewSource(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void move(
        ::Bounds const&                                                     bounds,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void move(
        ::BlockPos const&,
        ::BlockPos const&,
        bool,
        ::ChunkSourceViewGenerateMode,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        float const*
#else // @header-generator platform
    MCAPI void move(
        ::BlockPos const&                                                   blockMin,
        ::BlockPos const&                                                   blockMax,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void move(
        ::BlockPos const&,
        int,
        bool,
        ::ChunkSourceViewGenerateMode,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        float const*
#else // @header-generator platform
    MCAPI void move(
        ::BlockPos const&                                                   center,
        int                                                                 radius,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void rebuildSpecificArea(::Bounds const&, bool, std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool, bool);
#else // @header-generator platform
    MCAPI void rebuildSpecificArea(
        ::Bounds const& bounds,
        bool,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)>
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ChunkViewSource const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ChunkViewSource const& otherChunkViewSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ChunkSource&, ::ChunkSource::LoadMode);
#else // @header-generator platform
    MCAPI void* $ctor(::ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);

#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getExistingChunk(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Random&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    MCFOLD ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWithinWorldLimit(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI bool $isWithinWorldLimit(::ChunkPos const& cp) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLevelChunk(std::shared_ptr<LevelChunk>);
#else // @header-generator platform
    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    $_tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
