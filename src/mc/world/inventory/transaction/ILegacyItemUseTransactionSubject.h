#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ILegacyItemUseTransactionSubject {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ILegacyItemUseTransactionSubject();
#else // @header-generator platform
    virtual ~ILegacyItemUseTransactionSubject() = default;
#endif // @header-generator platform

    virtual bool isServerAuthBlockBreakingEnabled() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool destroyBlock(::BlockPos const&, uchar) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
