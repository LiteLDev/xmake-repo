#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LookControl;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec3;
#endif // @header-generator platform
// clang-format on

class LookControlComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<LookControl>> mLookControl;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mWantedPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mWantedRotation;
    ::ll::TypedStorage<4, 4, float>                        mYMax;
    ::ll::TypedStorage<4, 4, float>                        mXMax;
    ::ll::TypedStorage<1, 1, bool>                         mHasWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                         mHasWantedRotation;
    ::ll::TypedStorage<4, 4, uint>                         mLookAtPositionLockedTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LookControl>> mLookControl;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedRotation;
    ::ll::TypedStorage<4, 4, float>                            mYMax;
    ::ll::TypedStorage<4, 4, float>                            mXMax;
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedRotation;
    ::ll::TypedStorage<4, 4, uint>                             mLookAtPositionLockedTicks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LookControlComponent& operator=(LookControlComponent const&);
    LookControlComponent(LookControlComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getHasWantedPosition() const;

    MCNAPI bool getHasWantedRotation() const;

    MCNAPI ::Vec3 getWantedPosition() const;

    MCNAPI ::Vec3 getWantedRotation() const;

    MCNAPI float getXMax() const;

    MCNAPI float getYMax() const;

    MCNAPI void initialize(::Mob&);

    MCNAPI void lockLookAtPosition(::Vec3 const&, float, float, uint);

    MCNAPI void resetWantedPosition();

    MCNAPI void setHasWantedPosition(bool);

    MCNAPI void setHasWantedRotation(bool);

    MCNAPI void setInternalType(std::unique_ptr<LookControl>);

    MCNAPI void setLookAtPosition(::Actor const*, float, float);

    MCNAPI void setLookAtPosition(::Vec3 const&, float, float);

    MCNAPI void setLookAtRotation(::Vec3 const&, float, float);

    MCNAPI void setYMax(float);

    MCNAPI void updateLookAtPositionLock();

    MCNAPI void updateLookControl(::Mob&);
#else // @header-generator platform
    MCAPI void setLookAtPosition(::Actor const* target, float yMax, float xMax);
#endif // @header-generator platform
    // NOLINTEND
};
