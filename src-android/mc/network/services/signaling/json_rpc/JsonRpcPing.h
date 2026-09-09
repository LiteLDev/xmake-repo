#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcPing : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // JsonRpcPing inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcPing inner types define
    struct Params {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::JsonRpc::JsonRpcPing::Params> mParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcPing();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace JsonRpc
