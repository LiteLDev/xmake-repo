#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundPauseSource.h"
#include "mc/client/sound/SoundMapping.h"
#include "mc/client/sound/VolumeMultipliers.h"
#include "mc/deps/audio/SoundEventRepository.h"
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/sound/SoundFormat.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IReadWriteOptions;
class LinkedAssetValidator;
class ResourceLoadManager;
class ResourcePackManager;
class ServerSoundHandle;
class SoundEvent;
class SoundItem;
class SoundSystemBase;
class StreamingAudioExperiment;
class TextToSpeechClient;
class Vec3;
struct ListenerState;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundSystemGUID;
namespace Audio { class OnlineAudioStreamManager; }
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class SoundEngine : public ::SoundPlayerInterface {
public:
    // SoundEngine inner types define
    enum class MusicVolumeSource : uint64 {
        CurrentTrack = 0,
        Option       = 1,
        MusicCommand = 2,
        BiomeDuck    = 3,
        JukeboxDuck  = 4,
        Count        = 5,
    };

    using ListenerStatesSpan = ::gsl::span<std::pair<int, ListenerState>>;

    using SoundEventQueue = std::vector<std::pair<std::string, std::shared_ptr<SoundEvent>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<SoundSystemBase>> const> mSoundSystem;
    ::ll::TypedStorage<8, 40, std::unordered_set<ulong>>                              mFrameUniqueSoundSet;
    ::ll::TypedStorage<8, 80, ::SoundEventRepository>                                 mSoundEventRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IReadWriteOptions>>                     mOptions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TextToSpeechClient>>                    mTTSClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mMainVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mSoundVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mMusicVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mTextToSpeechVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mOnPauseStateChangeSubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>      mSoundCategoryVolumeOptionSubscriptions;
    ::ll::UntypedStorage<8, 24>                                                mResourceManager;
    ::ll::UntypedStorage<8, 24>                                                mLinkedAssetValidator;
    ::ll::UntypedStorage<4, 140>                                               mMusicVolumeMultipliers;
    ::ll::TypedStorage<4, 4, float>                                            mMainVolume;
    ::ll::TypedStorage<4, 4, float>                                            mTTSVolume;
    ::ll::TypedStorage<1, 1, bool>                                             mMuted;
    ::ll::TypedStorage<1, 1, bool>                                             mFadeToStopMusic;
    ::ll::TypedStorage<8, 248, ::SoundMapping>                                 mSounds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Audio::OnlineAudioStreamManager>> mOnlineStreamManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StreamingAudioExperiment> const>  mStreamingExperiment;
    ::ll::UntypedStorage<8, 24>                                                mFileSystem;
    ::ll::UntypedStorage<8, 24>                                                mFileAccess;
    ::ll::UntypedStorage<8, 24>                                                mDataPath;
    ::ll::UntypedStorage<1, 144>                                               mResourceLoadManagerMutex;
    ::ll::UntypedStorage<8, 24>                                                mResourceLoadManager;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundEngine();

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

    virtual void displaySoundEngineStats(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _tryPlayMusicFromStreamingExperiment(std::string const&, ::SoundItem const&, float);

    MCNAPI bool addListener(int);

    MCNAPI void closeRawUISoundStream(ulong);

    MCNAPI ulong createRawUISoundStream(int, int, float);

    MCNAPI void enable(bool);

    MCNAPI void endRawUISoundStream(ulong);

    MCNAPI void feedRawUISoundStream(ulong, int, float**, int);

    MCNAPI void flushRawUISoundStreamData(ulong);

    MCNAPI ::SoundMapping const& getSounds() const;

    MCNAPI void load(
        bool,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::shared_ptr<std::vector<Bedrock::Resources::PreloadedPathHandle>>
    );

    MCNAPI void mute();

    MCNAPI void pauseRawUISoundStream(ulong);

    MCNAPI void playRawUISoundStream(ulong);

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>&);

    MCNAPI void removeListener(int);

    MCNAPI void resetBiomeMusicVolumeMultiplier();

    MCNAPI void resetJukeboxMusicVolumeMultiplier();

    MCNAPI void setBiomeMusicVolumeMultiplier(float);

    MCNAPI void setJukeboxMusicVolumeMultiplier(float);

    MCNAPI void setOptions(std::shared_ptr<IReadWriteOptions>);

    MCNAPI void setRawUISoundStreamVolume(ulong, float);

    MCNAPI void setTTSClient(std::shared_ptr<TextToSpeechClient>);

    MCNAPI void unMute();

    MCNAPI void update(::gsl::span<std::pair<int, ListenerState>>, float);
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

    MCNAPI void $displaySoundEngineStats(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
