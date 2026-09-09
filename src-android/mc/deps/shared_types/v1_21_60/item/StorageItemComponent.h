#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct StorageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                               mNumSlots;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mBannedItems;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mAllowedItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::StorageItemComponent& operator=(::SharedTypes::v1_21_60::StorageItemComponent&&);

    MCNAPI ~StorageItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
