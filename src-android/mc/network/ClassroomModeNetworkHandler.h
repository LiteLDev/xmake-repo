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
class RoleChecker;
struct NetworkIdentifierWithSubId;
namespace Automation { class AutomationClient; }
// clang-format on

class ClassroomModeNetworkHandler : public ::NetEventCallback, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                            mAutomationClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RoleChecker>> mRoleChecker;
    ::ll::TypedStorage<8, 24, std::string>                 mTenantId;
    ::ll::TypedStorage<8, 24, std::string>                 mLastRequestAddress;
    ::ll::TypedStorage<1, 1, bool>                         mIsDedicatedServer;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomModeNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClassroomModeNetworkHandler();

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);

    virtual ::OutgoingPacketFilterResult allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClassroomModeNetworkHandler(bool);

    MCNAPI void _connect(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, ulong);

    MCNAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
