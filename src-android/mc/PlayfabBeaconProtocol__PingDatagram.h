#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayfabBeaconProtocol {

struct PingDatagram {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> header;
    ::ll::TypedStorage<8, 8, ulong>  uniqueId;
    // NOLINTEND
};

} // namespace PlayfabBeaconProtocol
