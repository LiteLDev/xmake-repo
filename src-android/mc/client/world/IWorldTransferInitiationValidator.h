#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/WorldTransferResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct TransferToLocalWorldContext;
// clang-format on

struct IWorldTransferInitiationValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldTransferInitiationValidator();

    virtual bool canTransferToServer(::WorldTransferResult&, ::IClientInstance const&) const = 0;

    virtual bool canTransferToLocalWorld(::WorldTransferResult&, ::IClientInstance const&, ::TransferToLocalWorldContext const&) const = 0;

    virtual bool canTransferToRealm(::WorldTransferResult&, ::IClientInstance const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
