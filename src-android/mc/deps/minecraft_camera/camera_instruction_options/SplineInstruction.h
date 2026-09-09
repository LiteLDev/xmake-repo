#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mSplineIdentifier;
    ::ll::TypedStorage<4, 4, float> mTotalTime;
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType> mCurveType;
    ::ll::TypedStorage<1, 1, bool> mLoadFromJson;
    ::ll::TypedStorage<8, 24, std::vector<Vec3>> mCurve;
    ::ll::TypedStorage<8, 24, std::vector<CameraInstructionOptions::SplineInstruction::SplineProgressOption>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, std::vector<CameraInstructionOptions::SplineInstruction::SplineRotationOption>> mSplineRotationOption;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SplineInstruction(SplineInstruction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraInstructionOptions::SplineInstruction&
    operator=(::CameraInstructionOptions::SplineInstruction const&);

    MCNAPI bool operator==(::CameraInstructionOptions::SplineInstruction const&) const;

    MCNAPI ~SplineInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraInstructionOptions
