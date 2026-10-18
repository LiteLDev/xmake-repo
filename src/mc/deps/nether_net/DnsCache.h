#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/external/webrtc/flat_map.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet::Utils { template<typename T0> class ThreadSafe; }
#else // @header-generator platform
#endif // @header-generator platform
namespace webrtc { class IPAddress; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { template<typename T0, typename T1, typename T2, typename T3> class flat_map; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

class DnsCache {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // DnsCache inner types define
    using Key = std::pair<std::string, int>;

    using Value = std::pair<
        std::vector<webrtc::IPAddress>,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 112> mUnkfd9fa6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DnsCache& operator=(DnsCache const&);
    DnsCache(DnsCache const&);
    DnsCache();
#endif // @header-generator platform
};

} // namespace NetherNet
