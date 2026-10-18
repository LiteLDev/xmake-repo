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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IOnlineAudioFetcher() = default;

    virtual void start() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>) = 0;
#else // @header-generator platform
    virtual void update(::std::chrono::steady_clock::time_point currentTime) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyReadPosition(ulong) = 0;
#else // @header-generator platform
    virtual void notifyReadPosition(uint64 offset) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void seekTo(ulong) = 0;
#else // @header-generator platform
    virtual void seekTo(uint64 offset) = 0;
#endif // @header-generator platform

    virtual void stop() = 0;

    virtual void notifyPlaybackStarted() = 0;

    virtual bool isFetching() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getNextFetchOffset() const = 0;
#else // @header-generator platform
    virtual uint64 getNextFetchOffset() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalBytesRequested() const = 0;
#else // @header-generator platform
    virtual uint64 getTotalBytesRequested() const = 0;
#endif // @header-generator platform

    virtual uint getTotalRetries() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Audio
