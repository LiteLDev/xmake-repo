#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/PlayerMessagingRequest.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Json { class Value; }
// clang-format on

class PlayerMessagingSessionStartRequest : public ::PlayerMessagingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSessionID;
    ::ll::TypedStorage<8, 24, std::string> mPreviousSessionId;
    ::ll::UntypedStorage<8, 32>            mContinuationToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingSessionStartRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingSessionStartRequest();

    virtual std::string _getEndpoint();

    virtual ::Json::Value _getRequestBody();
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

    MCNAPI ::Json::Value $_getRequestBody();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
