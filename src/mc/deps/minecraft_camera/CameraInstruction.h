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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // CameraInstruction inner types define
    using AttachToEntityInstruction = ::CameraInstructionOptions::AttachToEntityInstruction;

    using FadeInstruction = ::CameraInstructionOptions::FadeInstruction;

    using FovInstruction = ::CameraInstructionOptions::FovInstruction;

    using SetInstruction = ::CameraInstructionOptions::SetInstruction;

    using SplineInstruction = ::CameraInstructionOptions::SplineInstruction;

    using TargetInstruction = ::CameraInstructionOptions::TargetInstruction;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::optional<CameraInstructionOptions::AttachToEntityInstruction>> mAttachToEntity;
    ::ll::TypedStorage<4, 36, std::optional<CameraInstructionOptions::FadeInstruction>>           mFade;
    ::ll::TypedStorage<4, 20, std::optional<CameraInstructionOptions::FovInstruction>>            mFieldOfView;
    ::ll::TypedStorage<4, 96, std::optional<CameraInstructionOptions::SetInstruction>>            mSet;
    ::ll::TypedStorage<8, 112, std::optional<CameraInstructionOptions::SplineInstruction>>        mSpline;
    ::ll::TypedStorage<8, 32, std::optional<CameraInstructionOptions::TargetInstruction>>         mTarget;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mClear;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mDetachFromEntity;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mRemoveTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::optional<::CameraInstructionOptions::AttachToEntityInstruction>> mAttachToEntity;
    ::ll::TypedStorage<4, 36, ::std::optional<::CameraInstructionOptions::FadeInstruction>>           mFade;
    ::ll::TypedStorage<4, 20, ::std::optional<::CameraInstructionOptions::FovInstruction>>            mFieldOfView;
    ::ll::TypedStorage<4, 96, ::std::optional<::CameraInstructionOptions::SetInstruction>>            mSet;
    ::ll::TypedStorage<8, 120, ::std::optional<::CameraInstructionOptions::SplineInstruction>>        mSpline;
    ::ll::TypedStorage<8, 32, ::std::optional<::CameraInstructionOptions::TargetInstruction>>         mTarget;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mClear;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mDetachFromEntity;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                   mRemoveTarget;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraInstruction(::CameraInstruction&&);

    MCNAPI bool operator==(::CameraInstruction const&) const;

    MCNAPI ~CameraInstruction();
#else // @header-generator platform
    MCAPI bool operator==(::CameraInstruction const& other) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
