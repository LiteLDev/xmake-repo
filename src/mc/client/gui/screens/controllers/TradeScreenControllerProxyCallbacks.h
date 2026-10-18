#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
// clang-format on

struct TradeScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mHandleAutoPlace;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlaceOne;
    ::ll::UntypedStorage<8, 48> mHandleTakeAll;
    ::ll::UntypedStorage<8, 48> mHandlePlaceAll;
    ::ll::UntypedStorage<8, 48> mHandlePlaceOne;
    ::ll::UntypedStorage<8, 48> mHandleGetItemStack;
    ::ll::UntypedStorage<8, 48> mHandleGetVisualItemStack;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    ::ll::UntypedStorage<8, 48> mSetRecipeIndex;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
// clang-format on

struct TradeScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
                                                          mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>    mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>> mSetRecipeIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct TradeScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
