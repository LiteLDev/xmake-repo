#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/server/commands/Command.h"
#include "mc/sound/MusicRepeatMode.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class CompoundTag;
// clang-format on

class MusicCommand : public ::Command {
public:
    // MusicCommand inner types declare
    // clang-format off
    struct CommandData;
    // clang-format on

    // MusicCommand inner types define
    enum class Action : uchar {
        None   = 0,
        Queue  = 1,
        Play   = 2,
        Stop   = 3,
        Volume = 4,
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MusicCommand::Action> mAction;
        ::ll::TypedStorage<8, 24, std::string>           mTrackName;
        ::ll::TypedStorage<4, 4, float>                  mVolume;
        ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool decodeMusicCommand(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MusicCommand::Action> mAction;
    ::ll::TypedStorage<8, 24, std::string>           mTrackName;
    ::ll::TypedStorage<4, 4, float>                  mVolume;
    ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MusicCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleActionQueueOrPlay(::CompoundTag&, ::CommandOutput&) const;

    MCNAPI void _handleActionStop(::CompoundTag&, ::CommandOutput&) const;

    MCNAPI void _handleActionVolume(::CompoundTag&, ::CommandOutput&) const;
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
