#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/ItemData.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemData;
#endif // @header-generator platform
// clang-format on

struct ItemRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemData>> mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemData>> mItems;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemRegistryPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemRegistryPacketPayload(::ItemRegistryRef const);

    MCNAPI ~ItemRegistryPacketPayload();
#else // @header-generator platform
    MCAPI explicit ItemRegistryPacketPayload(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemRegistryRef const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND
};
