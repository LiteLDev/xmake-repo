#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class PlayerMessagingServiceCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1032> mCacheFolder;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingServiceCache();
};
#else // @header-generator platform
class PlayerMessagingServiceCache {};
#endif // @header-generator platform
