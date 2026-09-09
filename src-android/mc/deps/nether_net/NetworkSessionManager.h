#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/SignalingChannelId.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class NetworkSession; }
namespace NetherNet { class SimpleNetworkInterfaceImpl; }
namespace NetherNet { struct SessionState; }
namespace webrtc { class ScopedTaskSafetyDetached; }
// clang-format on

namespace NetherNet {

class NetworkSessionManager : public ::NetherNet::ContextProxy {
public:
    // NetworkSessionManager inner types declare
    // clang-format off
    struct NetworkSessionRecord;
    // clang-format on

    // NetworkSessionManager inner types define
    struct NetworkSessionRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<NetherNet::NetworkSession>>> mSessions;
        // NOLINTEND
    };

    using SessionList = std::vector<std::unique_ptr<NetherNet::NetworkSession>>;

    using LockedSessionList = std::tuple<
        std::vector<std::unique_ptr<NetherNet::NetworkSession>>&,
        const Bedrock::Threading::UniqueLock<std::recursive_mutex>&>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mSessionCreationMutex;
    ::ll::TypedStorage<8, 24, std::map<NetherNet::NetworkID, NetherNet::NetworkSessionManager::NetworkSessionRecord>> mNetworkSessions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>> mIdentityGenerator;
    ::ll::TypedStorage<8, 8, ::NetherNet::SimpleNetworkInterfaceImpl&> mNetworkInterface;
    ::ll::UntypedStorage<8, 8> mSafeCapture;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSessionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CloseSessionWithReason(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError);

    MCNAPI ::gsl::not_null<NetherNet::NetworkSession*> FindOrCreateSpecificSession(
        ::NetherNet::NetworkID,
        unsigned long long,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&,
        bool
    );

    MCNAPI ::NetherNet::NetworkSession* FindSpecificSession(
        ::NetherNet::NetworkID,
        unsigned long long,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&
    ) const;

    MCNAPI bool GetSessionState(::NetherNet::NetworkID, unsigned long long, ::NetherNet::SessionState*);

    MCNAPI bool IsPacketAvailable(::NetherNet::NetworkID, unsigned long long, uint*) const;

    MCNAPI void NotifyOnSessionOpen(::NetherNet::NetworkID, unsigned long long);

    MCNAPI void PeriodicDeadSessionCleanupOnSignalThread();

    MCNAPI ::NetherNet::ErrorOr<void, NetherNet::ESessionError> SendToSignalingChannel(
        ::NetherNet::NetworkID,
        std::variant<
            NetherNet::ConnectRequest,
            NetherNet::ConnectResponse,
            NetherNet::ConnectError,
            NetherNet::CandidateAdd> const&,
        std::optional<NetherNet::SignalingChannelId>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
