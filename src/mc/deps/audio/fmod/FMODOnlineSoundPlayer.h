#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IOnlineSoundPlayer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeContext; }
namespace Audio { class OnlineAudioStream; }
namespace FMOD { class Channel; }
namespace FMOD { class ChannelGroup; }
namespace FMOD { class Sound; }
namespace FMOD { class System; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Audio {

#if defined(LL_PLAT_A) // @header-generator platform
class FMODOnlineSoundPlayer : public ::Audio::IOnlineSoundPlayer {
#else // @header-generator platform
class FMODOnlineSoundPlayer {
#endif // @header-generator platform
public:
    // FMODOnlineSoundPlayer inner types declare
    // clang-format off
    struct OnlineSoundInfo;
    // clang-format on

    // FMODOnlineSoundPlayer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct OnlineSoundInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::FMOD::Channel*> channel;
        ::ll::TypedStorage<8, 8, ::FMOD::Sound*>   sound;
        ::ll::UntypedStorage<1, 16>                stream;
        ::ll::TypedStorage<4, 4, float>            targetVolume;
        ::ll::TypedStorage<1, 1, bool>             isMusic;
        ::ll::TypedStorage<1, 1, bool>             pausedForGap;
        // NOLINTEND

    public:
        // prevent constructor by default
        OnlineSoundInfo& operator=(OnlineSoundInfo const&);
        OnlineSoundInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FMOD::System&>                                             mSystem;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup&>                                       mSoundChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup&>                                       mMusicChannelGroup;
    ::ll::UntypedStorage<8, 24>                                                           mSharedHandleCounter;
    ::ll::TypedStorage<8, 24, std::vector<Audio::FMODOnlineSoundPlayer::OnlineSoundInfo>> mSounds;
    // NOLINTEND

public:
    // prevent constructor by default
    FMODOnlineSoundPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FMODOnlineSoundPlayer();

    virtual ulong play(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float);

    virtual ulong playMusic(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float);

    virtual bool stop(ulong);

    virtual bool isPlaying(ulong) const;

    virtual std::vector<ulong> cleanupFinished();

    virtual void updateGapPausing();

    virtual void fadeOutMusic(float);

    virtual void stopMusic();

    virtual void pauseMusic(bool);

    virtual bool isPlayingMusic() const;

    virtual void stopAll();

    virtual ulong getNewSoundHandle();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $play(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float);

    MCNAPI ulong
    $playMusic(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float);

    MCNAPI bool $stop(ulong);

    MCNAPI bool $isPlaying(ulong) const;

    MCNAPI std::vector<ulong> $cleanupFinished();

    MCNAPI void $updateGapPausing();

    MCNAPI void $fadeOutMusic(float);

    MCNAPI void $stopMusic();

    MCNAPI void $pauseMusic(bool);

    MCNAPI bool $isPlayingMusic() const;

    MCNAPI void $stopAll();

    MCNAPI ulong $getNewSoundHandle();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct OnlineSoundInfo {};
#endif // @header-generator platform
};

} // namespace Audio
