#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class LabTableReaction;
// clang-format on

class TerrainBurstReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     mData;
    ::ll::TypedStorage<4, 12, ::Vec3> mDims;
    ::ll::TypedStorage<4, 12, ::Vec3> mDirRange;
    ::ll::TypedStorage<4, 4, int>     mCount;
    ::ll::TypedStorage<1, 1, bool>    mDirOneWay;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainBurstReactionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TerrainBurstReactionComponent();

    virtual void _onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
