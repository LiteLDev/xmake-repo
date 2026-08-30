#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcRequestBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mMethod;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcRequestBase(::JsonRpc::JsonRpcRequestBase const&);

    MCNAPI ~JsonRpcRequestBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::JsonRpcRequestBase const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
