#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

struct ReceivePartyInviteResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    ::ll::TypedStorage<8, 24, std::string> mInviterXuid;
    // NOLINTEND
};

} // namespace JsonRpc
