#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/deps/resource_processing/category/TraitsMerger.h"
#include "mc/world/item/trading/trade_table_load_system/TradeTableDataLegacySlice.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
// clang-format on

namespace TradeTableLoadSystem {

struct TradeTableDataLoaderTraits : public ::Bedrock::Resources::TraitsMerger<
                                        TradeTableLoadSystem::LegacyTraits,
                                        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)4>,
                                        nullptr> {};

} // namespace TradeTableLoadSystem
