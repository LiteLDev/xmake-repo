#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BannerPattern;
class ItemStack;
class ItemStackBase;
// clang-format on

struct LoomScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mAddItem;
    ::ll::UntypedStorage<8, 48> mAddDye;
    ::ll::UntypedStorage<8, 48> mAddBannerPattern;
    ::ll::UntypedStorage<8, 48> mGetPatternIndex;
    ::ll::UntypedStorage<8, 48> mSetSelectedPattern;
    ::ll::UntypedStorage<8, 48> mGetResultItem;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlace;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlaceOne;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    ::ll::UntypedStorage<8, 48> mHandleGetItemStack;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BannerPattern;
class ItemStack;
class ItemStackBase;
// clang-format on

struct LoomScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddDye;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mAddBannerPattern;
    ::ll::TypedStorage<8, 64, ::std::function<int(::BannerPattern const*)>>                   mGetPatternIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mSetSelectedPattern;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>>                      mGetResultItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    // NOLINTEND
};
#else // @header-generator platform
struct LoomScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
