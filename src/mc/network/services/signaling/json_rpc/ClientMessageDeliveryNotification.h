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

struct ClientMessageDeliveryNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // ClientMessageDeliveryNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // ClientMessageDeliveryNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mMessageId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkba0bad;
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
    ::ll::TypedStorage<8, 24, ::JsonRpc::ClientMessageDeliveryNotification::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3d8fd1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ClientMessageDeliveryNotification& operator=(ClientMessageDeliveryNotification const&);
    ClientMessageDeliveryNotification(ClientMessageDeliveryNotification const&);
#endif // @header-generator platform
    ClientMessageDeliveryNotification();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ClientMessageDeliveryNotification(std::string);

    MCNAPI ~ClientMessageDeliveryNotification();
#else // @header-generator platform
    MCNAPI explicit ClientMessageDeliveryNotification(::std::string messageId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string messageId);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
