#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

namespace NetherNet {

class ConnectError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long>         mSessionId;
    ::ll::TypedStorage<4, 4, ::NetherNet::ESessionError> mError;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
