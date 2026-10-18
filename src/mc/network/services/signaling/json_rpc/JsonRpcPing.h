#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::JsonRpc::JsonRpcPing::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk66558a;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcPing();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    JsonRpcPing& operator=(JsonRpcPing const&);
    JsonRpcPing(JsonRpcPing const&);
    JsonRpcPing();
#endif // @header-generator platform
};

} // namespace JsonRpc
