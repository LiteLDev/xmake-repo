#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraInstructionOptions {

struct FadeInstruction {
public:
    // FadeInstruction inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct TimeOption;
#else // @header-generator platform
#endif // @header-generator platform
    struct ColorOption;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TimeOption;
#endif // @header-generator platform
    // clang-format on

    // FadeInstruction inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct ColorOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRed;
        ::ll::TypedStorage<4, 4, float> mGreen;
        ::ll::TypedStorage<4, 4, float> mBlue;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TimeOption {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::CameraInstructionOptions::FadeInstruction::ColorOption const&) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, float> mFadeInTime;
        ::ll::TypedStorage<4, 4, float> mHoldTime;
        ::ll::TypedStorage<4, 4, float> mFadeOutTime;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::FadeInstruction::TimeOption>>  mTime;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::FadeInstruction::ColorOption>> mColor;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraInstructionOptions
