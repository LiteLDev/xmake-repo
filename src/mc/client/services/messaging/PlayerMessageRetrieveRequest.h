#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/PlayerMessagingRequest.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Json { class Value; }
// clang-format on

class PlayerMessageRetrieveRequest : public ::PlayerMessagingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSessionID;
    ::ll::TypedStorage<8, 24, std::string> mCategory;
    ::ll::UntypedStorage<8, 32>            mContinuationToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessageRetrieveRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessageRetrieveRequest();

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
#else // @header-generator platform
class PlayerMessageRetrieveRequest {};
#endif // @header-generator platform
