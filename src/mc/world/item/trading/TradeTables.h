#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class ResourcePackManager;
struct TradeTable;
namespace Core { class Path; }
// clang-format on

class TradeTables {
public:
    // TradeTables inner types declare
    // clang-format off
    struct TradeTableLoadData;
    // clang-format on

    // TradeTables inner types define
    struct TradeTableLoadData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                         mPackName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                       mPackName;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<TradeTable>>> mTradeTables;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::TradeTable>>> mTradeTables;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TradeTables::TradeTableLoadData _parseAndStoreTradeTable(
        ::Level&,
        ::ResourcePackManager*,
        ::Core::Path const&,
        bool,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const
#else // @header-generator platform
    MCAPI ::TradeTables::TradeTableLoadData _parseAndStoreTradeTable(
        ::Level&                                                 level,
        ::ResourcePackManager*                                   resourceLoader,
        ::Core::Path const&                                      tradeTablePath,
        bool                                                     usingUpcomingCreatorFeaturesExperiment,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const validator
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TradeTable* fetchTable(std::string const&);
#else // @header-generator platform
    MCFOLD ::TradeTable* fetchTable(::std::string const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reload(::Level&, bool, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI void reload(::Level& level, bool usingUpcomingCreatorFeaturesExperiment, ::IMinecraftEventing& eventing);
#endif // @header-generator platform
    // NOLINTEND
};
