#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeAction.h"
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CameraShakeCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CameraShakeAction> mShakeAction;
    ::ll::TypedStorage<1, 1, ::CameraShakeType>   mShakeType;
    ::ll::UntypedStorage<8, 200>                  mTargets;
    ::ll::TypedStorage<4, 4, float>               mIntensity;
    ::ll::TypedStorage<4, 4, float>               mSeconds;
    ::ll::TypedStorage<1, 1, bool>                mTargetsSelectionIsSelector;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraShakeCommand();

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
