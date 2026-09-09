#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct SetInstruction {
public:
    // SetInstruction inner types declare
    // clang-format off
    struct EaseOption;
    struct PosOption;
    struct RotOption;
    struct FacingOption;
    struct ViewOffsetOption;
    struct EntityOffsetOption;
    // clang-format on

    // SetInstruction inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        ::ll::TypedStorage<4, 4, float>        mEasingTime;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::EaseOption const&) const;
        // NOLINTEND
    };

    struct PosOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::PosOption const&) const;
        // NOLINTEND
    };

    struct RotOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::RotOption const&) const;
        // NOLINTEND
    };

    struct FacingOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mFacingPos;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::FacingOption const&) const;
        // NOLINTEND
    };

    struct ViewOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mViewOffsetX;
        ::ll::TypedStorage<4, 4, float> mViewOffsetY;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::ViewOffsetOption const&) const;
        // NOLINTEND
    };

    struct EntityOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mEntityOffsetX;
        ::ll::TypedStorage<4, 4, float> mEntityOffsetY;
        ::ll::TypedStorage<4, 4, float> mEntityOffsetZ;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::EntityOffsetOption const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mPresetIndex;
    ::ll::TypedStorage<4, 12, std::optional<CameraInstructionOptions::SetInstruction::EaseOption>> mEase;
    ::ll::TypedStorage<4, 16, std::optional<CameraInstructionOptions::SetInstruction::PosOption>> mPos;
    ::ll::TypedStorage<4, 12, std::optional<CameraInstructionOptions::SetInstruction::RotOption>> mRot;
    ::ll::TypedStorage<4, 16, std::optional<CameraInstructionOptions::SetInstruction::FacingOption>> mFacing;
    ::ll::TypedStorage<4, 12, std::optional<CameraInstructionOptions::SetInstruction::ViewOffsetOption>> mViewOffset;
    ::ll::TypedStorage<4, 16, std::optional<CameraInstructionOptions::SetInstruction::EntityOffsetOption>> mEntityOffset;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mDefault;
    ::ll::TypedStorage<1, 1, bool> mRemoveIgnoreStartingValuesComponent;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
