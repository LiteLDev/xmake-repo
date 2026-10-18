#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/PortalAxis.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class PortalRecord;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PortalShape();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getDistanceUntilEdge(::BlockPos const&, ::Facing::Name, ::BlockSource const&) const;
#else // @header-generator platform
    MCAPI void createPortalBlocks(::WorldChangeTransaction& transaction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void createPortalBlocks(::WorldChangeTransaction&) const;
#else // @header-generator platform
    MCAPI void evaluate(::BlockPos const& originalPosition, ::BlockSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PortalRecord createRecord() const;
#else // @header-generator platform
    MCAPI void removePortalBlocks(::WorldChangeTransaction& transaction, ::BlockPos const& firstPortalPosition) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void evaluate(::BlockPos const&, ::BlockSource const&);
#else // @header-generator platform
    MCAPI void updateNeighboringBlocks(::BlockSource& source, ::Vec3 const& perpendicularAxis) const;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getNumberOfPortalBlocks() const;

    MCNAPI bool isFilled() const;

    MCNAPI bool isValid() const;

    MCNAPI void removePortalBlocks(::WorldChangeTransaction&, ::BlockPos const&) const;

    MCNAPI void setAxis(::PortalAxis);

    MCNAPI void updateNeighboringBlocks(::BlockSource&, ::Vec3 const&) const;
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int
    _getDistanceUntilEdge(::BlockPos const& pos, ::Facing::Name direction, ::BlockSource const& source);
#endif // @header-generator platform
    // NOLINTEND
};
