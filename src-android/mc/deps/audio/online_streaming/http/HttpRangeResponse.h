#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct HttpRangeResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                success;
    ::ll::TypedStorage<8, 8, ulong>               rangeStart;
    ::ll::TypedStorage<8, 8, ulong>               rangeEnd;
    ::ll::TypedStorage<8, 8, ulong>               fullContentLength;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> body;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRangeResponse& operator=(HttpRangeResponse const&);
    HttpRangeResponse(HttpRangeResponse const&);
};

} // namespace Audio
