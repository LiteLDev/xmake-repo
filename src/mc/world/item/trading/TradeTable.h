#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/trading/TradeTier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct TradeTableData;
namespace Core { class Path; }
#else // @header-generator platform
struct TradeTier;
#endif // @header-generator platform
// clang-format on

struct TradeTable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                       mPath;
    ::ll::TypedStorage<8, 24, std::vector<TradeTier>> mTiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::TradeTier>>        mTiers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TradeTable();
#else // @header-generator platform
#endif // @header-generator platform
};
