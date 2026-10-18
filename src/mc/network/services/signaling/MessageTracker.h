#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/network/services/signaling/MessagePerformance.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/flat_map.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ISignalingServiceTelemetry;
class MessagePerformance;
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonRpc { class JsonRpcError; }
namespace PlayerMessaging { struct NetworkID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace mce { class UUID; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mSentAt;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mAcceptedAt;
        ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mDeliveredAt;
        ::ll::UntypedStorage<8, 48> mOnComplete;
        ::ll::UntypedStorage<1, 16> mIsP2P;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnke1b276;
        ::ll::UntypedStorage<8, 16> mUnkc4ec43;
        ::ll::UntypedStorage<8, 16> mUnkff686d;
        ::ll::UntypedStorage<8, 64> mUnk8f7071;
        ::ll::UntypedStorage<1, 1>  mUnk8a6cb0;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SendSignalCallback = std::function<void(NetherNet::ESessionError)>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ISignalingServiceTelemetry>> const> mTelemetry;
    ::ll::TypedStorage<4, 40, std::mutex> mTrackedMessageLock;
    ::ll::TypedStorage<4, 40, std::mutex> mIgnoredMessagesLock;
    ::ll::UntypedStorage<8, 48> mTrackedMessages;
    ::ll::UntypedStorage<8, 48> mIgnoredMessages;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mIgnoredMessageDuration;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextIgnoredMessageCleanupTime;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk3969f8;
    ::ll::UntypedStorage<8, 80> mUnkc507e5;
    ::ll::UntypedStorage<8, 80> mUnk3dedd3;
    ::ll::UntypedStorage<8, 48> mUnkbcdda6;
    ::ll::UntypedStorage<8, 48> mUnkdc3254;
    ::ll::UntypedStorage<8, 8>  mUnkc75976;
    ::ll::UntypedStorage<8, 8>  mUnk11e362;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MessageTracker& operator=(MessageTracker const&);
    MessageTracker(MessageTracker const&);
#endif // @header-generator platform
    MessageTracker();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _complete(::NetherNet::ESessionError, ::mce::UUID, ::MessageTracker::MessageStatus&&, ::MessagePerformance::Status);
#else // @header-generator platform
    MCNAPI void _complete(
        ::NetherNet::ESessionError        result,
        ::mce::UUID                       key,
        ::MessageTracker::MessageStatus&& value,
        ::MessagePerformance::Status      status
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _continueTracking(::mce::UUID, ::MessageTracker::MessageStatus&&);
#else // @header-generator platform
    MCNAPI void _continueTracking(::mce::UUID key, ::MessageTracker::MessageStatus&& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryGetValue(std::string const&, std::function<void(mce::UUID, MessageTracker::MessageStatus&&)>&&);

    MCNAPI void add(std::string const&, std::function<void(NetherNet::ESessionError)>&&, bool);

    MCNAPI void messageAccepted(std::string const&);

    MCNAPI void messageError(std::string const&, ::JsonRpc::JsonRpcError const&);
#else // @header-generator platform
    MCNAPI void _tryGetValue(
        ::std::string const&                                                    messageId,
        ::std::function<void(::mce::UUID, ::MessageTracker::MessageStatus&&)>&& fn
    );
#endif // @header-generator platform

    MCNAPI void
#if defined(LL_PLAT_A) // @header-generator platform
    messageSent(std::optional<PlayerMessaging::NetworkID>, std::string const&, std::string const&, std::error_code);
#else // @header-generator platform
    add(::std::string const& messageId, ::std::function<void(::NetherNet::ESessionError)>&& onComplete, bool isP2P);

    MCNAPI void messageAccepted(::std::string const& messageId);

    MCNAPI void messageError(::std::string const& messageId, ::JsonRpc::JsonRpcError const& error);

    MCNAPI void messageSent(
        ::std::optional<::PlayerMessaging::NetworkID> to,
        ::std::string const&                          message,
        ::std::string const&                          messageId,
        ::std::error_code                             error
    );
#endif // @header-generator platform
    // NOLINTEND
};
