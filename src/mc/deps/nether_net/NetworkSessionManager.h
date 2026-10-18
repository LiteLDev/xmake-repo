#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/ESendType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/SignalingChannelId.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { class IIdentityAssertionGenerator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { class NetworkSession; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { class SimpleNetworkInterfaceImpl; }
namespace NetherNet { struct SessionState; }
namespace webrtc { class ScopedTaskSafetyDetached; }
#else // @header-generator platform
namespace NetherNet { struct NetworkID; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<NetherNet::NetworkSession>>> mSessions;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnkc9f574;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SessionList = std::vector<std::unique_ptr<NetherNet::NetworkSession>>;

    using LockedSessionList = std::tuple<
        std::vector<std::unique_ptr<NetherNet::NetworkSession>>&,
        const Bedrock::Threading::UniqueLock<std::recursive_mutex>&>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        NetworkSessionRecord& operator=(NetworkSessionRecord const&);
        NetworkSessionRecord(NetworkSessionRecord const&);
        NetworkSessionRecord();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mSessionCreationMutex;
    ::ll::TypedStorage<8, 24, std::map<NetherNet::NetworkID, NetherNet::NetworkSessionManager::NetworkSessionRecord>> mNetworkSessions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>> mIdentityGenerator;
    ::ll::TypedStorage<8, 8, ::NetherNet::SimpleNetworkInterfaceImpl&> mNetworkInterface;
    ::ll::UntypedStorage<8, 8> mSafeCapture;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk27e415;
    ::ll::UntypedStorage<8, 16> mUnk98d923;
    ::ll::UntypedStorage<8, 16> mUnkc30030;
    ::ll::UntypedStorage<8, 8>  mUnk829b85;
    ::ll::UntypedStorage<8, 8>  mUnkc4549c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NetworkSessionManager();
#else // @header-generator platform
    virtual ~NetworkSessionManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool CloseSessionWithReason(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError);

    MCNAPI ::gsl::not_null<NetherNet::NetworkSession*> FindOrCreateSpecificSession(
        ::NetherNet::NetworkID,
        unsigned long long,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&,
        bool
#else // @header-generator platform
    MCNAPI bool CloseSessionWithReason(
        ::NetherNet::NetworkID     networkIDRemote,
        uint64                     connectionId,
        ::NetherNet::ESessionError reason
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetherNet::NetworkSession* FindSpecificSession(
        ::NetherNet::NetworkID,
        unsigned long long,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&
    ) const;
#else // @header-generator platform
    MCNAPI ::gsl::not_null<::NetherNet::NetworkSession*> FindOrCreateSpecificSession(
        ::NetherNet::NetworkID                                          remoteId,
        uint64                                                          connectionId,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const& sessionsLock,
        bool                                                            disableTrickleIce
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool GetSessionState(::NetherNet::NetworkID, unsigned long long, ::NetherNet::SessionState*);

    MCNAPI bool IsPacketAvailable(::NetherNet::NetworkID, unsigned long long, uint*) const;

    MCNAPI void NotifyOnSessionOpen(::NetherNet::NetworkID, unsigned long long);
#else // @header-generator platform
    MCNAPI void NotifyOnSessionOpen(::NetherNet::NetworkID networkIDRemote, uint64 connectionId);
#endif // @header-generator platform

    MCNAPI void PeriodicDeadSessionCleanupOnSignalThread();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<void, NetherNet::ESessionError> SendToSignalingChannel(
        ::NetherNet::NetworkID,
        std::variant<
            NetherNet::ConnectRequest,
            NetherNet::ConnectResponse,
            NetherNet::ConnectError,
            NetherNet::CandidateAdd> const&,
        std::optional<NetherNet::SignalingChannelId>
#else // @header-generator platform
    MCNAPI ::NetherNet::ErrorOr<void, ::NetherNet::ESessionError> SendToSignalingChannel(
        ::NetherNet::NetworkID networkIDTo,
        ::std::variant<
            ::NetherNet::ConnectRequest,
            ::NetherNet::ConnectResponse,
            ::NetherNet::ConnectError,
            ::NetherNet::CandidateAdd> const&            signal,
        ::std::optional<::NetherNet::SignalingChannelId> preference
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
