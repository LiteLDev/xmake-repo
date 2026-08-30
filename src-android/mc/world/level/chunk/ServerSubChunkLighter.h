#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ISubChunkLighter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
struct SubChunkLightUpdate;
// clang-format on

class ServerSubChunkLighter : public ::ISubChunkLighter {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerSubChunkLighter();

    virtual std::vector<BlockPos> relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const;

    virtual bool isDeferredEnabled() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<BlockPos>
           $relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const;

    MCNAPI bool $isDeferredEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
