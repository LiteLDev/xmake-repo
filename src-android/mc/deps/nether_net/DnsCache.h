#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::Utils { template<typename T0> class ThreadSafe; }
namespace webrtc { class IPAddress; }
namespace webrtc { template<typename T0, typename T1, typename T2, typename T3> class flat_map; }
// clang-format on

namespace NetherNet {

class DnsCache {
public:
    // DnsCache inner types define
    using Key = std::pair<std::string, int>;

    using Value = std::pair<
        std::vector<webrtc::IPAddress>,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mCache;
    // NOLINTEND
};

} // namespace NetherNet
