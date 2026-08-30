#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundPauseSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundPlayerInterface() = default;

    virtual ulong play(::PlaySoundOptions) = 0;

    virtual ulong play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>) = 0;

    virtual ulong playUI(std::string const&, float, float) = 0;

    virtual void playMusic(std::string const&, float) = 0;

    virtual void playMusic(std::string const&, float, uint&) = 0;

    virtual bool isLoadingMusic() const = 0;

    virtual bool isPlayingMusicEvent(std::string const&) const = 0;

    virtual bool isPlayingMusic(::Core::PathView) const = 0;

    virtual void fadeToStopMusic(float) = 0;

    virtual void setMusicCommandVolumeMultiplier(float) = 0;

    virtual void fadeOut(ulong, float) = 0;

    virtual void stopMusic() = 0;

    virtual void stop(::ServerSoundHandle) = 0;

    virtual void stop(ulong) = 0;

    virtual void stop(std::string const&) = 0;

    virtual void setVolume(::ServerSoundHandle, float) = 0;

    virtual void setPitch(::ServerSoundHandle, float) = 0;

    virtual void fade(::ServerSoundHandle, float, float) = 0;

    virtual void setPlaybackPosition(::ServerSoundHandle, float) = 0;

    virtual void pause(::ServerSoundHandle, ::SoundPauseSource) = 0;

    virtual void resume(::ServerSoundHandle, ::SoundPauseSource) = 0;

    virtual void stopAllSounds() = 0;

    virtual void pauseAllPlayingSounds(::SoundPauseSource) = 0;

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource) = 0;

    virtual void pauseMusic(bool) = 0;

    virtual ::Core::PathBuffer<std::string> const& getCurrentlyPlayingMusicPath() = 0;

    virtual bool getItem(std::string const&, ::Core::PathView, ::SoundItem&) const = 0;

    virtual ulong registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float) = 0;

    virtual void unregisterLoop(ulong, bool) = 0;

    virtual std::optional<std::string> getSubtitle(std::string const&) const = 0;

    virtual bool isPlayingSound(::ServerSoundHandle) const = 0;

    virtual bool isPlayingSound(::Core::Path const&) const = 0;

    virtual bool isPlayingSound(ulong) const = 0;

    virtual ulong playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&) = 0;

    virtual std::optional<PlayingSoundAttributes> tryGetPlayingSoundAttributes(ulong) const = 0;

    virtual std::optional<LoopingSoundAttributes> tryGetLoopingSoundAttributes(ulong) const = 0;
    // NOLINTEND
};
