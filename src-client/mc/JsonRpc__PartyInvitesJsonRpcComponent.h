#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace JsonRpc { struct ReceivePartyInviteResult; }
// clang-format on

namespace JsonRpc {

class PartyInvitesJsonRpcComponent : public ::IJsonRpcComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mInterop;
    ::ll::UntypedStorage<8, 88> mReceivePartyInvitePublisher;
    ::ll::TypedStorage<8, 64, std::unique_ptr<std::string, std::function<void (std::string*)>>> mPartyInviteRpcRegistration;
    ::ll::UntypedStorage<8, 16> mTaskGroup;
    // clang-format on
    // NOLINTEND
};

} // namespace JsonRpc
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
