#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/SoundPauseSource.h"
#else // @header-generator platform
#include "mc/deps/audio/SoundPauseSource.h"
#endif // @header-generator platform
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
#if defined(LL_PLAT_A) // @header-generator platform
class SoundItem;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SoundItem;
#endif // @header-generator platform
// clang-format on

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NullSoundPlayer();
#else // @header-generator platform
    virtual uint64
    play(::std::string const&, ::Vec3 const&, float, float, ::std::optional<::ServerSoundHandle>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong play(::PlaySoundOptions);
#else // @header-generator platform
    virtual uint64 play(::PlaySoundOptions) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>);
#else // @header-generator platform
    virtual uint64 playUI(::std::string const&, float, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong playUI(std::string const&, float, float);
#else // @header-generator platform
    virtual ::std::optional<::std::string> getSubtitle(::std::string const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playMusic(std::string const&, float);
#else // @header-generator platform
    virtual void playMusic(::std::string const&, float, uint&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playMusic(std::string const&, float, uint&);
#else // @header-generator platform
    virtual void playMusic(::std::string const&, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLoadingMusic() const;
#else // @header-generator platform
    virtual bool isLoadingMusic() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingMusicEvent(std::string const&) const;
#else // @header-generator platform
    virtual bool isPlayingMusicEvent(::std::string const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingMusic(::Core::PathView) const;
#else // @header-generator platform
    virtual bool isPlayingMusic(::Core::PathView) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fadeToStopMusic(float);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicPath() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMusicCommandVolumeMultiplier(float);
#else // @header-generator platform
    virtual bool getItem(::std::string const&, ::Core::PathView, ::SoundItem&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fadeOut(ulong, float);
#else // @header-generator platform
    virtual void fadeToStopMusic(float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopMusic();
#else // @header-generator platform
    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(::ServerSoundHandle);
#else // @header-generator platform
    virtual void pauseMusic(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(ulong);
#else // @header-generator platform
    virtual void stopMusic() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(std::string const&);
#else // @header-generator platform
    virtual uint64
    registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setVolume(::ServerSoundHandle, float);
#else // @header-generator platform
    virtual void unregisterLoop(uint64, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPitch(::ServerSoundHandle, float);
#else // @header-generator platform
    virtual void stop(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fade(::ServerSoundHandle, float, float);
#else // @header-generator platform
    virtual void stop(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlaybackPosition(::ServerSoundHandle, float);
#else // @header-generator platform
    virtual void stop(::ServerSoundHandle) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pause(::ServerSoundHandle, ::SoundPauseSource);
#else // @header-generator platform
    virtual void setVolume(::ServerSoundHandle, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resume(::ServerSoundHandle, ::SoundPauseSource);
#else // @header-generator platform
    virtual void setPitch(::ServerSoundHandle, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopAllSounds();
#else // @header-generator platform
    virtual void fade(::ServerSoundHandle, float, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pauseAllPlayingSounds(::SoundPauseSource);
#else // @header-generator platform
    virtual void setPlaybackPosition(::ServerSoundHandle, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource);
#else // @header-generator platform
    virtual void pause(::ServerSoundHandle, ::SoundPauseSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pauseMusic(bool);
#else // @header-generator platform
    virtual void resume(::ServerSoundHandle, ::SoundPauseSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getCurrentlyPlayingMusicPath();
#else // @header-generator platform
    virtual void fadeOut(uint64, float) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getItem(std::string const&, ::Core::PathView, ::SoundItem&) const;
#else // @header-generator platform
    virtual void stopAllSounds() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float);
#else // @header-generator platform
    virtual void pauseAllPlayingSounds(::SoundPauseSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterLoop(ulong, bool);
#else // @header-generator platform
    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> getSubtitle(std::string const&) const;
#else // @header-generator platform
    virtual bool isPlayingSound(uint64) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(::ServerSoundHandle) const;
#else // @header-generator platform
    virtual bool isPlayingSound(::Core::Path const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(::Core::Path const&) const;
#else // @header-generator platform
    virtual bool isPlayingSound(::ServerSoundHandle) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(ulong) const;
#else // @header-generator platform
    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&);
#else // @header-generator platform
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<PlayingSoundAttributes> tryGetPlayingSoundAttributes(ulong) const;

    virtual std::optional<LoopingSoundAttributes> tryGetLoopingSoundAttributes(ulong) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $play(::PlaySoundOptions);
#else // @header-generator platform
    MCNAPI uint64 $play(::std::string const&, ::Vec3 const&, float, float, ::std::optional<::ServerSoundHandle>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>);
#else // @header-generator platform
    MCNAPI uint64 $play(::PlaySoundOptions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $playUI(std::string const&, float, float);
#else // @header-generator platform
    MCNAPI uint64 $playUI(::std::string const&, float, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playMusic(std::string const&, float);
#else // @header-generator platform
    MCNAPI ::std::optional<::std::string> $getSubtitle(::std::string const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playMusic(std::string const&, float, uint&);
#else // @header-generator platform
    MCNAPI void $playMusic(::std::string const&, float, uint&);

    MCNAPI void $playMusic(::std::string const&, float);
#endif // @header-generator platform

    MCNAPI bool $isLoadingMusic() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPlayingMusicEvent(std::string const&) const;
#else // @header-generator platform
    MCNAPI bool $isPlayingMusicEvent(::std::string const&) const;
#endif // @header-generator platform

    MCNAPI bool $isPlayingMusic(::Core::PathView) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::Core::PathBuffer<::std::string> const& $getCurrentlyPlayingMusicPath();

    MCNAPI bool $getItem(::std::string const&, ::Core::PathView, ::SoundItem&) const;
#endif // @header-generator platform

    MCNAPI void $fadeToStopMusic(float);

    MCNAPI void $setMusicCommandVolumeMultiplier(float);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fadeOut(ulong, float);
#else // @header-generator platform
    MCNAPI void $pauseMusic(bool);
#endif // @header-generator platform

    MCNAPI void $stopMusic();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(::ServerSoundHandle);
#else // @header-generator platform
    MCNAPI uint64 $registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(ulong);
#else // @header-generator platform
    MCNAPI void $unregisterLoop(uint64, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(std::string const&);
#else // @header-generator platform
    MCNAPI void $stop(::std::string const&);

    MCNAPI void $stop(uint64);

    MCNAPI void $stop(::ServerSoundHandle);
#endif // @header-generator platform

    MCNAPI void $setVolume(::ServerSoundHandle, float);

    MCNAPI void $setPitch(::ServerSoundHandle, float);

    MCNAPI void $fade(::ServerSoundHandle, float, float);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle, float);

    MCNAPI void $pause(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $resume(::ServerSoundHandle, ::SoundPauseSource);

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI void $fadeOut(uint64, float);

#endif // @header-generator platform
    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pauseMusic(bool);

    MCNAPI ::Core::PathBuffer<std::string> const& $getCurrentlyPlayingMusicPath();

    MCNAPI bool $getItem(std::string const&, ::Core::PathView, ::SoundItem&) const;

    MCNAPI ulong $registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float);

    MCNAPI void $unregisterLoop(ulong, bool);

    MCNAPI std::optional<std::string> $getSubtitle(std::string const&) const;

    MCNAPI bool $isPlayingSound(::ServerSoundHandle) const;
#else // @header-generator platform
    MCNAPI bool $isPlayingSound(uint64) const;
#endif // @header-generator platform

    MCNAPI bool $isPlayingSound(::Core::Path const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPlayingSound(ulong) const;
#else // @header-generator platform
    MCNAPI bool $isPlayingSound(::ServerSoundHandle) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&);
#else // @header-generator platform
    MCNAPI uint64 $playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<PlayingSoundAttributes> $tryGetPlayingSoundAttributes(ulong) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<LoopingSoundAttributes> $tryGetLoopingSoundAttributes(ulong) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64) const;
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
