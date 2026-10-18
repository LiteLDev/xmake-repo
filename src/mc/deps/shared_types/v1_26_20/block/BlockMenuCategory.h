#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>             mCategory;
    ::ll::TypedStorage<8, 24, std::string> mGroupName;
    ::ll::TypedStorage<1, 1, bool>         mIsHiddenInCommands;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mGroupName;
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

} // namespace SharedTypes::v1_26_20::BlockDefinition
