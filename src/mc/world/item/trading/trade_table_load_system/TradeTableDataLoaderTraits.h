#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/deps/resource_processing/category/TraitsMerger.h"
#include "mc/world/item/trading/trade_table_load_system/TradeTableDataLegacySlice.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace TradeTableLoadSystem {

#if defined(LL_PLAT_A) // @header-generator platform
struct TradeTableDataLoaderTraits : public ::Bedrock::Resources::TraitsMerger<
                                        TradeTableLoadSystem::LegacyTraits,
                                        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)4>,
                                        nullptr> {};
#else // @header-generator platform
struct TradeTableDataLoaderTraits {};
#endif // @header-generator platform

} // namespace TradeTableLoadSystem
