#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcNullResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                mId;
    ::ll::TypedStorage<8, 24, std::string>       mJsonRpc;
    ::ll::TypedStorage<1, 1, ::cereal::NullType> mResult;
    // NOLINTEND
};

} // namespace JsonRpc
