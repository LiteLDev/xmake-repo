#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundPauseSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"
#include "mc/deps/core/sound/SoundListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundEvent;
class SoundItem;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundSystemGUID;
namespace Audio { class IOnlineSoundPlayer; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class SoundSystemBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   DISTANCEFACTOR;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, SoundListener>> mSoundListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SoundSystemBase();

    virtual bool preinit();

    virtual void init();

    virtual void destroy();

    virtual void setOutputDevice(::SoundSystemGUID&);

    virtual void setAsyncLoadFunction(std::function<void (const SoundItem&, std::function<void ()>)>);

    virtual void enable(bool);

    virtual void mute(bool);

    virtual bool addListener(int const);

    virtual void removeListener(int const);

    virtual void setListenerDirection(int const, ::glm::vec<3, float, (glm::qualifier)0> const&, ::glm::vec<3, float, (glm::qualifier)0> const&);

    virtual void setListenerPos(int const, float, float, float);

    virtual void setListenerVelocity(int const, float, float, float);

    virtual void setMainVolume(float);

    virtual void setMusicVolume(float);

    virtual void setSoundVolume(float);

    virtual void setSoundCategoryVolume(std::string const&, float);

    virtual void setTTSVolume(float);

    virtual bool load(::Core::Path const&, bool);

    virtual bool loadRawFromMemory(::Core::Path const&, char const*, ulong, int, int, ::SoundFormat);

    virtual bool loadFromMemory(::Core::Path const&, char const*, ulong);

    virtual void unload(::Core::Path const&);

    virtual void unloadAllExcept(std::vector<Core::PathBuffer<std::string>> const&);

    virtual void stop(std::string const&);

    virtual ulong playEvent(::SoundEvent const&, std::string const&, float, float);

    virtual ulong playEventAt(::SoundEvent const&, ::PlaySoundOptions const&);

    virtual ulong playEventAt(::SoundEvent const&, std::string const&, float, float, float, float, float, std::optional<ServerSoundHandle>);

    virtual ulong playAt(::Core::Path const&, ::SoundEvent const*, std::string const&, ulong, float, float, float, float, float, bool, float, float, bool, bool, std::optional<ServerSoundHandle>, int);

    virtual ulong playEventAttached(::SoundEvent const&, std::string const&, std::function<void (SoundInstanceProperties&)>&&);

    virtual bool isPlayingSound(::ServerSoundHandle) const;

    virtual bool isPlayingSound(::Core::Path const&) const;

    virtual bool isPlayingSound(ulong) const;

    virtual void stop(::ServerSoundHandle);

    virtual void stop(ulong);

    virtual void setVolume(::ServerSoundHandle, float);

    virtual void setPitch(::ServerSoundHandle, float);

    virtual void fade(::ServerSoundHandle, float, float);

    virtual void setPlaybackPosition(::ServerSoundHandle, float);

    virtual void pause(::ServerSoundHandle, ::SoundPauseSource);

    virtual void resume(::ServerSoundHandle, ::SoundPauseSource);

    virtual void fadeOut(ulong, float) const;

    virtual void playMusic(std::string const&, ::SoundItem const&);

    virtual bool isPlayingMusicEvent(std::string const&) const;

    virtual bool isPlayingMusic(::Core::PathView) const;

    virtual bool isLoadingMusic() const;

    virtual void cancelLoadMusic();

    virtual ::Core::PathBuffer<std::string> const& getCurrentlyPlayingMusicPath() const;

    virtual std::string getCurrentlyPlayingEventName() const;

    virtual void stopMusic();

    virtual void stopRecords();

    virtual void stopAllSounds();

    virtual void pauseAllPlayingSounds(::SoundPauseSource);

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

    virtual void fadeMusicOut(float);

    virtual bool isMusicChannelPlaying() const;

    virtual void pauseMusic(bool);

    virtual void update(float);

    virtual ulong registerLoop(::SoundItem const&, std::weak_ptr<SoundEvent> const, std::string const&, std::function<void (LoopingSoundState&)>, float, float);

    virtual void unregisterLoop(ulong, bool);

    virtual void displayDebugStats(std::string&) const;

    virtual ulong getNewSoundHandle();

    virtual std::optional<PlayingSoundAttributes> tryGetPlayingSoundAttributes(ulong) const;

    virtual std::optional<LoopingSoundAttributes> tryGetLoopingSoundAttributes(ulong) const;

    virtual ulong createRawUISoundStream(int, int, float);

    virtual void closeRawUISoundStream(ulong);

    virtual void playRawUISoundStream(ulong);

    virtual void pauseRawUISoundStream(ulong);

    virtual void feedRawUISoundStream(ulong, int, float**, int);

    virtual void endRawUISoundStream(ulong);

    virtual void setRawUISoundStreamVolume(ulong, float);

    virtual void flushRawUISoundStreamData(ulong);

    virtual ::Bedrock::NonOwnerPointer<Audio::IOnlineSoundPlayer> getOnlineSoundPlayer() = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoundSystemBase();

    MCNAPI int getNumListeners();
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
    MCNAPI bool $preinit();

    MCNAPI void $init();

    MCNAPI void $destroy();

    MCNAPI void $setOutputDevice(::SoundSystemGUID&);

    MCNAPI void $setAsyncLoadFunction(std::function<void(const SoundItem&, std::function<void()>)>);

    MCNAPI void $enable(bool);

    MCNAPI void $mute(bool);

    MCNAPI bool $addListener(int const);

    MCNAPI void $removeListener(int const);

    MCNAPI void $setListenerDirection(
        int const,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&
    );

    MCNAPI void $setListenerPos(int const, float, float, float);

    MCNAPI void $setListenerVelocity(int const, float, float, float);

    MCNAPI void $setMainVolume(float);

    MCNAPI void $setMusicVolume(float);

    MCNAPI void $setSoundVolume(float);

    MCNAPI void $setSoundCategoryVolume(std::string const&, float);

    MCNAPI void $setTTSVolume(float);

    MCNAPI bool $load(::Core::Path const&, bool);

    MCNAPI bool $loadRawFromMemory(::Core::Path const&, char const*, ulong, int, int, ::SoundFormat);

    MCNAPI bool $loadFromMemory(::Core::Path const&, char const*, ulong);

    MCNAPI void $unload(::Core::Path const&);

    MCNAPI void $unloadAllExcept(std::vector<Core::PathBuffer<std::string>> const&);

    MCNAPI void $stop(std::string const&);

    MCNAPI ulong $playEvent(::SoundEvent const&, std::string const&, float, float);

    MCNAPI ulong $playEventAt(::SoundEvent const&, ::PlaySoundOptions const&);

    MCNAPI ulong $playEventAt(
        ::SoundEvent const&,
        std::string const&,
        float,
        float,
        float,
        float,
        float,
        std::optional<ServerSoundHandle>
    );

    MCNAPI ulong $playAt(
        ::Core::Path const&,
        ::SoundEvent const*,
        std::string const&,
        ulong,
        float,
        float,
        float,
        float,
        float,
        bool,
        float,
        float,
        bool,
        bool,
        std::optional<ServerSoundHandle>,
        int
    );

    MCNAPI ulong
    $playEventAttached(::SoundEvent const&, std::string const&, std::function<void(SoundInstanceProperties&)>&&);

    MCNAPI bool $isPlayingSound(::ServerSoundHandle) const;

    MCNAPI bool $isPlayingSound(::Core::Path const&) const;

    MCNAPI bool $isPlayingSound(ulong) const;

    MCNAPI void $stop(::ServerSoundHandle);

    MCNAPI void $stop(ulong);

    MCNAPI void $setVolume(::ServerSoundHandle, float);

    MCNAPI void $setPitch(::ServerSoundHandle, float);

    MCNAPI void $fade(::ServerSoundHandle, float, float);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle, float);

    MCNAPI void $pause(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $resume(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $fadeOut(ulong, float) const;

    MCNAPI void $playMusic(std::string const&, ::SoundItem const&);

    MCNAPI bool $isPlayingMusicEvent(std::string const&) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView) const;

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI void $cancelLoadMusic();

    MCNAPI ::Core::PathBuffer<std::string> const& $getCurrentlyPlayingMusicPath() const;

    MCNAPI std::string $getCurrentlyPlayingEventName() const;

    MCNAPI void $stopMusic();

    MCNAPI void $stopRecords();

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

    MCNAPI void $fadeMusicOut(float);

    MCNAPI bool $isMusicChannelPlaying() const;

    MCNAPI void $pauseMusic(bool);

    MCNAPI void $update(float);

    MCNAPI ulong $registerLoop(
        ::SoundItem const&,
        std::weak_ptr<SoundEvent> const,
        std::string const&,
        std::function<void(LoopingSoundState&)>,
        float,
        float
    );

    MCNAPI void $unregisterLoop(ulong, bool);

    MCNAPI void $displayDebugStats(std::string&) const;

    MCNAPI ulong $getNewSoundHandle();

    MCNAPI std::optional<PlayingSoundAttributes> $tryGetPlayingSoundAttributes(ulong) const;

    MCNAPI std::optional<LoopingSoundAttributes> $tryGetLoopingSoundAttributes(ulong) const;

    MCNAPI ulong $createRawUISoundStream(int, int, float);

    MCNAPI void $closeRawUISoundStream(ulong);

    MCNAPI void $playRawUISoundStream(ulong);

    MCNAPI void $pauseRawUISoundStream(ulong);

    MCNAPI void $feedRawUISoundStream(ulong, int, float**, int);

    MCNAPI void $endRawUISoundStream(ulong);

    MCNAPI void $setRawUISoundStreamVolume(ulong, float);

    MCNAPI void $flushRawUISoundStreamData(ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
