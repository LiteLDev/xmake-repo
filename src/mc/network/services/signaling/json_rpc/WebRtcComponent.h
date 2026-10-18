#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/services/signaling/IJsonRpcComponent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace JsonRpc { class JsonRpcError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonRpc { class JsonRpcProvider; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonRpc { class ReceiveClientMessageResult; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace JsonRpc {

#if defined(LL_PLAT_A) // @header-generator platform
class WebRtcComponent : public ::IJsonRpcComponent, public ::std::enable_shared_from_this<JsonRpc::WebRtcComponent> {
#else // @header-generator platform
class WebRtcComponent : public ::IJsonRpcComponent, public ::std::enable_shared_from_this<::JsonRpc::WebRtcComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::string, std::function<void (std::string*)>>>> mMethodRegistrations;
    ::ll::TypedStorage<4, 40, std::mutex> mNetworkIdTranslationMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, PlayerMessaging::NetworkID>> mNetworkIdTranslationMap;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mInterop;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::JsonRpcProvider>> mProvider;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkbe99df;
    ::ll::UntypedStorage<8, 24> mUnk1bb34c;
    ::ll::UntypedStorage<8, 80> mUnkcc2ad6;
    ::ll::UntypedStorage<8, 64> mUnk2d2bc1;
    ::ll::UntypedStorage<8, 16> mUnk1c8606;
    ::ll::UntypedStorage<8, 16> mUnk6cd539;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WebRtcComponent& operator=(WebRtcComponent const&);
    WebRtcComponent(WebRtcComponent const&);
#endif // @header-generator platform
    WebRtcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WebRtcComponent();

    virtual void initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
#else // @header-generator platform
    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void sendTurnConfigRequest();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
