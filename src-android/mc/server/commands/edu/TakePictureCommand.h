#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class TakePictureCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                 mCameraTargets;
    ::ll::UntypedStorage<8, 200>                 mPlayerTargets;
    ::ll::TypedStorage<4, 16, ::CommandPosition> mCameraSpawnPos;
    ::ll::TypedStorage<1, 1, bool>               mCameraPositionProvided;
    ::ll::TypedStorage<1, 1, bool>               mCameraTargetProvided;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TakePictureCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
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
