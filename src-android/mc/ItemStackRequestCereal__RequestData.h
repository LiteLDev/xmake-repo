#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ItemStackRequestCereal__BeaconPaymentActionData.h"
#include "mc/ItemStackRequestCereal__ConsumeActionData.h"
#include "mc/ItemStackRequestCereal__CraftCreativeActionData.h"
#include "mc/ItemStackRequestCereal__CraftLoomActionData.h"
#include "mc/ItemStackRequestCereal__CraftNonImplementedActionData.h"
#include "mc/ItemStackRequestCereal__CraftRecipeActionData.h"
#include "mc/ItemStackRequestCereal__CraftRecipeAutoActionData.h"
#include "mc/ItemStackRequestCereal__CraftRecipeOptionalActionData.h"
#include "mc/ItemStackRequestCereal__CraftRepairAndDisenchantActionData.h"
#include "mc/ItemStackRequestCereal__CraftResultsActionData.h"
#include "mc/ItemStackRequestCereal__CreateActionData.h"
#include "mc/ItemStackRequestCereal__DestroyActionData.h"
#include "mc/ItemStackRequestCereal__DropActionData.h"
#include "mc/ItemStackRequestCereal__LabTableCombineActionData.h"
#include "mc/ItemStackRequestCereal__MineBlockActionData.h"
#include "mc/ItemStackRequestCereal__PlaceActionData.h"
#include "mc/ItemStackRequestCereal__SwapActionData.h"
#include "mc/ItemStackRequestCereal__TakeActionData.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

namespace ItemStackRequestCereal {

struct RequestData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 16> mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ItemStackRequestCereal::TakeActionData, ItemStackRequestCereal::PlaceActionData, ItemStackRequestCereal::SwapActionData, ItemStackRequestCereal::DropActionData, ItemStackRequestCereal::DestroyActionData, ItemStackRequestCereal::ConsumeActionData, ItemStackRequestCereal::CreateActionData, ItemStackRequestCereal::LabTableCombineActionData, ItemStackRequestCereal::BeaconPaymentActionData, ItemStackRequestCereal::MineBlockActionData, ItemStackRequestCereal::CraftRecipeActionData, ItemStackRequestCereal::CraftRecipeAutoActionData, ItemStackRequestCereal::CraftCreativeActionData, ItemStackRequestCereal::CraftRecipeOptionalActionData, ItemStackRequestCereal::CraftRepairAndDisenchantActionData, ItemStackRequestCereal::CraftLoomActionData, ItemStackRequestCereal::CraftNonImplementedActionData, ItemStackRequestCereal::CraftResultsActionData>>> mActions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin> mStringsToFilterOrigin;
    // clang-format on
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
