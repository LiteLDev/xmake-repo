#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/PlayerMessagingGETRequest.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Json { class Value; }
// clang-format on

class PlayerMessagingSessionPlayerSafetyRequest : public ::PlayerMessagingGETRequest {
public:
    // prevent constructor by default
    PlayerMessagingSessionPlayerSafetyRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingSessionPlayerSafetyRequest();

    virtual std::string _getEndpoint();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $_getEndpoint();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
