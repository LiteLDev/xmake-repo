#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcError.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::UntypedStorage<8, 200>           mError;
    // NOLINTEND
};

} // namespace JsonRpc
