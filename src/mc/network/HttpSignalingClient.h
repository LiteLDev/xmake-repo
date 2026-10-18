#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class DispatcherInterface; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace NetherNet { struct NetworkID; }
#endif // @header-generator platform
// clang-format on

class HttpSignalingClient : public ::NetherNet::ISignalingInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 240, ::TaskGroup>           mTaskGroup;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mRemoteId;
    ::ll::TypedStorage<8, 24, std::string>            mServerUrl;
    ::ll::UntypedStorage<8, 24>                       mDispatcher;
    ::ll::UntypedStorage<8, 88>                       mEventDispatcher;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 336> mUnkabb525;
    ::ll::UntypedStorage<8, 24>  mUnkae26d7;
    ::ll::UntypedStorage<8, 32>  mUnkaf4e7e;
    ::ll::UntypedStorage<8, 24>  mUnk4ffa8d;
    ::ll::UntypedStorage<8, 128> mUnk2992c8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpSignalingClient& operator=(HttpSignalingClient const&);
    HttpSignalingClient(HttpSignalingClient const&);
#endif // @header-generator platform
    HttpSignalingClient();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HttpSignalingClient();
#else // @header-generator platform
    virtual ~HttpSignalingClient() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);
#else // @header-generator platform
    virtual void SendSignal(
        ::NetherNet::NetworkID                              from,
        ::NetherNet::NetworkID                              to,
        ::std::string const&                                signal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID,
        std::string const&,
        std::function<void(NetherNet::ESessionError)>&&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $SendSignal(
        ::NetherNet::NetworkID                              from,
        ::NetherNet::NetworkID                              to,
        ::std::string const&                                signal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    );

    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // NOLINTEND
#else // @header-generator platform
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
