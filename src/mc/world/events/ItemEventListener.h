#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStackBase;
class Player;
struct ItemNotificationEvent;
// clang-format on

class ItemEventListener {
public:
    // ItemEventListener inner types define
    using EventType = ::ItemNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onInventoryItemOpened(bool);
#else // @header-generator platform
    virtual ::EventResult onInventoryItemOpened(bool workbench);
#endif // @header-generator platform

    virtual ::EventResult onInventoryItemClosed();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemTransferredFromContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    virtual ::EventResult
    onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemTransferredToContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    virtual ::EventResult
    onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPreviewItemPopulatedInContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    virtual ::EventResult
    onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onInventoryLayoutSelected(int, int);
#else // @header-generator platform
    virtual ::EventResult onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const&);
#else // @header-generator platform
    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onRecipeSelected(::ItemStackBase const&);
#else // @header-generator platform
    virtual ::EventResult onRecipeSelected(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);
#else // @header-generator platform
    virtual ::EventResult
    onItemSmelted(::Player& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemSpawningActor(::Actor const&);
#else // @header-generator platform
    virtual ::EventResult onItemSpawningActor(::Actor const& spawningActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemSpawnedActor(::ItemStackBase const&, ::Actor const&);
#else // @header-generator platform
    virtual ::EventResult onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemModifiedActor(::ItemStackBase const&, ::Actor const&);
#else // @header-generator platform
    virtual ::EventResult onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemSelectedSlot(int);
#else // @header-generator platform
    virtual ::EventResult onItemSelectedSlot(int slot);
#endif // @header-generator platform

    virtual ::EventResult onItemSelected(::ItemStackBase const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onItemDefinitionEventTriggered(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    virtual ::EventResult onItemDefinitionEventTriggered(::ItemStackBase const& item, ::std::string const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ItemNotificationEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ItemNotificationEvent const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onInventoryItemOpened(bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onInventoryItemOpened(bool workbench);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onInventoryItemClosed();
#else // @header-generator platform
    MCFOLD ::EventResult $onInventoryItemClosed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemTransferredFromContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemTransferredToContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPreviewItemPopulatedInContainer(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onInventoryLayoutSelected(int, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onRecipeSelected(::ItemStackBase const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onRecipeSelected(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onItemSmelted(::Player& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemSpawningActor(::Actor const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemSpawningActor(::Actor const& spawningActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemSpawnedActor(::ItemStackBase const&, ::Actor const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemModifiedActor(::ItemStackBase const&, ::Actor const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemSelectedSlot(int);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemSelectedSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemSelected(::ItemStackBase const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemSelected(::ItemStackBase const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onItemDefinitionEventTriggered(::ItemStackBase const&, std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onItemDefinitionEventTriggered(::ItemStackBase const& item, ::std::string const& event);


#endif // @header-generator platform
    // NOLINTEND
};
