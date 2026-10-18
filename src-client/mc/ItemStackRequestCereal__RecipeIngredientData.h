#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__EmptyItemDescriptorData.h"
#include "mc/ItemStackRequestCereal__ItemNameDescriptorData.h"
#include "mc/ItemStackRequestCereal__ItemTagDescriptorData.h"
#include "mc/ItemStackRequestCereal__MolangItemDescriptorData.h"

namespace ItemStackRequestCereal {

struct RecipeIngredientData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<ItemStackRequestCereal::EmptyItemDescriptorData, ItemStackRequestCereal::ItemNameDescriptorData, ItemStackRequestCereal::MolangItemDescriptorData, ItemStackRequestCereal::ItemTagDescriptorData>> mItemDescriptor;
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // clang-format on
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
