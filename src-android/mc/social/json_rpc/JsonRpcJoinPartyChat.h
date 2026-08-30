#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct JsonRpcJoinPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcJoinPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcJoinPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::JsonRpc::JsonRpcJoinPartyChat::Params> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcJoinPartyChat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcJoinPartyChat();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
