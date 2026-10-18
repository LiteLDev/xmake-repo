#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/Trade.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_21_30 { struct Trade; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                        mNumToSelect;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::Trade>> mTrades;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::TradeGroup& operator=(::SharedTypes::v1_21_30::TradeGroup const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_30::TradeGroup const&) const;

    MCNAPI ~TradeGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                            mNumToSelect;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::Trade>> mTrades;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
