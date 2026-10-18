#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    using SendFlyingItemCallback = ::std::function<
        void(::ItemStackBase const&, ::std::string const&, int, ::std::string const&, int, ::FadeInIconBehavior)>;

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
    MCAPI void handleRepeatCraft(
        ::ContainerScreenController&                    containerScreenController,
        ::std::shared_ptr<::ContainerManagerController> containerManagerController,
        ::std::string const&                            collectionName,
        int                                             collectionIndex,
        ::ItemStackBase const&                          itemInSlot,
        ::std::function<
            void(::ItemStackBase const&, ::std::string const&, int, ::std::string const&, int, ::FadeInIconBehavior)>
            sendFlyingItem
    );
    // NOLINTEND
};
#else // @header-generator platform
struct RepeatCraftButtonData {};
#endif // @header-generator platform
#endif // @header-generator platform
