#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/OnlineAudioStream.h"
#include "mc/deps/audio/online_streaming/OnlineStreamConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Audio { class IOnlineAudioFetcher; }
namespace Audio { class IOnlineSoundPlayer; }
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct OnlinePlayRequest; }
namespace Audio { struct OnlineStreamParams; }
// clang-format on

namespace Audio {

class OnlineAudioStreamManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Audio::OnlineStreamConfig> mConfig;
    ::ll::TypedStorage<4, 4, int>                          mMaxConcurrentStreams;
    ::ll::UntypedStorage<8, 16>                            mTaskGroup;
    ::ll::UntypedStorage<8, 64>                            mFetcherFactory;
    ::ll::UntypedStorage<8, 32>                            mSoundPlayer;
    ::ll::UntypedStorage<8, 64>                            mOnStreamDestroyed;
    ::ll::UntypedStorage<8, 32>                            mStreams;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStreamManager();

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Audio
