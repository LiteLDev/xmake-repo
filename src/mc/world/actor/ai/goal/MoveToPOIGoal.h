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
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
class POIInstance;
class Path;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::POIType>             mPOIType;
    ::ll::TypedStorage<4, 24, ::AABB>               mPOIBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                  mUsingBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                  mRequireSameY;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::POIType>                 mPOIType;
    ::ll::TypedStorage<4, 24, ::AABB>                   mPOIBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                      mUsingBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                      mRequireSameY;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MoveToPOIGoal();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MoveToPOIGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual void _moveToBlock() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _moveToBlock();
#else // @header-generator platform
    virtual ::Vec3 _getTargetPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 _getTargetPosition() const;

    virtual std::weak_ptr<POIInstance> _getOwnedPOI(::POIType) const;
#else // @header-generator platform
    virtual ::std::weak_ptr<::POIInstance> _getOwnedPOI(::POIType type) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MoveToPOIGoal(::Mob&, ::POIType);
#else // @header-generator platform
    MCAPI bool _canReachPOI(::Vec3 const& pos, float const radiusSqr, bool usingBoundingBox);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canReachPOI(::Vec3 const&, float const, bool);
#else // @header-generator platform
    MCAPI void _updatePOIBooking();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool getPOI(::POIType type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_moveToBlock();
#else // @header-generator platform
    MCAPI void $_moveToBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $_getTargetPosition() const;
#else // @header-generator platform
    MCAPI ::Vec3 $_getTargetPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<POIInstance> $_getOwnedPOI(::POIType) const;
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
