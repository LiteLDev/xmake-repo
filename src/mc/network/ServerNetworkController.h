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
#if defined(LL_PLAT_A) // @header-generator platform
    // ServerNetworkController inner types define
    using CanUseAbility = std::function<bool(const ServerPlayer&, AbilitiesIndex)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::UntypedStorage<8, 48>    mCanUseAbility;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk522e4e;
    ::ll::UntypedStorage<8, 64> mUnk733c97;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerNetworkController& operator=(ServerNetworkController const&);
    ServerNetworkController(ServerNetworkController const&);
#endif // @header-generator platform
    ServerNetworkController();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerNetworkController();
#else // @header-generator platform
    virtual bool isDedicatedServer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDedicatedServer() const;

    virtual bool canChangePermission(::ServerPlayer const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool canChangePermission(::ServerPlayer const& player) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDedicatedServer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangePermission(::ServerPlayer const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $canChangePermission(::ServerPlayer const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
