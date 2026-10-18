#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/trading/TradeTier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Logger; }
#else // @header-generator platform
struct TradeTier;
#endif // @header-generator platform
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
// clang-format on

struct TradeTableData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<TradeTier>> mTiers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::TradeTier>> mTiers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    TradeTableData& operator=(TradeTableData const&);
    TradeTableData(TradeTableData const&);
#else // @header-generator platform
    TradeTableData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TradeTableData(::SharedTypes::v1_21_30::TradeTableData, ::ItemRegistryRef const, bool);

    MCNAPI ~TradeTableData();
#else // @header-generator platform
    MCAPI TradeTableData(
        ::SharedTypes::v1_21_30::TradeTableData parsedData,
        ::ItemRegistryRef const                 itemRegistry,
        bool                                    usingUpcomingCreatorFeaturesExperiment
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_30::TradeTableData, ::ItemRegistryRef const, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::SharedTypes::v1_21_30::TradeTableData parsedData,
        ::ItemRegistryRef const                 itemRegistry,
        bool                                    usingUpcomingCreatorFeaturesExperiment
    );
#endif // @header-generator platform
    // NOLINTEND
};
