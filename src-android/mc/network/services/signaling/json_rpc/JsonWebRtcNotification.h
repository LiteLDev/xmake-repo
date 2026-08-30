#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonWebRtcNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // JsonWebRtcNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonWebRtcNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mInnerMessage;
        ::ll::TypedStorage<8, 24, std::string> mToPlayerId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Params();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::JsonRpc::JsonWebRtcNotification::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcNotification();
};

} // namespace JsonRpc
