#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioTransport {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int RecordedDataIsAvailable(void const*, uint64, uint64, uint64, uint, uint, int, uint, bool, uint&) = 0;

    virtual int RecordedDataIsAvailable(
        void const*,
        uint64,
        uint64,
        uint64,
        uint,
        uint,
        int,
        uint,
        bool,
        uint&,
        ::std::optional<int64>
    );

    virtual int NeedMorePlayData(uint64, uint64, uint64, uint, void*, uint64&, int64*, int64*) = 0;

    virtual void PullRenderData(int, int, uint64, uint64, void*, int64*, int64*) = 0;

    virtual ~AudioTransport() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
