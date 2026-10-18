#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class JsonRpcRequestBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mMethod;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3b1c48;
    ::ll::UntypedStorage<8, 32> mUnka984db;
    ::ll::UntypedStorage<8, 32> mUnkb26ed1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonRpcRequestBase();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcRequestBase(::JsonRpc::JsonRpcRequestBase const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::JsonRpc::JsonRpcRequestBase& operator=(::JsonRpc::JsonRpcRequestBase&&);

    MCNAPI ::JsonRpc::JsonRpcRequestBase& operator=(::JsonRpc::JsonRpcRequestBase const&);
#endif // @header-generator platform

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
