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

struct JsonRpcJoinPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcJoinPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcJoinPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkab4bef;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
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
    ::ll::TypedStorage<8, 24, ::JsonRpc::JsonRpcJoinPartyChat::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk63f23e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonRpcJoinPartyChat& operator=(JsonRpcJoinPartyChat const&);
    JsonRpcJoinPartyChat(JsonRpcJoinPartyChat const&);
#endif // @header-generator platform
    JsonRpcJoinPartyChat();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcJoinPartyChat();
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
