#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraInstructionOptions {

struct SplineInstruction {
public:
    // SplineInstruction inner types declare
    // clang-format off
    struct SplineProgressOption;
    struct SplineRotationOption;
    // clang-format on

    // SplineInstruction inner types define
    struct SplineProgressOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mProgressKeyFrameValue;
        ::ll::TypedStorage<4, 4, float>        mProgressKeyFrameTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mProgressKeyFramesEasingFunc;
        // NOLINTEND
    };

    struct SplineRotationOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>      mRotationKeyFrameValue;
        ::ll::TypedStorage<4, 4, float>        mRotationKeyFrameTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mRotationKeyFramesEasingFunc;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mSplineIdentifier;
    ::ll::TypedStorage<4, 4, float> mTotalTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                  mSplineIdentifier;
    ::ll::TypedStorage<4, 4, float>                           mTotalTime;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType> mCurveType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mLoadFromJson;
    ::ll::TypedStorage<8, 24, std::vector<Vec3>> mCurve;
    ::ll::TypedStorage<8, 24, std::vector<CameraInstructionOptions::SplineInstruction::SplineProgressOption>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, std::vector<CameraInstructionOptions::SplineInstruction::SplineRotationOption>> mSplineRotationOption;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mLoadFromJson;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>          mCurve;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraInstructionOptions::SplineInstruction::SplineProgressOption>>
        mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraInstructionOptions::SplineInstruction::SplineRotationOption>>
        mSplineRotationOption;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    SplineInstruction(SplineInstruction const&);
#else // @header-generator platform
    SplineInstruction();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraInstructionOptions::SplineInstruction&
#else // @header-generator platform
    MCAPI SplineInstruction(::CameraInstructionOptions::SplineInstruction const&);

    MCAPI ::CameraInstructionOptions::SplineInstruction& operator=(::CameraInstructionOptions::SplineInstruction&&);

    MCAPI ::CameraInstructionOptions::SplineInstruction&
#endif // @header-generator platform
    operator=(::CameraInstructionOptions::SplineInstruction const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::CameraInstructionOptions::SplineInstruction const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::CameraInstructionOptions::SplineInstruction const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SplineInstruction();
#else // @header-generator platform
    MCAPI ~SplineInstruction();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI void* $ctor(::CameraInstructionOptions::SplineInstruction const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraInstructionOptions
