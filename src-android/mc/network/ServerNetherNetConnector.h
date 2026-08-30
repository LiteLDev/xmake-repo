#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/Connector.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
class IIdentityAssertionVerifier;
class NetherNetTransportFactory;
class PrivateKeyManager;
struct ConnectionDefinition;
namespace NetherNet { struct NetworkID; }
// clang-format on

struct ServerNetherNetConnector : public ::NetherNetConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mAssertionVerifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerNetherNetConnector();

    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    virtual void disconnect();

    virtual bool isServer() const;

    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    virtual void OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetherNetConnector(
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        ::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>,
        std::optional<NetherNet::NetworkID>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        ::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>,
        std::optional<NetherNet::NetworkID>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

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
