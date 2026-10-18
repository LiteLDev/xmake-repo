#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenAutoplaceBehaviour.h"
#include "mc/world/inventory/simulation/ContainerScreenSimulationCrafting.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct ContainerScreenActionResult;
struct ContainerValidationCraftResult;
struct ContainerValidationSlotData;
struct ItemTransferAmount;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
// clang-format on

class AnvilContainerScreenSimulation : public ::ContainerScreenSimulationCrafting {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mItemPreview;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemPreview;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AnvilContainerScreenSimulation();
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult
    tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeHalf(
        ::ContainerValidationSlotData const& dstSlot,
        ::ContainerValidationSlotData const& srcSlot
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);
#else // @header-generator platform
    virtual ::ContainerValidationCraftResult getCraftPreview() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _registerCoalesceOrder();
#else // @header-generator platform
    virtual void _registerCoalesceOrder() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _registerAutoPlaceOrder();

    virtual ::ContainerValidationCraftResult getCraftPreview();
    // clang-format on
#else // @header-generator platform
    virtual void _registerAutoPlaceOrder() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TypedServerNetId<RecipeNetIdTag, uint, 0> const
    _getRecipeNetIdForMapItems(::ItemStack const&, ::ItemStack const&) const;

    MCNAPI ::ContainerScreenActionResult
    _tryTransferCraft(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI void setItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void setItemPreview(::Bedrock::Safety::RedactableString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::RecipeNetId const
    _getRecipeNetIdForMapItems(::ItemStack const& inputStack, ::ItemStack const& materialStack) const;

    MCNAPI ::ContainerScreenActionResult
    _tryTransferCraft(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const& dstSlot);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryTakeAmount(
        ::ContainerValidationSlotData const& dstSlot,
        int                                  amount,
        ::ContainerValidationSlotData const& srcSlot
    );

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const& dstSlot, ::ContainerValidationSlotData const& srcSlot);

    MCNAPI ::ContainerScreenActionResult $tryAutoPlace(
        ::ContainerValidationSlotData const& srcSlot,
        ::ItemTransferAmount                 amount,
        ::ContainerScreenAutoplaceBehaviour  autoplaceBehaviour
    );

    MCNAPI ::ContainerValidationCraftResult $getCraftPreview();

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult
    $tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();

    MCNAPI ::ContainerValidationCraftResult $getCraftPreview();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
