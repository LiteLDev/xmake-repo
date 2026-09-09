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
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<2, 2, short>           mId;
    ::ll::TypedStorage<1, 1, bool>            mIsComponentBased;
    ::ll::TypedStorage<4, 4, ::ItemVersion>   mItemVersion;
    ::ll::TypedStorage<8, 32, ::CompoundTag>  mComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ItemData> fromItemRegistry(::ItemRegistryRef const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
