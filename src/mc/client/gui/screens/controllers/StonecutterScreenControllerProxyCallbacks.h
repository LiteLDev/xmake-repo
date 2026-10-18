#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
// clang-format on

struct StonecutterScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetContainerController;
    ::ll::UntypedStorage<8, 48> mHandleRecipeSelect;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlace;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlaceOne;
    ::ll::UntypedStorage<8, 48> mHandleGetVisualItemStack;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    ::ll::UntypedStorage<8, 48> mHandleGetItemStack;
    ::ll::UntypedStorage<8, 48> mHandleTakeAll;
    ::ll::UntypedStorage<8, 48> mHandlePlaceAll;
    ::ll::UntypedStorage<8, 48> mGetStoneIndexForItem;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
// clang-format on

struct StonecutterScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                    mHandleRecipeSelect;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>              mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>              mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
                                                                                              mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<int(::ItemStack const&)>>                       mGetStoneIndexForItem;
    // NOLINTEND
};
#else // @header-generator platform
struct StonecutterScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
