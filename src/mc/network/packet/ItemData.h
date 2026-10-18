#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/item/registry/ItemVersion.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
// clang-format on

struct ItemData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
#endif // @header-generator platform
    ::ll::TypedStorage<2, 2, short>           mId;
    ::ll::TypedStorage<1, 1, bool>            mIsComponentBased;
    ::ll::TypedStorage<4, 4, ::ItemVersion>   mItemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag>  mComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemData();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag>  mComponentData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ItemData> fromItemRegistry(::ItemRegistryRef const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::vector<::ItemData> fromItemRegistry(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND
};
