#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct ClientMessageDeliveryNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // ClientMessageDeliveryNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // ClientMessageDeliveryNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mMessageId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::JsonRpc::ClientMessageDeliveryNotification::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientMessageDeliveryNotification();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientMessageDeliveryNotification(std::string);

    MCNAPI ~ClientMessageDeliveryNotification();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
