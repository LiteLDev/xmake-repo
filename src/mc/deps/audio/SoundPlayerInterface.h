#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/SoundPauseSource.h"
#else // @header-generator platform
#include "mc/deps/audio/SoundPauseSource.h"
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SoundPlayerInterface() = default;
#else // @header-generator platform
    virtual ~SoundPlayerInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong play(::PlaySoundOptions) = 0;
#else // @header-generator platform
    virtual uint64 play(
        ::std::string const&                 name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong play(std::string const&, ::Vec3 const&, float, float, std::optional<ServerSoundHandle>) = 0;
#else // @header-generator platform
    virtual uint64 play(::PlaySoundOptions options) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong playUI(std::string const&, float, float) = 0;
#else // @header-generator platform
    virtual uint64 playUI(::std::string const& name, float volume, float pitch) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playMusic(std::string const&, float) = 0;
#else // @header-generator platform
    virtual void playMusic(::std::string const& eventName, float volume, uint& playlistIndex) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playMusic(std::string const&, float, uint&) = 0;
#else // @header-generator platform
    virtual void playMusic(::std::string const& eventName, float volume) = 0;
#endif // @header-generator platform

    virtual bool isLoadingMusic() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingMusicEvent(std::string const&) const = 0;
#else // @header-generator platform
    virtual bool isPlayingMusicEvent(::std::string const& eventName) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingMusic(::Core::PathView) const = 0;
#else // @header-generator platform
    virtual bool isPlayingMusic(::Core::PathView soundPath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fadeToStopMusic(float) = 0;
#else // @header-generator platform
    virtual void fadeToStopMusic(float fadeSeconds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMusicCommandVolumeMultiplier(float) = 0;
#else // @header-generator platform
    virtual void setMusicCommandVolumeMultiplier(float volumeMultiplier) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fadeOut(ulong, float) = 0;
#else // @header-generator platform
    virtual void fadeOut(uint64 handle, float duration) = 0;
#endif // @header-generator platform

    virtual void stopMusic() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(::ServerSoundHandle) = 0;
#else // @header-generator platform
    virtual void stop(::std::string const& name) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(ulong) = 0;
#else // @header-generator platform
    virtual void stop(uint64 handle) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(std::string const&) = 0;
#else // @header-generator platform
    virtual void stop(::ServerSoundHandle serverSoundHandle) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setVolume(::ServerSoundHandle, float) = 0;
#else // @header-generator platform
    virtual void setVolume(::ServerSoundHandle serverSoundHandle, float volume) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPitch(::ServerSoundHandle, float) = 0;
#else // @header-generator platform
    virtual void setPitch(::ServerSoundHandle serverSoundHandle, float pitch) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fade(::ServerSoundHandle, float, float) = 0;
#else // @header-generator platform
    virtual void fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlaybackPosition(::ServerSoundHandle, float) = 0;
#else // @header-generator platform
    virtual void setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pause(::ServerSoundHandle, ::SoundPauseSource) = 0;
#else // @header-generator platform
    virtual void pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resume(::ServerSoundHandle, ::SoundPauseSource) = 0;
#else // @header-generator platform
    virtual void resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) = 0;
#endif // @header-generator platform

    virtual void stopAllSounds() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pauseAllPlayingSounds(::SoundPauseSource) = 0;
#else // @header-generator platform
    virtual void pauseAllPlayingSounds(::SoundPauseSource source) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource) = 0;
#else // @header-generator platform
    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource source) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pauseMusic(bool) = 0;
#else // @header-generator platform
    virtual void pauseMusic(bool state) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getCurrentlyPlayingMusicPath() = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicPath() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getItem(std::string const&, ::Core::PathView, ::SoundItem&) const = 0;
#else // @header-generator platform
    virtual bool getItem(::std::string const& eventName, ::Core::PathView soundPath, ::SoundItem& soundItem) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong registerLoop(std::string const&, std::function<void(LoopingSoundState&)>, float, float) = 0;
#else // @header-generator platform
    virtual uint64 registerLoop(
        ::std::string const&                        name,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterLoop(ulong, bool) = 0;
#else // @header-generator platform
    virtual void unregisterLoop(uint64 handle, bool hard) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> getSubtitle(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::string> getSubtitle(::std::string const& name) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(::ServerSoundHandle) const = 0;
#else // @header-generator platform
    virtual bool isPlayingSound(uint64 handle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual bool isPlayingSound(::Core::Path const& soundName) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayingSound(ulong) const = 0;
#else // @header-generator platform
    virtual bool isPlayingSound(::ServerSoundHandle serverSoundHandle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong playAttached(std::string const&, std::function<void(SoundInstanceProperties&)>&&) = 0;
#else // @header-generator platform
    virtual uint64 playAttached(
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<PlayingSoundAttributes> tryGetPlayingSoundAttributes(ulong) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<LoopingSoundAttributes> tryGetLoopingSoundAttributes(ulong) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
