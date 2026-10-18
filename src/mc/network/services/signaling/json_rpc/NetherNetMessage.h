#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

struct NetherNetMessage : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // NetherNetMessage inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // NetherNetMessage inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mNetherNetId;
        ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnke7d813;
        ::ll::UntypedStorage<8, 32> mUnke2a6ef;
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
    ::ll::TypedStorage<8, 48, ::JsonRpc::NetherNetMessage::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk510a56;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetherNetMessage& operator=(NetherNetMessage const&);
    NetherNetMessage(NetherNetMessage const&);
#endif // @header-generator platform
    NetherNetMessage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetherNetMessage(std::string, std::string);

    MCNAPI ~NetherNetMessage();
#else // @header-generator platform
    MCNAPI NetherNetMessage(::std::string netherNetId, ::std::string message);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string netherNetId, ::std::string message);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
