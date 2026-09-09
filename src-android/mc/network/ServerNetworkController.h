#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IServerNetworkController.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
// clang-format on

struct ServerNetworkController : public ::IServerNetworkController {
public:
    // ServerNetworkController inner types define
    using CanUseAbility = std::function<bool(const ServerPlayer&, AbilitiesIndex)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::UntypedStorage<8, 48>    mCanUseAbility;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkController();

    virtual bool isDedicatedServer() const;

    virtual bool canChangePermission(::ServerPlayer const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDedicatedServer() const;

    MCNAPI bool $canChangePermission(::ServerPlayer const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
