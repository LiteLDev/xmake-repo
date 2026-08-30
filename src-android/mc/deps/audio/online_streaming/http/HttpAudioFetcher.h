#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#include "mc/deps/audio/online_streaming/IOnlineAudioFetcher.h"
#include "mc/deps/audio/online_streaming/http/FetcherConfig.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Audio { class HttpResponseHandler; }
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
namespace Audio { struct OnlineStreamConfig; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Audio {

class HttpAudioFetcher : public ::Audio::IOnlineAudioFetcher {
public:
    // HttpAudioFetcher inner types declare
    // clang-format off
    struct ActiveRequest;
    // clang-format on

    // HttpAudioFetcher inner types define
    struct ActiveRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 16> mResponseHandler;
        ::ll::UntypedStorage<8, 16> mAsyncHandle;
        // NOLINTEND
    };

    using RequestDispatcher = ::brstd::move_only_function<Bedrock::Threading::Async<void>(
        const std::string&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        brstd::move_only_function<void(Audio::HttpRangeResponse)>
    )>;

    using InflightRequestHandle = ::Bedrock::Threading::Async<void>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string const> mUrl;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>> const> mBuffer;
    ::ll::UntypedStorage<8, 48> mConfig;
    ::ll::UntypedStorage<8, 64> mDispatcher;
    ::ll::TypedStorage<8, 32, ::Audio::HttpAudioFetcher::ActiveRequest> mActiveRequest;
    ::ll::TypedStorage<8, 8, ulong> mNextFetchOffset;
    ::ll::TypedStorage<8, 8, ulong> mLastReadPosition;
    ::ll::TypedStorage<8, 8, ulong> mTotalBytesRequested;
    ::ll::TypedStorage<4, 4, uint> mTotalRetries;
    ::ll::TypedStorage<4, 4, uint> mConsecutiveFailures;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRetryAfterTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mActiveRequestStartTime;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mRequestTimingBeforePlayback;
    ::ll::TypedStorage<8, 96, ::Audio::OnlineAudioTimingHistogram> mRequestTimingAfterPlayback;
    ::ll::TypedStorage<1, 1, bool> mPlaybackStarted;
    ::ll::UntypedStorage<1, 15> mStopped;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    HttpAudioFetcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HttpAudioFetcher();

    virtual void start();

    virtual void update(std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);

    virtual void notifyReadPosition(ulong);

    virtual void seekTo(ulong);

    virtual void stop();

    virtual void notifyPlaybackStarted();

    virtual bool isFetching() const;

    virtual ulong getNextFetchOffset() const;

    virtual ulong getTotalBytesRequested() const;

    virtual uint getTotalRetries() const;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _tryIssueRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::brstd::move_only_function<std::unique_ptr<Audio::IOnlineAudioFetcher>(
        const std::string&,
        std::shared_ptr<Audio::OnlineStreamedAudioBuffer>,
        const Audio::OnlineStreamConfig&
    )>
    createFetcherFactory(::gsl::not_null<Bedrock::NonOwnerPointer<TaskGroup>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI void $update(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void $notifyReadPosition(ulong);

    MCNAPI void $seekTo(ulong);

    MCNAPI void $stop();

    MCNAPI void $notifyPlaybackStarted();

    MCNAPI bool $isFetching() const;

    MCNAPI ulong $getNextFetchOffset() const;

    MCNAPI ulong $getTotalBytesRequested() const;

    MCNAPI uint $getTotalRetries() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& $getRequestTimingBeforePlaybackHistogram() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& $getRequestTimingAfterPlaybackHistogram() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Audio
