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

class JsonWebRtcNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // JsonWebRtcNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonWebRtcNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mInnerMessage;
        ::ll::TypedStorage<8, 24, std::string> mToPlayerId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkf9f0c6;
        ::ll::UntypedStorage<8, 32> mUnk57ce95;
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
    ::ll::TypedStorage<8, 48, ::JsonRpc::JsonWebRtcNotification::Params> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8ac12d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonWebRtcNotification& operator=(JsonWebRtcNotification const&);
    JsonWebRtcNotification(JsonWebRtcNotification const&);
#endif // @header-generator platform
    JsonWebRtcNotification();
};

} // namespace JsonRpc
