#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/network/services/signaling/json_rpc/ServiceError.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mErrorCode;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::UntypedStorage<8, 168>           mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcError(::JsonRpc::JsonRpcError const&);

    MCNAPI ~JsonRpcError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::JsonRpcError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
