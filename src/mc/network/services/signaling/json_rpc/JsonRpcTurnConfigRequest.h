#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::JsonRpc::JsonRpcTurnConfigRequest::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkd4db13;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcTurnConfigRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    JsonRpcTurnConfigRequest& operator=(JsonRpcTurnConfigRequest const&);
    JsonRpcTurnConfigRequest(JsonRpcTurnConfigRequest const&);
    JsonRpcTurnConfigRequest();
#endif // @header-generator platform
};

} // namespace JsonRpc
