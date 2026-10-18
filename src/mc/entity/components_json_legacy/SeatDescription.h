#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/molang/ExpressionNode.h"

struct SeatDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>              mPosition;
    ::ll::TypedStorage<4, 4, int>                  mMinSeatCount;
    ::ll::TypedStorage<4, 4, int>                  mMaxSeatCount;
    ::ll::TypedStorage<1, 1, bool>                 mHasSeatRotation;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>    mSeatRotation;
    ::ll::TypedStorage<1, 1, bool>                 mLockPassengerRotation;
    ::ll::TypedStorage<4, 4, float>                mLockPassengerRotationDegrees;
    ::ll::TypedStorage<4, 8, std::optional<float>> mThirdPersonCameraRadiusOverride;
    ::ll::TypedStorage<4, 8, std::optional<float>> mCameraRelaxDistanceSmoothing;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                mPosition;
    ::ll::TypedStorage<4, 4, int>                    mMinSeatCount;
    ::ll::TypedStorage<4, 4, int>                    mMaxSeatCount;
    ::ll::TypedStorage<1, 1, bool>                   mHasSeatRotation;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>      mSeatRotation;
    ::ll::TypedStorage<1, 1, bool>                   mLockPassengerRotation;
    ::ll::TypedStorage<4, 4, float>                  mLockPassengerRotationDegrees;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mThirdPersonCameraRadiusOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mCameraRelaxDistanceSmoothing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SeatDescription(::SeatDescription const&);
#else // @header-generator platform
    MCAPI void addRotationExpressionNode(::ExpressionNode const& node);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRotationExpressionNode(::ExpressionNode const&);
#else // @header-generator platform
    MCAPI bool operator==(::SeatDescription const& seat) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SeatDescription& operator=(::SeatDescription const&);
#else // @header-generator platform
    MCAPI void setCameraRelaxDistanceSmoothing(float const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SeatDescription const&) const;

    MCNAPI void setCameraRelaxDistanceSmoothing(float const&);

    MCNAPI void setThirdPersonCamerRadiusOverride(float const&);

    MCNAPI ~SeatDescription();
#else // @header-generator platform
    MCAPI void setThirdPersonCamerRadiusOverride(float const& value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SeatDescription const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SeatDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::SeatDescription const& EMPTY();
#endif // @header-generator platform
    // NOLINTEND
};
