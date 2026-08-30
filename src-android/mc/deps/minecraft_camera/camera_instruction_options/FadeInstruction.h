#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraInstructionOptions {

struct FadeInstruction {
public:
    // FadeInstruction inner types declare
    // clang-format off
    struct TimeOption;
    struct ColorOption;
    // clang-format on

    // FadeInstruction inner types define
    struct TimeOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mFadeInTime;
        ::ll::TypedStorage<4, 4, float> mHoldTime;
        ::ll::TypedStorage<4, 4, float> mFadeOutTime;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::FadeInstruction::TimeOption const&) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

    struct ColorOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRed;
        ::ll::TypedStorage<4, 4, float> mGreen;
        ::ll::TypedStorage<4, 4, float> mBlue;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::CameraInstructionOptions::FadeInstruction::ColorOption const&) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, std::optional<CameraInstructionOptions::FadeInstruction::TimeOption>>  mTime;
    ::ll::TypedStorage<4, 16, std::optional<CameraInstructionOptions::FadeInstruction::ColorOption>> mColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::FadeInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace CameraInstructionOptions
