#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
class UserEntityIdentifierComponent;
struct NetworkIdentifierWithSubId;
// clang-format on

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubId;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PacketSender();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PacketSender() = default;
#else // @header-generator platform
    virtual ~PacketSender() /*override*/ = default;
#endif // @header-generator platform

    virtual bool isInitialized() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::Packet&) = 0;
#else // @header-generator platform
    virtual void send(::Packet& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&) = 0;
#else // @header-generator platform
    virtual void sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToServer(::Packet&) = 0;
#else // @header-generator platform
    virtual void sendToServer(::Packet& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId) = 0;
#else // @header-generator platform
    virtual void sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&) = 0;
#else // @header-generator platform
    virtual void sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;
#else // @header-generator platform
    virtual void sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&) = 0;
#else // @header-generator platform
    virtual void sendBroadcast(::Packet const& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendBroadcast(::Packet const&) = 0;
#else // @header-generator platform
    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush(::NetworkIdentifier const&, std::function<void()>&&) = 0;
#else // @header-generator platform
    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
