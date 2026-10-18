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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyPlayerTransactionSubject();
#else // @header-generator platform
    virtual bool isServerAuthBlockBreakingEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isServerAuthBlockBreakingEnabled() const;

    virtual bool destroyBlock(::BlockPos const&, uchar);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isServerAuthBlockBreakingEnabled() const;
#else // @header-generator platform
    MCAPI bool $isServerAuthBlockBreakingEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $destroyBlock(::BlockPos const&, uchar);
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);
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
