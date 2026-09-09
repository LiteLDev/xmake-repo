#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class OnlineAudioTimingHistogram; }
// clang-format on

namespace Audio {

class IOnlineAudioFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IOnlineAudioFetcher() = default;

    virtual void start() = 0;

    virtual void update(std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>) = 0;

    virtual void notifyReadPosition(ulong) = 0;

    virtual void seekTo(ulong) = 0;

    virtual void stop() = 0;

    virtual void notifyPlaybackStarted() = 0;

    virtual bool isFetching() const = 0;

    virtual ulong getNextFetchOffset() const = 0;

    virtual ulong getTotalBytesRequested() const = 0;

    virtual uint getTotalRetries() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Audio
