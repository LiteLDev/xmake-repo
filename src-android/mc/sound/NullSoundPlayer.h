#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundPauseSource.h"
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundItem;
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSoundPlayer();

    virtual ulong play(::PlaySoundOptions);

    virtual ulong play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>);

    virtual ulong playUI(std::string const&, float, float);

    virtual void playMusic(std::string const&, float);

    virtual void playMusic(std::string const&, float, uint&);

    virtual bool isLoadingMusic() const;

    virtual bool isPlayingMusicEvent(std::string const&) const;

    virtual bool isPlayingMusic(::Core::PathView) const;

    virtual void fadeToStopMusic(float);

    virtual void setMusicCommandVolumeMultiplier(float);

    virtual void fadeOut(ulong, float);

    virtual void stopMusic();

    virtual void stop(::ServerSoundHandle);

    virtual void stop(ulong);

    virtual void stop(std::string const&);

    virtual void setVolume(::ServerSoundHandle, float);

    virtual void setPitch(::ServerSoundHandle, float);

    virtual void fade(::ServerSoundHandle, float, float);

    virtual void setPlaybackPosition(::ServerSoundHandle, float);

    virtual void pause(::ServerSoundHandle, ::SoundPauseSource);

    virtual void resume(::ServerSoundHandle, ::SoundPauseSource);

    virtual void stopAllSounds();

    virtual void pauseAllPlayingSounds(::SoundPauseSource);

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

    virtual void pauseMusic(bool);

    virtual ::Core::PathBuffer<std::string> const& getCurrentlyPlayingMusicPath();

    virtual bool getItem(std::string const&, ::Core::PathView, ::SoundItem&) const;

    virtual ulong registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float);

    virtual void unregisterLoop(ulong, bool);

    virtual std::optional<std::string> getSubtitle(std::string const&) const;

    virtual bool isPlayingSound(::ServerSoundHandle) const;

    virtual bool isPlayingSound(::Core::Path const&) const;

    virtual bool isPlayingSound(ulong) const;

    virtual ulong playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&);

    virtual std::optional<PlayingSoundAttributes> tryGetPlayingSoundAttributes(ulong) const;

    virtual std::optional<LoopingSoundAttributes> tryGetLoopingSoundAttributes(ulong) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $play(::PlaySoundOptions);

    MCNAPI ulong $play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>);

    MCNAPI ulong $playUI(std::string const&, float, float);

    MCNAPI void $playMusic(std::string const&, float);

    MCNAPI void $playMusic(std::string const&, float, uint&);

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI bool $isPlayingMusicEvent(std::string const&) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView) const;

    MCNAPI void $fadeToStopMusic(float);

    MCNAPI void $setMusicCommandVolumeMultiplier(float);

    MCNAPI void $fadeOut(ulong, float);

    MCNAPI void $stopMusic();

    MCNAPI void $stop(::ServerSoundHandle);

    MCNAPI void $stop(ulong);

    MCNAPI void $stop(std::string const&);

    MCNAPI void $setVolume(::ServerSoundHandle, float);

    MCNAPI void $setPitch(::ServerSoundHandle, float);

    MCNAPI void $fade(::ServerSoundHandle, float, float);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle, float);

    MCNAPI void $pause(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $resume(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

    MCNAPI void $pauseMusic(bool);

    MCNAPI ::Core::PathBuffer<std::string> const& $getCurrentlyPlayingMusicPath();

    MCNAPI bool $getItem(std::string const&, ::Core::PathView, ::SoundItem&) const;

    MCNAPI ulong $registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float);

    MCNAPI void $unregisterLoop(ulong, bool);

    MCNAPI std::optional<std::string> $getSubtitle(std::string const&) const;

    MCNAPI bool $isPlayingSound(::ServerSoundHandle) const;

    MCNAPI bool $isPlayingSound(::Core::Path const&) const;

    MCNAPI bool $isPlayingSound(ulong) const;

    MCNAPI ulong $playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&);

    MCNAPI std::optional<PlayingSoundAttributes> $tryGetPlayingSoundAttributes(ulong) const;

    MCNAPI std::optional<LoopingSoundAttributes> $tryGetLoopingSoundAttributes(ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
