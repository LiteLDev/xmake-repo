#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonRpc { class JsonRpcProvider; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonRpc { struct ReceiveChatResult; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace JsonRpc {

class PartyChatJsonRpcComponent : public ::IJsonRpcComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mInterop;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::JsonRpcProvider>> mProvider;
    ::ll::UntypedStorage<8, 88>                                          mReceiveChatPublisher;
    ::ll::UntypedStorage<8, 64>                                          mChatMessageRpcRegistration;
    ::ll::UntypedStorage<8, 16>                                          mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnk49d86e;
    ::ll::UntypedStorage<8, 16>  mUnk4c5691;
    ::ll::UntypedStorage<8, 128> mUnkfff689;
    ::ll::UntypedStorage<8, 72>  mUnke78730;
    ::ll::UntypedStorage<8, 8>   mUnk9d8ab8;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PartyChatJsonRpcComponent& operator=(PartyChatJsonRpcComponent const&);
    PartyChatJsonRpcComponent(PartyChatJsonRpcComponent const&);
    PartyChatJsonRpcComponent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PartyChatJsonRpcComponent& operator=(PartyChatJsonRpcComponent const&);
    PartyChatJsonRpcComponent(PartyChatJsonRpcComponent const&);

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PartyChatJsonRpcComponent();
#else // @header-generator platform
    virtual ~PartyChatJsonRpcComponent() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
#else // @header-generator platform
    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PartyChatJsonRpcComponent();

    MCNAPI ::Bedrock::PubSub::Connector<void(const JsonRpc::ReceiveChatResult&)>& getReceiveChatConnector();

    MCNAPI ::Bedrock::Threading::Async<std::error_code> joinChannel(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<std::error_code> leaveChannel(std::string const&, std::string const&);

    MCNAPI void sendMessage(std::string const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI PartyChatJsonRpcComponent();

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> joinChannel(::std::string const& partyId);

    MCNAPI ::Bedrock::Threading::Async<::std::error_code>
    leaveChannel(::std::string const& partyId, ::std::string const& xuid);

    MCNAPI void sendMessage(::std::string const& partyId, ::std::string const& message);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
