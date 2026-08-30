#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/PortalAxis.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockSource;
class PortalRecord;
class Vec3;
class WorldChangeTransaction;
// clang-format on

class PortalShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PortalAxis>   mAxis;
    ::ll::TypedStorage<1, 1, ::Facing::Name> mRightDir;
    ::ll::TypedStorage<1, 1, ::Facing::Name> mLeftDir;
    ::ll::TypedStorage<4, 4, int>            mNumPortalBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBottomLeft;
    ::ll::TypedStorage<1, 1, bool>           mBottomLeftValid;
    ::ll::TypedStorage<4, 4, int>            mHeight;
    ::ll::TypedStorage<4, 4, int>            mWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    PortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _getDistanceUntilEdge(::BlockPos const&, ::Facing::Name, ::BlockSource const&) const;

    MCNAPI void createPortalBlocks(::WorldChangeTransaction&) const;

    MCNAPI ::PortalRecord createRecord() const;

    MCNAPI void evaluate(::BlockPos const&, ::BlockSource const&);

    MCNAPI int getNumberOfPortalBlocks() const;

    MCNAPI bool isFilled() const;

    MCNAPI bool isValid() const;

    MCNAPI void removePortalBlocks(::WorldChangeTransaction&, ::BlockPos const&) const;

    MCNAPI void setAxis(::PortalAxis);

    MCNAPI void updateNeighboringBlocks(::BlockSource&, ::Vec3 const&) const;
    // NOLINTEND
};
