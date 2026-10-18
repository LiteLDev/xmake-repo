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

struct JsonRpcSendPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcSendPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcSendPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
        ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkc5c22f;
        ::ll::UntypedStorage<8, 32> mUnk9bb687;
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
    ::ll::TypedStorage<8, 48, ::JsonRpc::JsonRpcSendPartyChat::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkfa96a3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonRpcSendPartyChat& operator=(JsonRpcSendPartyChat const&);
    JsonRpcSendPartyChat(JsonRpcSendPartyChat const&);
#endif // @header-generator platform
    JsonRpcSendPartyChat();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcSendPartyChat();
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
