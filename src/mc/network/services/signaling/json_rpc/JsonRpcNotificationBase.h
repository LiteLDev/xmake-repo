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

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mMethod;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkfd1ba5;
    ::ll::UntypedStorage<8, 32> mUnk6f714a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonRpcNotificationBase& operator=(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~JsonRpcNotificationBase();
#else // @header-generator platform
    MCNAPI JsonRpcNotificationBase(::JsonRpc::JsonRpcNotificationBase const&);

    MCNAPI ::JsonRpc::JsonRpcNotificationBase& operator=(::JsonRpc::JsonRpcNotificationBase&&);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::JsonRpc::JsonRpcNotificationBase const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
