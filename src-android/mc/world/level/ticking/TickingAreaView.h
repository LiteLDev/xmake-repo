#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/ITickingAreaView.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkBuildOrderPolicyBase;
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
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mTickingArea;
    ::ll::TypedStorage<4, 4, uint>                              mPolicyHandle;
    ::ll::TypedStorage<1, 1, bool>                              mInfluenceDirty;
    ::ll::TypedStorage<1, 1, bool>                              mDoneLoading;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaView();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingAreaView();

    virtual void init(::Bounds const&, bool);

    virtual void tick(::Tick const&, ::BlockSource&, bool, bool);

    virtual void tickSeasons(::BlockSource&, ::Random&);

    virtual ::DimensionType getDimensionId() const;

    virtual ::Bounds const getBoundsCopy() const;

    virtual bool isCircle() const;

    virtual bool isDoneLoading() const;

    virtual bool checkInitialLoadDone(::Tick);

    virtual bool checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const;

    virtual void move(::Bounds const&);

    virtual std::unique_ptr<ChunkViewSource> createChildSource();

    virtual std::shared_ptr<LevelChunk> getAvailableChunk(::ChunkPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _tickChunk(::Tick const&, ::BlockSource&, ::Level&, ::ChunkPos const&, ::LevelChunkTicking::Registry*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Bounds const&, bool);

    MCNAPI void $tick(::Tick const&, ::BlockSource&, bool, bool);

    MCNAPI void $tickSeasons(::BlockSource&, ::Random&);

    MCNAPI ::DimensionType $getDimensionId() const;

    MCNAPI ::Bounds const $getBoundsCopy() const;

    MCNAPI bool $isCircle() const;

    MCNAPI bool $isDoneLoading() const;

    MCNAPI bool $checkInitialLoadDone(::Tick);

    MCNAPI bool $checkLoadedChunkNeighborsDone(::BlockSource const&, bool) const;

    MCNAPI void $move(::Bounds const&);

    MCNAPI std::unique_ptr<ChunkViewSource> $createChildSource();

    MCNAPI std::shared_ptr<LevelChunk> $getAvailableChunk(::ChunkPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
