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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>           mTrackName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>         mTrackName;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                  mVolume;
        ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool decodeMusicCommand(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI bool decodeMusicCommand(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MusicCommand::Action> mAction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>           mTrackName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>         mTrackName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                  mVolume;
    ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MusicCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleActionQueueOrPlay(::CompoundTag&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void _handleActionQueueOrPlay(::CompoundTag& data, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleActionStop(::CompoundTag&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void _handleActionStop(::CompoundTag& data, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleActionVolume(::CompoundTag&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void _handleActionVolume(::CompoundTag& data, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
