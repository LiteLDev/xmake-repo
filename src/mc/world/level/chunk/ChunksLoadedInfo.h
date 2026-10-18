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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ChunksLoadedInfo();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkViewSource> getChunkViewSource() const;

    MCNAPI ::ChunksLoadedStatus getChunksLoadedStatus() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ChunkViewSource> getChunkViewSource() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunksLoadedStatus
    areAllChunksLoadedAndTicking(::Dimension const&, ::ChunkSource&, ::Bounds const&, bool const, ::Tick, bool);
#else // @header-generator platform
    MCAPI static ::ChunksLoadedStatus areAllChunksLoadedAndTicking(
        ::Dimension const& dimension,
        ::ChunkSource&     source,
        ::Bounds const&    bounds,
        bool               isCircleArea,
        ::Tick             currentLevelTick,
        bool               allowNonTickingPlayerAndTickingAreaChunks
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunksLoadedInfo calculateChunksLoadedInfo(
        ::Dimension const&,
        ::ChunkSource&,
        ::Bounds const&,
        bool const,
        ::Tick,
        bool,
        bool,
        bool
#else // @header-generator platform
    MCAPI static ::ChunksLoadedInfo calculateChunksLoadedInfo(
        ::Dimension const& dimension,
        ::ChunkSource&     source,
        ::Bounds const&    bounds,
        bool               isCircleArea,
        ::Tick             currentLevelTick,
        bool               allowUnloadedChunks,
        bool               allowNonTickingPlayerAndTickingAreaChunks,
        bool               allowPlayerChunks
#endif // @header-generator platform
    );
    // NOLINTEND
};
