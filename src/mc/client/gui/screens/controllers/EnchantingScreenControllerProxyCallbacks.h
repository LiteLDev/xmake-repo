#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct EnchantingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mPlaceAllToInputSlot;
    ::ll::UntypedStorage<8, 48> mGetInputItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EnchantingScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct EnchantingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                mPlaceAllToInputSlot;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>> mGetInputItem;
    // NOLINTEND
};
#else // @header-generator platform
struct EnchantingScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
