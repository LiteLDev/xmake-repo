#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/ITickingAreaView.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkBuildOrderPolicyBase;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class Level;
class LevelChunk;
class Random;
struct Bounds;
struct DimensionType;
struct Tick;
namespace LevelChunkTicking { struct Registry; }
// clang-format on

class TickingAreaView : public ::ITickingAreaView {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mTickingArea;
    ::ll::TypedStorage<4, 4, uint>                              mPolicyHandle;
    ::ll::TypedStorage<1, 1, bool>                              mInfluenceDirty;
    ::ll::TypedStorage<1, 1, bool>                              mDoneLoading;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>> mTickingArea;
    ::ll::TypedStorage<4, 4, uint>                                  mPolicyHandle;
    ::ll::TypedStorage<1, 1, bool>                                  mInfluenceDirty;
    ::ll::TypedStorage<1, 1, bool>                                  mDoneLoading;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaView();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TickingAreaView();
#else // @header-generator platform
    virtual ~TickingAreaView() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::Bounds const&, bool);
#else // @header-generator platform
    virtual void init(::Bounds const& bounds, bool isCircle) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::Tick const&, ::BlockSource&, bool, bool);
#else // @header-generator platform
    virtual void tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickSeasons(::BlockSource&, ::Random&);
#else // @header-generator platform
    virtual void tickSeasons(::BlockSource& region, ::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DimensionType getDimensionId() const;
#else // @header-generator platform
    virtual ::DimensionType getDimensionId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bounds const getBoundsCopy() const;
#else // @header-generator platform
    virtual ::Bounds const getBoundsCopy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCircle() const;
#else // @header-generator platform
    virtual bool isCircle() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDoneLoading() const;
#else // @header-generator platform
    virtual bool isDoneLoading() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkInitialLoadDone(::Tick);
#else // @header-generator platform
    virtual bool checkInitialLoadDone(::Tick currentLevelTick) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const;
#else // @header-generator platform
    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void move(::Bounds const&);
#else // @header-generator platform
    virtual void move(::Bounds const& bounds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkViewSource> createChildSource();
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkViewSource> createChildSource() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getAvailableChunk(::ChunkPos const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getAvailableChunk(::ChunkPos const& cp) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tickChunk(::Tick const&, ::BlockSource&, ::Level&, ::ChunkPos const&, ::LevelChunkTicking::Registry*);
#else // @header-generator platform
    MCAPI explicit TickingAreaView(::ChunkSource& parent);

    MCAPI bool _tickChunk(
        ::Tick const&                  currentTick,
        ::BlockSource&                 region,
        ::Level&                       level,
        ::ChunkPos const&              cp,
        ::LevelChunkTicking::Registry* registry
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ChunkSource& parent);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(::Bounds const&, bool);
#else // @header-generator platform
    MCAPI void $init(::Bounds const& bounds, bool isCircle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::Tick const&, ::BlockSource&, bool, bool);
#else // @header-generator platform
    MCAPI void $tick(::Tick const& currentTick, ::BlockSource& region, bool preload, bool randomize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tickSeasons(::BlockSource&, ::Random&);
#else // @header-generator platform
    MCAPI void $tickSeasons(::BlockSource& region, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionType $getDimensionId() const;
#else // @header-generator platform
    MCAPI ::DimensionType $getDimensionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bounds const $getBoundsCopy() const;
#else // @header-generator platform
    MCAPI ::Bounds const $getBoundsCopy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCircle() const;
#else // @header-generator platform
    MCAPI bool $isCircle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDoneLoading() const;
#else // @header-generator platform
    MCAPI bool $isDoneLoading() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkInitialLoadDone(::Tick);
#else // @header-generator platform
    MCAPI bool $checkInitialLoadDone(::Tick currentLevelTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const;
#else // @header-generator platform
    MCAPI bool $checkLoadedChunkNeighborsDone(::BlockSource const& region, bool useDoneLoading) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $move(::Bounds const&);
#else // @header-generator platform
    MCAPI void $move(::Bounds const& bounds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkViewSource> $createChildSource();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ChunkViewSource> $createChildSource();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getAvailableChunk(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk> $getAvailableChunk(::ChunkPos const& cp);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
