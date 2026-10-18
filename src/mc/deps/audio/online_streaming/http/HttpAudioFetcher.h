#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/Audio__OnlineAudioTimingHistogram.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/audio/online_streaming/IOnlineAudioFetcher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/audio/online_streaming/http/FetcherConfig.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Audio { class HttpResponseHandler; }
#else // @header-generator platform
namespace Audio { class OnlineAudioTimingHistogram; }
#endif // @header-generator platform
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
namespace Audio { struct OnlineStreamConfig; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Response; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 16> mResponseHandler;
        ::ll::UntypedStorage<8, 16> mAsyncHandle;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk170164;
        ::ll::UntypedStorage<8, 16> mUnk6aa44d;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using RequestDispatcher = ::brstd::move_only_function<Bedrock::Threading::Async<void>(
        const std::string&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        brstd::move_only_function<void(Audio::HttpRangeResponse)>
    )>;

    using InflightRequestHandle = ::Bedrock::Threading::Async<void>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        ActiveRequest& operator=(ActiveRequest const&);
        ActiveRequest(ActiveRequest const&);
        ActiveRequest();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk22aec7;
    ::ll::UntypedStorage<8, 16> mUnkff3770;
    ::ll::UntypedStorage<8, 40> mUnkaac834;
    ::ll::UntypedStorage<8, 64> mUnk5feeab;
    ::ll::UntypedStorage<8, 32> mUnk6a7344;
    ::ll::UntypedStorage<8, 8>  mUnk1c6fb9;
    ::ll::UntypedStorage<8, 8>  mUnkdf9387;
    ::ll::UntypedStorage<8, 8>  mUnk38d5d7;
    ::ll::UntypedStorage<4, 4>  mUnk4c2218;
    ::ll::UntypedStorage<4, 4>  mUnk9e826b;
    ::ll::UntypedStorage<8, 8>  mUnkc4a82e;
    ::ll::UntypedStorage<8, 8>  mUnke8a351;
    ::ll::UntypedStorage<8, 96> mUnkb4bf9c;
    ::ll::UntypedStorage<8, 96> mUnk443dd3;
    ::ll::UntypedStorage<1, 1>  mUnk2f2f64;
    ::ll::UntypedStorage<1, 1>  mUnkc18b69;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpAudioFetcher& operator=(HttpAudioFetcher const&);
    HttpAudioFetcher(HttpAudioFetcher const&);
#endif // @header-generator platform
    HttpAudioFetcher();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HttpAudioFetcher();
#else // @header-generator platform
    virtual ~HttpAudioFetcher() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);
#else // @header-generator platform
    virtual void update(::std::chrono::steady_clock::time_point currentTime) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyReadPosition(ulong);
#else // @header-generator platform
    virtual void notifyReadPosition(uint64 offset) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void seekTo(ulong);
#else // @header-generator platform
    virtual void seekTo(uint64 offset) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyPlaybackStarted();
#else // @header-generator platform
    virtual void notifyPlaybackStarted() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFetching() const;
#else // @header-generator platform
    virtual bool isFetching() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getNextFetchOffset() const;
#else // @header-generator platform
    virtual uint64 getNextFetchOffset() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalBytesRequested() const;
#else // @header-generator platform
    virtual uint64 getTotalBytesRequested() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getTotalRetries() const;
#else // @header-generator platform
    virtual uint getTotalRetries() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const;
#else // @header-generator platform
    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const;
    // clang-format on
#else // @header-generator platform
    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryIssueRequest();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _tryIssueRequest();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::brstd::move_only_function<::std::unique_ptr<::Audio::IOnlineAudioFetcher>(
        ::std::string const&,
        ::std::shared_ptr<::Audio::OnlineStreamedAudioBuffer>,
        ::Audio::OnlineStreamConfig const&
    )> createFetcherFactory(::Bedrock::NotNullNonOwnerPtr<::TaskGroup> const& taskGroup);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $start();

    MCNAPI void $update(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void $notifyReadPosition(uint64 offset);

    MCNAPI void $seekTo(uint64 offset);

    MCNAPI void $stop();

    MCNAPI void $notifyPlaybackStarted();

    MCNAPI bool $isFetching() const;

    MCNAPI uint64 $getNextFetchOffset() const;

    MCNAPI uint64 $getTotalBytesRequested() const;

    MCNAPI uint $getTotalRetries() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& $getRequestTimingBeforePlaybackHistogram() const;

    MCNAPI ::Audio::OnlineAudioTimingHistogram const& $getRequestTimingAfterPlaybackHistogram() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
