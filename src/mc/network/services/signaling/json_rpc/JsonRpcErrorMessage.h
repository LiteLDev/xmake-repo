#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcError.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class JsonRpcErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::UntypedStorage<8, 200>           mError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk9a55c5;
    ::ll::UntypedStorage<8, 32>  mUnk80422a;
    ::ll::UntypedStorage<8, 224> mUnk76c886;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonRpcErrorMessage& operator=(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage();
#endif // @header-generator platform
};

} // namespace JsonRpc
