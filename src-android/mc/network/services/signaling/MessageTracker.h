#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/network/services/signaling/MessagePerformance.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class ISignalingServiceTelemetry;
class MessagePerformance;
namespace JsonRpc { class JsonRpcError; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class MessageTracker {
public:
    // MessageTracker inner types declare
    // clang-format off
    struct MessageStatus;
    // clang-format on

    // MessageTracker inner types define
    struct MessageStatus {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mSentAt;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mAcceptedAt;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mDeliveredAt;
        ::ll::UntypedStorage<8, 48> mOnComplete;
        ::ll::UntypedStorage<1, 16> mIsP2P;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();
    };

    using SendSignalCallback = std::function<void(NetherNet::ESessionError)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ISignalingServiceTelemetry>> const> mTelemetry;
    ::ll::TypedStorage<4, 40, std::mutex> mTrackedMessageLock;
    ::ll::TypedStorage<4, 40, std::mutex> mIgnoredMessagesLock;
    ::ll::UntypedStorage<8, 48> mTrackedMessages;
    ::ll::UntypedStorage<8, 48> mIgnoredMessages;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mIgnoredMessageDuration;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextIgnoredMessageCleanupTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MessageTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _complete(::NetherNet::ESessionError, ::mce::UUID, ::MessageTracker::MessageStatus&&, ::MessagePerformance::Status);

    MCNAPI void _continueTracking(::mce::UUID, ::MessageTracker::MessageStatus&&);

    MCNAPI void _tryGetValue(std::string const&, std::function<void(mce::UUID, MessageTracker::MessageStatus&&)>&&);

    MCNAPI void add(std::string const&, std::function<void(NetherNet::ESessionError)>&&, bool);

    MCNAPI void messageAccepted(std::string const&);

    MCNAPI void messageError(std::string const&, ::JsonRpc::JsonRpcError const&);

    MCNAPI void
    messageSent(std::optional<PlayerMessaging::NetworkID>, std::string const&, std::string const&, std::error_code);
    // NOLINTEND
};
