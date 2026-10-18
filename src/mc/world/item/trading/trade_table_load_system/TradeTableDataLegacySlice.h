#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/TradeTableData.h"

namespace TradeTableLoadSystem {

struct TradeTableDataLegacySlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_30::TradeTableData> mData;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_30::TradeTableData
    upgrade(::TradeTableLoadSystem::TradeTableDataLegacySlice&& legacySlice);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace TradeTableLoadSystem
