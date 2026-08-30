#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__EmptyItemDescriptorData.h"
#include "mc/ItemStackRequestCereal__ItemNameDescriptorData.h"
#include "mc/ItemStackRequestCereal__ItemTagDescriptorData.h"
#include "mc/ItemStackRequestCereal__MolangItemDescriptorData.h"

namespace ItemStackRequestCereal {

struct NetworkItemInstanceDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<ItemStackRequestCereal::EmptyItemDescriptorData, ItemStackRequestCereal::ItemNameDescriptorData, ItemStackRequestCereal::MolangItemDescriptorData, ItemStackRequestCereal::ItemTagDescriptorData>> mItemDescriptor;
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    ::ll::TypedStorage<4, 4, uint> mBlockRuntimeId;
    ::ll::TypedStorage<8, 24, std::string> mUserDataBuffer;
    // clang-format on
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
