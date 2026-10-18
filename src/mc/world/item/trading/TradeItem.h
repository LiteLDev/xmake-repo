#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
// clang-format on

struct TradeItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                             itemId;
    ::ll::TypedStorage<4, 4, int>                                             itemAux;
    ::ll::TypedStorage<4, 4, int>                                             count_min;
    ::ll::TypedStorage<4, 4, int>                                             count_max;
    ::ll::TypedStorage<4, 4, float>                                           price_multiplier;
    ::ll::TypedStorage<8, 24, std::string>                                    originalName;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                             filter;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemFunction>>> functions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                   itemId;
    ::ll::TypedStorage<4, 4, int>                                                   itemAux;
    ::ll::TypedStorage<4, 4, int>                                                   count_min;
    ::ll::TypedStorage<4, 4, int>                                                   count_max;
    ::ll::TypedStorage<4, 4, float>                                                 price_multiplier;
    ::ll::TypedStorage<8, 32, ::std::string>                                        originalName;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                   filter;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemFunction>>> functions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
    TradeItem(TradeItem const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TradeItem();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TradeItem();
#else // @header-generator platform
    MCAPI TradeItem(::TradeItem&& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TradeItem();
#else // @header-generator platform
    MCAPI ::TradeItem& operator=(::TradeItem&& item);

    MCAPI ~TradeItem();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::TradeItem&& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
