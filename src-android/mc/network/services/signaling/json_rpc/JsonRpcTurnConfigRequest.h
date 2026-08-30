#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcTurnConfigRequest : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcTurnConfigRequest inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcTurnConfigRequest inner types define
    struct Params {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::JsonRpc::JsonRpcTurnConfigRequest::Params> mParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcTurnConfigRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace JsonRpc
