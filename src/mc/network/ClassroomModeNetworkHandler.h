#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"

// auto generated forward declare list
// clang-format off
class Packet;
#if defined(LL_PLAT_A) // @header-generator platform
class RoleChecker;
#else // @header-generator platform
#endif // @header-generator platform
struct NetworkIdentifierWithSubId;
namespace Automation { class AutomationClient; }
// clang-format on

class ClassroomModeNetworkHandler : public ::NetEventCallback, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                            mAutomationClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RoleChecker>> mRoleChecker;
    ::ll::TypedStorage<8, 24, std::string>                 mTenantId;
    ::ll::TypedStorage<8, 24, std::string>                 mLastRequestAddress;
    ::ll::TypedStorage<1, 1, bool>                         mIsDedicatedServer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc48695;
    ::ll::UntypedStorage<8, 8>  mUnk269115;
    ::ll::UntypedStorage<8, 32> mUnkba2223;
    ::ll::UntypedStorage<8, 32> mUnkb72773;
    ::ll::UntypedStorage<1, 1>  mUnk7eb0cd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&);
#endif // @header-generator platform
    ClassroomModeNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ClassroomModeNetworkHandler();
#else // @header-generator platform
    virtual ~ClassroomModeNetworkHandler() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);
#else // @header-generator platform
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& id,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);
    // clang-format on
#else // @header-generator platform
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ClassroomModeNetworkHandler(bool);
#else // @header-generator platform
    MCNAPI explicit ClassroomModeNetworkHandler(bool isDedicatedServer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _connect(std::string const&);
#else // @header-generator platform
    MCNAPI void _connect(::std::string const& address);

#ifdef LL_PLAT_S
    MCNAPI void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(bool isDedicatedServer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IncomingPacketFilterResult
#if defined(LL_PLAT_A) // @header-generator platform
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);
#else // @header-generator platform
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize);
#endif // @header-generator platform

    MCNAPI ::OutgoingPacketFilterResult
#if defined(LL_PLAT_A) // @header-generator platform
    $allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);
#else // @header-generator platform
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);
#else // @header-generator platform
    MCNAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEnableQueueForMainThread();

    MCNAPI static void** $vftableForNetEventCallback();
#endif // @header-generator platform
    // NOLINTEND
};
