#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/trading/TradeTier.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
namespace Puv { class Logger; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
// clang-format on

struct TradeTableData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TradeTier>> mTiers;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTableData& operator=(TradeTableData const&);
    TradeTableData(TradeTableData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TradeTableData(::SharedTypes::v1_21_30::TradeTableData, ::ItemRegistryRef const, bool);

    MCNAPI ~TradeTableData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_30::TradeTableData, ::ItemRegistryRef const, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
