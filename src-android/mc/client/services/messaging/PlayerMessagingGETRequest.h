#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/PlayerMessagingRequest.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Bedrock::Http { class Request; }
namespace Json { class Value; }
// clang-format on

class PlayerMessagingGETRequest : public ::PlayerMessagingRequest {
public:
    // prevent constructor by default
    PlayerMessagingGETRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingGETRequest();

    virtual ::Json::Value _getRequestBody();

    virtual ::Bedrock::Http::Request _buildRequest(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $_getRequestBody();

    MCNAPI ::Bedrock::Http::Request $_buildRequest(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
