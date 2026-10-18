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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mAssertionVerifier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7a1c8a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerNetherNetConnector& operator=(ServerNetherNetConnector const&);
    ServerNetherNetConnector(ServerNetherNetConnector const&);
#endif // @header-generator platform
    ServerNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerNetherNetConnector();
#else // @header-generator platform
    virtual ~ServerNetherNetConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disconnect();
#else // @header-generator platform
    virtual void disconnect() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isServer() const;
#else // @header-generator platform
    virtual bool isServer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<bool>
    OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool);
    // clang-format on
#else // @header-generator platform
    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetherNetConnector(
#if defined(LL_PLAT_A) // @header-generator platform
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        ::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>,
        std::optional<NetherNet::NetworkID>
#else // @header-generator platform
        ::NetherNetTransportFactory const&                               factory,
        ::Connector::ConnectionCallbacks&                                callbacks,
        ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>> clientIdentityVerifier,
        ::std::optional<::NetherNet::NetworkID>                          networkID
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        ::gsl::not_null<std::shared_ptr<IIdentityAssertionVerifier>>,
        std::optional<NetherNet::NetworkID>
#else // @header-generator platform
        ::NetherNetTransportFactory const&                               factory,
        ::Connector::ConnectionCallbacks&                                callbacks,
        ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>> clientIdentityVerifier,
        ::std::optional<::NetherNet::NetworkID>                          networkID
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    MCNAPI bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);
#endif // @header-generator platform

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<bool> $OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );
#endif // @header-generator platform

    MCNAPI ::Bedrock::Threading::Async<bool>
#if defined(LL_PLAT_A) // @header-generator platform
    $OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
#else // @header-generator platform
    $OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool);
#else // @header-generator platform
    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForConnector();
#endif // @header-generator platform
    // NOLINTEND
};
