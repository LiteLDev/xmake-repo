#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/SoundPauseSource.h"
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/audio/SoundSystemBase.h"
#include "mc/deps/audio/fmod/FileSystemFMOD.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Random.h"
#include "mc/deps/core/sound/LoopLifecycle.h"
#include "mc/deps/core/sound/LoopingSoundState.h"
#include "mc/deps/core/sound/SoundFormat.h"
#include "mc/deps/core/sound/SoundItem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLoader;
class SoundEvent;
class SoundItem;
struct FMOD_CREATESOUNDEXINFO;
struct LoopingSoundAttributes;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundSystemGUID;
namespace Audio { class FMODOnlineSoundPlayer; }
namespace Audio { class IAudioAssetProvider; }
namespace Audio { class IOnlineSoundPlayer; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace FMOD { class Channel; }
namespace FMOD { class ChannelGroup; }
namespace FMOD { class Sound; }
namespace FMOD { class System; }
// clang-format on

class SoundSystemFMOD : public ::SoundSystemBase {
#else // @header-generator platform
class SoundSystemFMOD {
#endif // @header-generator platform
public:
    // SoundSystemFMOD inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LoopInfo;
#endif // @header-generator platform
    struct SoundInfo;
    struct StreamInfo;
#if defined(LL_PLAT_A) // @header-generator platform
    struct LoopInfo;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // SoundSystemFMOD inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SoundInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                      eventName;
        ::ll::TypedStorage<8, 24, std::string>                      soundPath;
        ::ll::TypedStorage<8, 8, ::FMOD::Channel*>                  channel;
        ::ll::TypedStorage<8, 8, ulong>                             handle;
        ::ll::TypedStorage<8, 16, std::optional<ServerSoundHandle>> serverSoundHandle;
        ::ll::TypedStorage<8, 8, std::bitset<2>>                    pauseSources;
        // NOLINTEND
#else // @header-generator platform
    struct LoopInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        SoundInfo& operator=(SoundInfo const&);
        SoundInfo();
#else // @header-generator platform
    struct SoundInfo {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SoundInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StreamInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::FMOD::Channel*>    mChannel;
        ::ll::TypedStorage<8, 8, ::FMOD::Sound*>      mSound;
        ::ll::TypedStorage<8, 8, ulong>               mHandle;
        ::ll::TypedStorage<4, 4, int>                 mByteDepth;
        ::ll::TypedStorage<4, 4, int>                 mChannels;
        ::ll::TypedStorage<4, 4, int>                 mSamplingRate;
        ::ll::TypedStorage<4, 4, int>                 mDecodeBufferSize;
        ::ll::TypedStorage<8, 24, std::vector<float>> mSwapBuffer;
        ::ll::TypedStorage<4, 40, std::mutex>         mDataLock;
        ::ll::TypedStorage<4, 4, uint>                mWriteCursor;
        ::ll::TypedStorage<4, 4, uint>                mReadCursor;
        ::ll::TypedStorage<8, 24, std::vector<float>> mData;
        ::ll::TypedStorage<1, 1, bool>                mHasReceivedAllData;
        ::ll::TypedStorage<4, 4, float>               mVolumeOnPause;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamInfo();
    };

    struct LoopInfo : public ::SoundSystemFMOD::SoundInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                      time;
        ::ll::TypedStorage<4, 4, float>                      fadeInDuration;
        ::ll::TypedStorage<4, 4, float>                      fadeOutDuration;
        ::ll::TypedStorage<8, 8, unsigned long long>         fadingStarted;
        ::ll::TypedStorage<8, 80, ::SoundItem>               soundItem;
        ::ll::TypedStorage<4, 4, ::LoopLifecycle>            stage;
        ::ll::TypedStorage<4, 20, ::LoopingSoundState>       state;
        ::ll::TypedStorage<8, 16, std::weak_ptr<SoundEvent>> soundEvent;
        ::ll::TypedStorage<8, 8, ulong>                      handle;
        ::ll::UntypedStorage<8, 48>                          getSoundState;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoopInfo& operator=(LoopInfo const&);
        LoopInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LoopInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using LockType = std::mutex;

    using SharedLockType = std::shared_timed_mutex;

    using AdditionalSoundSetup = std::function<void(uint&, FMOD_CREATESOUNDEXINFO&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::FMOD::System*> mSystem;
    ::ll::UntypedStorage<8, 32> mSoundUniqueID;
    ::ll::TypedStorage<8, 24, std::vector<SoundSystemFMOD::SoundInfo>> mPlayingSounds;
    ::ll::TypedStorage<8, 24, std::vector<ServerSoundHandle>> mLoadingSounds;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, SoundSystemFMOD::LoopInfo>> mLoopingSounds;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unique_ptr<SoundSystemFMOD::StreamInfo>>> mStreamingSounds;
    ::ll::TypedStorage<8, 8, ulong> mLoopingSoundUniqueID;
    ::ll::TypedStorage<8, 8, ulong> mStreamingSoundUniqueID;
    ::ll::TypedStorage<8, 2536, ::Core::Random> mRand;
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*> mPrimaryChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*> mSoundChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*> mMusicChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*> mTTSChannelGroup;
    ::ll::TypedStorage<8, 24, std::map<std::string, FMOD::ChannelGroup*>> mSoundCategoryChannelGroups;
    ::ll::TypedStorage<8, 8, ::FMOD::Channel*> mMusicChannel;
    ::ll::TypedStorage<1, 1, ::FileSystemFMOD> mFileSystem;
    ::ll::UntypedStorage<8, 8> mLRUCache;
    ::ll::TypedStorage<4, 40, std::mutex> mSoundsLock;
    ::ll::UntypedStorage<1, 140> mPlayingSoundsLock;
    ::ll::TypedStorage<4, 40, std::mutex> mLoadingSoundsLock;
    ::ll::TypedStorage<8, 24, std::string> mCurrentMusicEvent;
    ::ll::UntypedStorage<8, 24> mCurrentMusicPath;
    ::ll::TypedStorage<1, 1, bool> mLoadingMusic;
    ::ll::TypedStorage<8, 8, ::ResourceLoader&> mResourceLoader;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<const Audio::IAudioAssetProvider>> const> mAudioAssetProvider;
    ::ll::UntypedStorage<8, 24> mTempFolderPath;
    ::ll::UntypedStorage<8, 24> mDataUrl;
    ::ll::TypedStorage<8, 8, ulong> mThreadMask;
    ::ll::UntypedStorage<8, 48> mAsyncLoad;
    ::ll::TypedStorage<4, 4, float> mEvictionStatTimer;
    ::ll::TypedStorage<8, 8, ulong> mCurrentEvictionRate;
    ::ll::UntypedStorage<8, 16> mOnlineSoundPlayer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SoundSystemFMOD& operator=(SoundSystemFMOD const&);
    SoundSystemFMOD(SoundSystemFMOD const&);
    SoundSystemFMOD();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SoundSystemFMOD();

    virtual bool preinit();

    virtual void init();

    virtual void destroy();

    virtual void setOutputDevice(::SoundSystemGUID&);

    virtual void setAsyncLoadFunction(std::function<void (const SoundItem&, std::function<void ()>)>);

    virtual void enable(bool);

    virtual void mute(bool);

    virtual bool addListener(int const);

    virtual void removeListener(int const);

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

    virtual ::Bedrock::NonOwnerPointer<Audio::IOnlineSoundPlayer> getOnlineSoundPlayer();

    virtual void _stopAllLoopSounds();

    virtual void _pauseAllPlayingLoopSounds(::SoundPauseSource);

    virtual void _resumeAllPreviouslyPlayingLoopSounds(::SoundPauseSource);

    virtual void playSound(float, float, float, float, float, ::FMOD::ChannelGroup*, ::FMOD::Channel*&, ::FMOD::Sound*&, bool, float, float, bool, int);

    virtual ::FMOD::Sound* getFirstSubSound(std::shared_ptr<FMOD::Sound> const&) const;

    virtual bool _createSystem();

    virtual bool _initSystem();

    virtual void _updateSystem(float);

    virtual void _destroySystem();

    virtual void _updateListenerAttributes();

    virtual void _setPositionalAttributes(::FMOD::Channel*, ::FMOD::Sound*, ::FMOD::Sound*, float, float, float, float);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoundSystemFMOD(
        ::ResourceLoader&,
        std::unique_ptr<const Audio::IAudioAssetProvider>,
        ::Core::Path const&,
        ::Core::Path const&,
        ulong
    );

    MCNAPI void _handleLooping(::SoundSystemFMOD::LoopInfo&);

    MCNAPI bool _isSoundLoaded(::Core::Path const&);

    MCNAPI ulong _playEvent(
        ::SoundEvent const&,
        std::string const&,
        float,
        float,
        bool,
        float,
        float,
        float,
        std::optional<ServerSoundHandle>,
        int
    );

    MCNAPI void _updateLoopPitchVolumeAndPosition(::SoundSystemFMOD::LoopInfo&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLoader&,
        std::unique_ptr<const Audio::IAudioAssetProvider>,
        ::Core::Path const&,
        ::Core::Path const&,
        ulong
    );
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

    MCNAPI ::Bedrock::NonOwnerPointer<Audio::IOnlineSoundPlayer> $getOnlineSoundPlayer();

    MCNAPI void $_stopAllLoopSounds();

    MCNAPI void $_pauseAllPlayingLoopSounds(::SoundPauseSource);

    MCNAPI void $_resumeAllPreviouslyPlayingLoopSounds(::SoundPauseSource);

    MCNAPI void $playSound(
        float,
        float,
        float,
        float,
        float,
        ::FMOD::ChannelGroup*,
        ::FMOD::Channel*&,
        ::FMOD::Sound*&,
        bool,
        float,
        float,
        bool,
        int
    );

    MCNAPI ::FMOD::Sound* $getFirstSubSound(std::shared_ptr<FMOD::Sound> const&) const;

    MCNAPI bool $_createSystem();

    MCNAPI bool $_initSystem();

    MCNAPI void $_updateSystem(float);

    MCNAPI void $_destroySystem();

    MCNAPI void $_updateListenerAttributes();

    MCNAPI void $_setPositionalAttributes(::FMOD::Channel*, ::FMOD::Sound*, ::FMOD::Sound*, float, float, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct StreamInfo {};
#endif // @header-generator platform
};
