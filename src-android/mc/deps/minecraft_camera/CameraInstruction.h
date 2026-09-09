#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_instruction_options/AttachToEntityInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/FadeInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/FovInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/SetInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/SplineInstruction.h"
#include "mc/deps/minecraft_camera/camera_instruction_options/TargetInstruction.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::optional<CameraInstructionOptions::AttachToEntityInstruction>> mAttachToEntity;
    ::ll::TypedStorage<4, 36, std::optional<CameraInstructionOptions::FadeInstruction>>           mFade;
    ::ll::TypedStorage<4, 20, std::optional<CameraInstructionOptions::FovInstruction>>            mFieldOfView;
    ::ll::TypedStorage<4, 96, std::optional<CameraInstructionOptions::SetInstruction>>            mSet;
    ::ll::TypedStorage<8, 112, std::optional<CameraInstructionOptions::SplineInstruction>>        mSpline;
    ::ll::TypedStorage<8, 32, std::optional<CameraInstructionOptions::TargetInstruction>>         mTarget;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mClear;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mDetachFromEntity;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mRemoveTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraInstruction(::CameraInstruction&&);

    MCNAPI bool operator==(::CameraInstruction const&) const;

    MCNAPI ~CameraInstruction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraInstruction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
