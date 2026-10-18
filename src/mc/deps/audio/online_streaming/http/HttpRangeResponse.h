#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct HttpRangeResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                success;
    ::ll::TypedStorage<8, 8, ulong>               rangeStart;
    ::ll::TypedStorage<8, 8, ulong>               rangeEnd;
    ::ll::TypedStorage<8, 8, ulong>               fullContentLength;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> body;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkf6bf3f;
    ::ll::UntypedStorage<8, 8>  mUnka8a99f;
    ::ll::UntypedStorage<8, 8>  mUnkfafd5f;
    ::ll::UntypedStorage<8, 8>  mUnke5c1e7;
    ::ll::UntypedStorage<8, 24> mUnkfbb589;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRangeResponse& operator=(HttpRangeResponse const&);
    HttpRangeResponse(HttpRangeResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpRangeResponse();
#endif // @header-generator platform
};

} // namespace Audio
