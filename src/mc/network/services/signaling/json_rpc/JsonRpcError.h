#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/network/services/signaling/json_rpc/ServiceError.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class JsonRpcError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mErrorCode;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::UntypedStorage<8, 168>           mData;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnkd02ce6;
    ::ll::UntypedStorage<8, 32>  mUnk54cb95;
    ::ll::UntypedStorage<8, 184> mUnk7b40a4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonRpcError& operator=(JsonRpcError const&);
    JsonRpcError(JsonRpcError const&);
    JsonRpcError();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JsonRpcError(::JsonRpc::JsonRpcError const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~JsonRpcError();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::JsonRpcError const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
