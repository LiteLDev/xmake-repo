#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldTransferInitiationValidator.h"
#include "mc/world/WorldTransferResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevelListCache;
struct IGameServerShutdown;
struct TransferToLocalWorldContext;
// clang-format on

class WorldTransferInitiationValidator : public ::IWorldTransferInitiationValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown const&> mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>           mLevelListCache;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferInitiationValidator& operator=(WorldTransferInitiationValidator const&);
    WorldTransferInitiationValidator(WorldTransferInitiationValidator const&);
    WorldTransferInitiationValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldTransferInitiationValidator();

    virtual bool canTransferToServer(::WorldTransferResult&, ::IClientInstance const&) const;

    virtual bool canTransferToLocalWorld(::WorldTransferResult&, ::IClientInstance const&, ::TransferToLocalWorldContext const&) const;

    virtual bool canTransferToRealm(::WorldTransferResult&, ::IClientInstance const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canTransferToServer(::WorldTransferResult&, ::IClientInstance const&) const;

    MCNAPI bool $canTransferToLocalWorld(
        ::WorldTransferResult&,
        ::IClientInstance const&,
        ::TransferToLocalWorldContext const&
    ) const;

    MCNAPI bool $canTransferToRealm(::WorldTransferResult&, ::IClientInstance const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldTransferInitiationValidator {};
#endif // @header-generator platform
