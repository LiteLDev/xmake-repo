#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/audio/online_streaming/OnlineAudioStream.h"
#include "mc/deps/audio/online_streaming/OnlineStreamConfig.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
namespace Audio { class IOnlineAudioFetcher; }
namespace Audio { class IOnlineSoundPlayer; }
namespace Audio { class OnlineStreamedAudioBuffer; }
#else // @header-generator platform
namespace Audio { class OnlineAudioStream; }
#endif // @header-generator platform
namespace Audio { struct OnlinePlayRequest; }
namespace Audio { struct OnlineStreamParams; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Audio { class IOnlineSoundPlayer; }
#endif // @header-generator platform
// clang-format on

namespace Audio {

class OnlineAudioStreamManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Audio::OnlineStreamConfig> mConfig;
    ::ll::TypedStorage<4, 4, int>                          mMaxConcurrentStreams;
    ::ll::UntypedStorage<8, 16>                            mTaskGroup;
    ::ll::UntypedStorage<8, 64>                            mFetcherFactory;
    ::ll::UntypedStorage<8, 32>                            mSoundPlayer;
    ::ll::UntypedStorage<8, 64>                            mOnStreamDestroyed;
    ::ll::UntypedStorage<8, 32>                            mStreams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkf4a6b4;
    ::ll::UntypedStorage<4, 4>  mUnk99f1af;
    ::ll::UntypedStorage<8, 16> mUnkfe84a5;
    ::ll::UntypedStorage<8, 64> mUnkeab388;
    ::ll::UntypedStorage<8, 24> mUnk43f934;
    ::ll::UntypedStorage<8, 64> mUnk42e32e;
    ::ll::UntypedStorage<8, 24> mUnkf0432d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnlineAudioStreamManager& operator=(OnlineAudioStreamManager const&);
    OnlineAudioStreamManager(OnlineAudioStreamManager const&);
#endif // @header-generator platform
    OnlineAudioStreamManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OnlineAudioStreamManager(
        ::Audio::OnlineStreamConfig,
        ::brstd::move_only_function<std::unique_ptr<Audio::IOnlineAudioFetcher>(
            const std::string&,
            std::shared_ptr<Audio::OnlineStreamedAudioBuffer>,
            const Audio::OnlineStreamConfig&
        )>,
        ::Bedrock::UniqueOwnerPointer<TaskGroup>,
        int
    );

    MCNAPI ::WeakRef<Audio::OnlineAudioStream>
    createStream(std::string const&, ::Audio::OnlineStreamParams, ::Audio::OnlinePlayRequest);

    MCNAPI bool isPlayingMusicEvent(std::string const&) const;

    MCNAPI void setOnStreamDestroyed(::brstd::move_only_function<void(const Audio::OnlineAudioStream&)>);

    MCNAPI void setSoundPlayer(::gsl::not_null<Bedrock::NonOwnerPointer<Audio::IOnlineSoundPlayer>>);

    MCNAPI void stopAll();

    MCNAPI void update(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI ~OnlineAudioStreamManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Audio::OnlineStreamConfig,
        ::brstd::move_only_function<std::unique_ptr<Audio::IOnlineAudioFetcher>(
            const std::string&,
            std::shared_ptr<Audio::OnlineStreamedAudioBuffer>,
            const Audio::OnlineStreamConfig&
        )>,
        ::Bedrock::UniqueOwnerPointer<TaskGroup>,
        int
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::WeakRef<::Audio::OnlineAudioStream>
    createStream(::std::string const& url, ::Audio::OnlineStreamParams params, ::Audio::OnlinePlayRequest playRequest);

    MCNAPI void setSoundPlayer(::Bedrock::NotNullNonOwnerPtr<::Audio::IOnlineSoundPlayer> soundPlayer);

    MCNAPI void stopAll();

    MCNAPI void update(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI ~OnlineAudioStreamManager();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
