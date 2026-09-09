#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
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
// clang-format on

class CartographyContainerScreenSimulation : public ::ContainerScreenSimulationCrafting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<4, 4, ::MapOutputType>                      mMapOutputType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CartographyContainerScreenSimulation();

    virtual ::ContainerScreenActionResult tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryTakeHalf(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    virtual ::ContainerScreenActionResult tryAutoPlace(::ContainerValidationSlotData const&, ::ItemTransferAmount, ::ContainerScreenAutoplaceBehaviour);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();

    virtual ::ContainerValidationCraftResult getCraftPreview();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TypedServerNetId<RecipeNetIdTag, uint, 0> _getRecipeNetId(::ItemStack const&, ::ItemStack const&);

    MCNAPI ::ContainerScreenActionResult
    _tryTransferCraft(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

    MCNAPI ::MapOutputType getMapOutputType() const;

    MCNAPI void setItemName(::Bedrock::Safety::RedactableString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerScreenActionResult
    $tryTakeAmount(::ContainerValidationSlotData const&, int, ::ContainerValidationSlotData const&);

    MCNAPI ::ContainerScreenActionResult
    $tryTakeAll(::ContainerValidationSlotData const&, ::ContainerValidationSlotData const&);

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
    // NOLINTEND
};
