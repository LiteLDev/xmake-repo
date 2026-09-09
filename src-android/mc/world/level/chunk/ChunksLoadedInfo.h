#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ChunkViewSource;
class Dimension;
class ITickingAreaView;
class Player;
struct Bounds;
struct Tick;
// clang-format on

struct ChunksLoadedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChunksLoadedStatus> mStatus;
    ::ll::TypedStorage<8, 8, ::Player*>            mPlayer;
    ::ll::TypedStorage<8, 8, ::ITickingAreaView*>  mTickingAreaView;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunksLoadedInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ChunkViewSource> getChunkViewSource() const;

    MCNAPI ::ChunksLoadedStatus getChunksLoadedStatus() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunksLoadedStatus
    areAllChunksLoadedAndTicking(::Dimension const&, ::ChunkSource&, ::Bounds const&, bool const, ::Tick, bool);

    MCNAPI static ::ChunksLoadedInfo calculateChunksLoadedInfo(
        ::Dimension const&,
        ::ChunkSource&,
        ::Bounds const&,
        bool const,
        ::Tick,
        bool,
        bool,
        bool
    );
    // NOLINTEND
};
