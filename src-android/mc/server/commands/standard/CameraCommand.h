#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class CameraPresets;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Experiments;
class Player;
struct CameraInstruction;
struct ServerCameraStatesComponent;
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

class CameraCommand : public ::Command {
public:
    // CameraCommand inner types define
    enum class CameraCommandOption : uchar {
        None             = 0,
        Set              = 1,
        Ease             = 2,
        Pos              = 3,
        Rot              = 4,
        FovSet           = 5,
        FovClear         = 6,
        Facing           = 7,
        AttachToEntity   = 8,
        DetachFromEntity = 9,
        PlaySpline       = 10,
        TargetEntity     = 11,
        TargetOffset     = 12,
        RemoveTarget     = 13,
        ViewOffset       = 14,
        EntityOffset     = 15,
        Default          = 16,
        Clear            = 17,
        Fade             = 18,
        Time             = 19,
        Color            = 20,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                                   mPlayerTargets;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mCommandMode;
    ::ll::TypedStorage<8, 24, std::string>                         mCameraPresetName;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mEasingOption;
    ::ll::TypedStorage<4, 4, ::EasingType>                         mEasingType;
    ::ll::TypedStorage<4, 4, float>                                mEasingTime;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mPosOption;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPos;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mRotOption;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mRotX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mRotY;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mFacingOption;
    ::ll::UntypedStorage<8, 200>                                   mFacingEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mDefaultOption;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mViewOffsetOption;
    ::ll::TypedStorage<4, 4, float>                                mViewOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mViewOffsetY;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mEntityOffsetOption;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetY;
    ::ll::TypedStorage<4, 4, float>                                mEntityOffsetZ;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mAttachOption;
    ::ll::UntypedStorage<8, 200>                                   mAttachToEntity;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTargetEntityOption;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTargetOffsetOption;
    ::ll::UntypedStorage<8, 200>                                   mTargetEntity;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetX;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetY;
    ::ll::TypedStorage<4, 4, float>                                mTargetCenterOffsetZ;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mTimeOption;
    ::ll::TypedStorage<4, 4, float>                                mFadeInSeconds;
    ::ll::TypedStorage<4, 4, float>                                mHoldSeconds;
    ::ll::TypedStorage<4, 4, float>                                mFadeOutSeconds;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mColorOption;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorR;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorG;
    ::ll::TypedStorage<4, 4, int>                                  mFadeColorB;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mFovOption;
    ::ll::TypedStorage<4, 4, ::EasingType>                         mFovEasingType;
    ::ll::TypedStorage<4, 4, float>                                mFieldOfView;
    ::ll::TypedStorage<4, 4, float>                                mFovEasingTime;
    ::ll::TypedStorage<1, 1, ::CameraCommand::CameraCommandOption> mSplineOption;
    ::ll::TypedStorage<8, 24, std::string>                         mSplineName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    forEachSelectedPlayersCameraStates(::CommandOrigin const&, std::function<void(ServerCameraStatesComponent&)>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    resolveInheritance(std::string&, std::string const&, std::vector<SharedTypes::v1_21_90::CameraPreset> const&);

    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ENUM_OPTION_ATTACH_TO_ENTITY();

    MCNAPI static char const*& ENUM_OPTION_CLEAR();

    MCNAPI static char const*& ENUM_OPTION_COLOR();

    MCNAPI static char const*& ENUM_OPTION_DEFAULT();

    MCNAPI static char const*& ENUM_OPTION_DETACH_FROM_ENTITY();

    MCNAPI static char const*& ENUM_OPTION_EASE();

    MCNAPI static char const*& ENUM_OPTION_ENTITY_OFFSET();

    MCNAPI static char const*& ENUM_OPTION_FACING();

    MCNAPI static char const*& ENUM_OPTION_FADE();

    MCNAPI static char const*& ENUM_OPTION_FOV();

    MCNAPI static char const*& ENUM_OPTION_FOV_CLEAR();

    MCNAPI static char const*& ENUM_OPTION_POS();

    MCNAPI static char const*& ENUM_OPTION_ROT();

    MCNAPI static char const*& ENUM_OPTION_SET();

    MCNAPI static char const*& ENUM_OPTION_SPLINE();

    MCNAPI static char const*& ENUM_OPTION_TARGET();

    MCNAPI static char const*& ENUM_OPTION_TARGET_OFFSET();

    MCNAPI static char const*& ENUM_OPTION_TARGET_REMOVE();

    MCNAPI static char const*& ENUM_OPTION_TIME();

    MCNAPI static char const*& ENUM_OPTION_VIEW_OFFSET();

    MCNAPI static char const*& OPTION_ATTACH_TO_ENTITY();

    MCNAPI static char const*& OPTION_CLEAR();

    MCNAPI static char const*& OPTION_COLOR();

    MCNAPI static char const*& OPTION_DEFAULT();

    MCNAPI static char const*& OPTION_DETACH_FROM_ENTITY();

    MCNAPI static char const*& OPTION_EASE();

    MCNAPI static char const*& OPTION_ENTITY_OFFSET();

    MCNAPI static char const*& OPTION_FACING();

    MCNAPI static char const*& OPTION_FADE();

    MCNAPI static char const*& OPTION_FOV();

    MCNAPI static char const*& OPTION_FOV_CLEAR();

    MCNAPI static char const*& OPTION_POS();

    MCNAPI static char const*& OPTION_ROT();

    MCNAPI static char const*& OPTION_SET();

    MCNAPI static char const*& OPTION_SPLINE();

    MCNAPI static char const*& OPTION_TARGET();

    MCNAPI static char const*& OPTION_TARGET_OFFSET();

    MCNAPI static char const*& OPTION_TARGET_REMOVE();

    MCNAPI static char const*& OPTION_TIME();

    MCNAPI static char const*& OPTION_VIEW_OFFSET();

    MCNAPI static ::BaseGameVersion const& REMOVE_IGNORE_STARTING_VALUE_COMPONENT_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
