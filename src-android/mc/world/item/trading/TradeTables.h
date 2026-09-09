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
        ::ll::TypedStorage<8, 24, std::string>                         mPackName;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<TradeTable>>> mTradeTables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TradeTables::TradeTableLoadData _parseAndStoreTradeTable(
        ::Level&,
        ::ResourcePackManager*,
        ::Core::Path const&,
        bool,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const
    );

    MCNAPI ::TradeTable* fetchTable(std::string const&);

    MCNAPI void reload(::Level&, bool, ::IMinecraftEventing&);
    // NOLINTEND
};
