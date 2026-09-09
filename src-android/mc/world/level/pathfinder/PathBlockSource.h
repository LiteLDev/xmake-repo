#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/IPathBlockSource.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CachedChunkBlockSource;
struct ActorPathingData;
// clang-format on

class PathBlockSource : public ::IPathBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                mIsInWater;
    ::ll::TypedStorage<1, 1, bool const>                mIsInLava;
    ::ll::TypedStorage<8, 8, ::CachedChunkBlockSource&> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    PathBlockSource& operator=(PathBlockSource const&);
    PathBlockSource(PathBlockSource const&);
    PathBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PathBlockSource();

    virtual bool isInWater() const;

    virtual bool isInLava() const;

    virtual bool isWaterBlock(::BlockPos const&) const;

    virtual bool isLavaBlock(::BlockPos const&) const;

    virtual bool isSolidBlock(::BlockPos const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWater() const;

    MCNAPI bool $isInLava() const;

    MCNAPI bool $isWaterBlock(::BlockPos const&) const;

    MCNAPI bool $isLavaBlock(::BlockPos const&) const;

    MCNAPI bool $isSolidBlock(::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
