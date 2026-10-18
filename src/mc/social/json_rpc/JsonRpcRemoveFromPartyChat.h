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

struct JsonRpcRemoveFromPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcRemoveFromPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcRemoveFromPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
        ::ll::TypedStorage<8, 24, std::string> mXuid;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk262c5b;
        ::ll::UntypedStorage<8, 32> mUnk4da2c4;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Params();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::JsonRpc::JsonRpcRemoveFromPartyChat::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk51bf3b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonRpcRemoveFromPartyChat& operator=(JsonRpcRemoveFromPartyChat const&);
    JsonRpcRemoveFromPartyChat(JsonRpcRemoveFromPartyChat const&);
#endif // @header-generator platform
    JsonRpcRemoveFromPartyChat();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcRemoveFromPartyChat();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace JsonRpc
