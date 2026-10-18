#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class ChunkViewSource;
class LevelChunk;
class Random;
struct Bounds;
struct DimensionType;
struct Tick;
// clang-format on

class ITickingAreaView {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickingAreaView() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::Bounds const&, bool) = 0;
#else // @header-generator platform
    virtual void init(::Bounds const& bounds, bool isCircle) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::Tick const&, ::BlockSource&, bool, bool) = 0;
#else // @header-generator platform
    virtual void tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickSeasons(::BlockSource&, ::Random&) = 0;
#else // @header-generator platform
    virtual void tickSeasons(::BlockSource& region, ::Random& random) = 0;
#endif // @header-generator platform

    virtual ::DimensionType getDimensionId() const = 0;

    virtual ::Bounds const getBoundsCopy() const = 0;

    virtual bool isCircle() const = 0;

    virtual bool isDoneLoading() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkInitialLoadDone(::Tick) = 0;
#else // @header-generator platform
    virtual bool checkInitialLoadDone(::Tick currentLevelTick) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const = 0;
#else // @header-generator platform
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void move(::Bounds const&) = 0;
#else // @header-generator platform
    virtual void move(::Bounds const& bounds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkViewSource> createChildSource() = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getAvailableChunk(::ChunkPos const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
