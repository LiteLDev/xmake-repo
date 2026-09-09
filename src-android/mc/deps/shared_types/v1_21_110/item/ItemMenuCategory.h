#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct ItemMenuCategory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                            mCreativeCategory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mCreativeGroupName;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mIsHiddenInCommands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_110::ItemMenuCategory const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void upgrade(::SharedTypes::v1_21_60::ItemMenuCategory&, ::SharedTypes::v1_21_110::ItemMenuCategory&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
