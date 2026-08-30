#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class POIInstance;
class Path;
class Vec3;
struct GoalId;
// clang-format on

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::POIType>             mPOIType;
    ::ll::TypedStorage<4, 24, ::AABB>               mPOIBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                  mUsingBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                  mRequireSameY;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToPOIGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToPOIGoal();

    virtual bool canUse();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual void _moveToBlock();

    virtual ::Vec3 _getTargetPosition() const;

    virtual std::weak_ptr<POIInstance> _getOwnedPOI(::POIType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveToPOIGoal(::Mob&, ::POIType);

    MCNAPI bool _canReachPOI(::Vec3 const&, float const, bool);

    MCNAPI void _updatePOIBooking();

    MCNAPI bool getPOI(::POIType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, ::POIType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI void $_moveToBlock();

    MCNAPI ::Vec3 $_getTargetPosition() const;

    MCNAPI std::weak_ptr<POIInstance> $_getOwnedPOI(::POIType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
