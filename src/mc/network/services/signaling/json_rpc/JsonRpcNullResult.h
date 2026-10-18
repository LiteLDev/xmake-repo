#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class JsonRpcNullResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                mId;
    ::ll::TypedStorage<8, 24, std::string>       mJsonRpc;
    ::ll::TypedStorage<1, 1, ::cereal::NullType> mResult;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk53a833;
    ::ll::UntypedStorage<8, 32> mUnkf24f71;
    ::ll::UntypedStorage<1, 1>  mUnk6f97cf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonRpcNullResult& operator=(JsonRpcNullResult const&);
    JsonRpcNullResult(JsonRpcNullResult const&);
    JsonRpcNullResult();
#endif // @header-generator platform
};

} // namespace JsonRpc
