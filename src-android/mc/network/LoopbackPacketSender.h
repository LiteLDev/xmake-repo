#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/PacketSender.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
class EntityContext;
class NetEventCallback;
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
class UserEntityIdentifierComponent;
// clang-format on

class LoopbackPacketSender : public ::PacketSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                           mNetwork;
    ::ll::TypedStorage<8, 24, std::vector<NetEventCallback*>>             mLoopbackCallbacks;
    ::ll::TypedStorage<8, 8, std::vector<OwnerPtr<EntityContext>> const*> mUserList;
    ::ll::TypedStorage<8, 24, std::vector<NetworkIdentifierWithSubId>>    mTempUserIds;
    // NOLINTEND

public:
    // prevent constructor by default
    LoopbackPacketSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoopbackPacketSender();

    virtual bool isInitialized() const;

    virtual void send(::Packet&);

    virtual void sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&);

    virtual void sendToServer(::Packet&);

    virtual void sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId);

    virtual void sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&);

    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    virtual void sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInitialized() const;

    MCNAPI void $send(::Packet&);

    MCNAPI void $sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&);

    MCNAPI void $sendToServer(::Packet&);

    MCNAPI void $sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId);

    MCNAPI void $sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&);

    MCNAPI void $sendToClients(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    MCNAPI void $sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&);

    MCNAPI void $sendBroadcast(::Packet const&);

    MCNAPI void $flush(::NetworkIdentifier const&, std::function<void()>&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
