#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class PlaySoundCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mSound;
    ::ll::UntypedStorage<8, 200>                      mTargets;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat> mPosition;
    ::ll::TypedStorage<4, 4, float>                   mVolume;
    ::ll::TypedStorage<4, 4, float>                   mPitch;
    ::ll::TypedStorage<4, 4, float>                   mMinVolume;
    ::ll::TypedStorage<1, 1, bool>                    mPositionSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaySoundCommand();

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
