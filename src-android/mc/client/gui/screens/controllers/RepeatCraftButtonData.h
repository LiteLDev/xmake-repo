#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
class ContainerScreenController;
class ItemStackBase;
// clang-format on

struct RepeatCraftButtonData {
public:
    // RepeatCraftButtonData inner types define
    using SendFlyingItemCallback =
        std::function<void(const ItemStackBase&, const std::string&, int, const std::string&, int, FadeInIconBehavior)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInSlot;
    ::ll::TypedStorage<4, 4, int>              mLastStartHeldTime;
    ::ll::TypedStorage<4, 4, int>              mNumberOfItemsCrafted;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handleRepeatCraft(
        ::ContainerScreenController&,
        std::shared_ptr<ContainerManagerController>,
        std::string const&,
        int,
        ::ItemStackBase const&,
        std::function<void(const ItemStackBase&, const std::string&, int, const std::string&, int, FadeInIconBehavior)>
    );

    MCNAPI void reset();
    // NOLINTEND
};
