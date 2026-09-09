#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/ILegacyItemUseTransactionSubject.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class LegacyPlayerTransactionSubject : public ::ILegacyItemUseTransactionSubject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyPlayerTransactionSubject& operator=(LegacyPlayerTransactionSubject const&);
    LegacyPlayerTransactionSubject(LegacyPlayerTransactionSubject const&);
    LegacyPlayerTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyPlayerTransactionSubject();

    virtual bool isServerAuthBlockBreakingEnabled() const;

    virtual bool destroyBlock(::BlockPos const&, uchar);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isServerAuthBlockBreakingEnabled() const;

    MCNAPI bool $destroyBlock(::BlockPos const&, uchar);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
