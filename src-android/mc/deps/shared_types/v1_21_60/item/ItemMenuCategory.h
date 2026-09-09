#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_19_40/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_20 { struct ItemMenuCategory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                            mCreativeCategory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mCreativeGroupName;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mIsHiddenInCommands;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void
    upgrade(std::optional<SharedTypes::v1_20_20::ItemMenuCategory>&, ::SharedTypes::v1_21_60::ItemMenuCategory&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
