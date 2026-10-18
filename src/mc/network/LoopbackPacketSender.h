#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifierWithSubId.h"
#else // @header-generator platform
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#endif // @header-generator platform
#include "mc/network/PacketSender.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
#else // @header-generator platform
#endif // @header-generator platform
class EntityContext;
class NetEventCallback;
class NetworkIdentifier;
class Packet;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerNetworkSystem;
#else // @header-generator platform
#endif // @header-generator platform
class UserEntityIdentifierComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct NetworkIdentifierWithSubId;
#endif // @header-generator platform
// clang-format on

class LoopbackPacketSender : public ::PacketSender {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                           mNetwork;
    ::ll::TypedStorage<8, 24, std::vector<NetEventCallback*>>             mLoopbackCallbacks;
    ::ll::TypedStorage<8, 8, std::vector<OwnerPtr<EntityContext>> const*> mUserList;
    ::ll::TypedStorage<8, 24, std::vector<NetworkIdentifierWithSubId>>    mTempUserIds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                 mNetwork;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetEventCallback*>>               mLoopbackCallbacks;
    ::ll::TypedStorage<8, 8, ::std::vector<::OwnerPtr<::EntityContext>> const*> mUserList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>>      mTempUserIds;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LoopbackPacketSender();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LoopbackPacketSender();
#else // @header-generator platform
    virtual bool isInitialized() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInitialized() const;
#else // @header-generator platform
    virtual void send(::Packet& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::Packet&);
#else // @header-generator platform
    virtual void sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&);
#else // @header-generator platform
    virtual void sendToServer(::Packet& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToServer(::Packet&);
#else // @header-generator platform
    virtual void
    sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId);
#else // @header-generator platform
    virtual void
    sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&);
#else // @header-generator platform
    virtual void
    sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    virtual void sendBroadcast(::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&);
#else // @header-generator platform
    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBroadcast(::Packet const&);

    virtual void flush(::NetworkIdentifier const&, std::function<void()>&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoopbackPacketSender(::SubClientId, ::ClientNetworkSystem&);

    MCNAPI LoopbackPacketSender(::SubClientId, ::ServerNetworkSystem&);

    MCNAPI void setUserList(std::vector<OwnerPtr<EntityContext>> const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientId, ::ClientNetworkSystem&);

    MCNAPI void* $ctor(::SubClientId, ::ServerNetworkSystem&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInitialized() const;
#else // @header-generator platform
    MCAPI bool $isInitialized() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(::Packet&);
#else // @header-generator platform
    MCAPI void $send(::Packet& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&);
#else // @header-generator platform
    MCAPI void $sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendToServer(::Packet&);
#else // @header-generator platform
    MCAPI void $sendToServer(::Packet& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId);
#else // @header-generator platform
    MCAPI void $sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&);
#else // @header-generator platform
    MCAPI void $sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendToClients(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    MCAPI void $sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&);
#else // @header-generator platform
    MCAPI void $sendBroadcast(::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendBroadcast(::Packet const&);
#else // @header-generator platform
    MCAPI void $sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flush(::NetworkIdentifier const&, std::function<void()>&&);
#else // @header-generator platform
    MCAPI void $flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
