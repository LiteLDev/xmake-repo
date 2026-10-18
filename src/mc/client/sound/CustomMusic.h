#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/sound/Music.h"
#include "mc/sound/MusicRepeatMode.h"

class CustomMusic : public ::Music {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/sound/Music.h"
#include "mc/sound/MusicRepeatMode.h"

class CustomMusic : public ::Music {
#else // @header-generator platform
class CustomMusic {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CustomMusic inner types declare
    // clang-format off
    struct QueuedMusicItem;
    // clang-format on

    // CustomMusic inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedMusicItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>      mEventName;
        ::ll::TypedStorage<4, 4, float>             mVolume;
        ::ll::TypedStorage<4, 4, float>             mFadeoutSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mPlayMode;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedMusicItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mCurrentPlayMode;
    ::ll::TypedStorage<8, 48, std::queue<CustomMusic::QueuedMusicItem, std::deque<CustomMusic::QueuedMusicItem>>> mMusicQueue;
    ::ll::TypedStorage<1, 1, bool> _mIsActive;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomMusic();

    virtual bool hasTracks() const;

    virtual void nextTrack();

    virtual void setActive(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomMusic();

    MCNAPI void addQueuedMusic(std::string const&, float, float, ::MusicRepeatMode, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasTracks() const;

    MCNAPI void $nextTrack();

    MCNAPI void $setActive(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct QueuedMusicItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>    mEventName;
        ::ll::TypedStorage<4, 4, float>             mVolume;
        ::ll::TypedStorage<4, 4, float>             mFadeoutSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mPlayMode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mCurrentPlayMode;
    ::ll::
        TypedStorage<8, 40, ::std::queue<::CustomMusic::QueuedMusicItem, ::std::deque<::CustomMusic::QueuedMusicItem>>>
                                   mMusicQueue;
    ::ll::TypedStorage<1, 1, bool> _mIsActive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomMusic() /*override*/;

    virtual bool hasTracks() const /*override*/;

    virtual void nextTrack() /*override*/;

    virtual void setActive(bool active) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addQueuedMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode,
        bool                 treatFadeAsDelay
    );

    MCAPI void clearQueuedMusic();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $hasTracks() const;

    MCAPI void $nextTrack();

    MCAPI void $setActive(bool active);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct QueuedMusicItem {};
#endif // @header-generator platform
#endif // @header-generator platform
};
