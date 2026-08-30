#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct JsonRpcSendPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcSendPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcSendPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
        ::ll::TypedStorage<8, 24, std::string> mMessage;
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
    ::ll::TypedStorage<8, 48, ::JsonRpc::JsonRpcSendPartyChat::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcSendPartyChat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcSendPartyChat();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
