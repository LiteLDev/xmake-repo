#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCreativeGroupName;
    ::ll::UntypedStorage<1, 1>             mCreativeCategory;
    ::ll::TypedStorage<1, 1, bool>         mIsHiddenInCommands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                               mCreativeGroupName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsHiddenInCommands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockMenuCategory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
