#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraAimAssistCommand : public ::Command {
public:
    // CameraAimAssistCommand inner types define
    enum class TargetMode : uchar {
        Distance = 0,
        Angle    = 1,
    };

    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                                   mPlayerTargets;
    ::ll::TypedStorage<8, 24, std::string>                         mPresetId;
    ::ll::TypedStorage<4, 4, float>                                mViewAngleX;
    ::ll::TypedStorage<4, 4, float>                                mViewAngleY;
    ::ll::TypedStorage<4, 4, float>                                mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistCommand::Action>     mAction;
    ::ll::TypedStorage<1, 1, bool>                                 mShowDebugRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraAimAssistCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
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
