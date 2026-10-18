#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/Connector.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { struct NetworkID; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

struct ClientNetherNetConnector : public ::NetherNetConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 648> mConnectedGameInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientNetherNetConnector();

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);

    virtual void disconnect();

    virtual bool isServer() const;

    virtual bool closeSessionWithUser(::NetherNet::NetworkID, unsigned long long);

    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    virtual void OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientNetherNetConnector(::NetherNetTransportFactory const&, ::Connector::ConnectionCallbacks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNetTransportFactory const&, ::Connector::ConnectionCallbacks&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI void $setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        std::shared_ptr<NetherNet::IIdentityAssertionGenerator>
    );

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI bool $closeSessionWithUser(::NetherNet::NetworkID, unsigned long long);

    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientNetherNetConnector {};
#endif // @header-generator platform
