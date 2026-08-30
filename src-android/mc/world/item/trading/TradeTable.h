#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/item/trading/TradeTier.h"

// auto generated forward declare list
// clang-format off
struct TradeTableData;
namespace Core { class Path; }
// clang-format on

struct TradeTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                       mPath;
    ::ll::TypedStorage<8, 24, std::vector<TradeTier>> mTiers;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTable();
};
