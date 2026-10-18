#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace CameraInstructionOptions {

struct SetInstruction {
public:
    // SetInstruction inner types declare
    // clang-format off
    struct EaseOption;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct EntityOffsetOption;
    struct FacingOption;
#endif // @header-generator platform
    struct PosOption;
    struct RotOption;
#if defined(LL_PLAT_A) // @header-generator platform
    struct FacingOption;
#else // @header-generator platform
#endif // @header-generator platform
    struct ViewOffsetOption;
#if defined(LL_PLAT_A) // @header-generator platform
    struct EntityOffsetOption;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // SetInstruction inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        ::ll::TypedStorage<4, 4, float>        mEasingTime;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct FacingOption {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction::EntityOffsetOption const&) const;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Vec3> mFacingPos;
        // NOLINTEND
    };

    struct PosOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        // NOLINTEND
    };

    struct RotOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        // NOLINTEND
    };

    struct ViewOffsetOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mViewOffsetX;
        ::ll::TypedStorage<4, 4, float> mViewOffsetY;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                                       mPresetIndex;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::EaseOption>>   mEase;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::PosOption>>    mPos;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::RotOption>>    mRot;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::FacingOption>> mFacing;
    ::ll::TypedStorage<4, 12, ::std::optional<::CameraInstructionOptions::SetInstruction::ViewOffsetOption>>
        mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::CameraInstructionOptions::SetInstruction::EntityOffsetOption>>
                                                    mEntityOffset;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mDefault;
    ::ll::TypedStorage<1, 1, bool>                  mRemoveIgnoreStartingValuesComponent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::CameraInstructionOptions::SetInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI bool operator==(::CameraInstructionOptions::SetInstruction const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraInstructionOptions
