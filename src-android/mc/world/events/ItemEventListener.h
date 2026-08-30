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

    virtual ::EventResult onInventoryItemOpened(bool);

    virtual ::EventResult onInventoryItemClosed();

    virtual ::EventResult onItemTransferredFromContainer(::ItemStackBase const&, std::string const&);

    virtual ::EventResult onItemTransferredToContainer(::ItemStackBase const&, std::string const&);

    virtual ::EventResult onPreviewItemPopulatedInContainer(::ItemStackBase const&, std::string const&);

    virtual ::EventResult onInventoryLayoutSelected(int, int);

    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const&);

    virtual ::EventResult onRecipeSelected(::ItemStackBase const&);

    virtual ::EventResult onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    virtual ::EventResult onItemSpawningActor(::Actor const&);

    virtual ::EventResult onItemSpawnedActor(::ItemStackBase const&, ::Actor const&);

    virtual ::EventResult onItemModifiedActor(::ItemStackBase const&, ::Actor const&);

    virtual ::EventResult onItemSelectedSlot(int);

    virtual ::EventResult onItemSelected(::ItemStackBase const&);

    virtual ::EventResult onItemDefinitionEventTriggered(::ItemStackBase const&, std::string const&);

    virtual ::EventResult onEvent(::ItemNotificationEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onInventoryItemOpened(bool);

    MCNAPI ::EventResult $onInventoryItemClosed();

    MCNAPI ::EventResult $onItemTransferredFromContainer(::ItemStackBase const&, std::string const&);

    MCNAPI ::EventResult $onItemTransferredToContainer(::ItemStackBase const&, std::string const&);

    MCNAPI ::EventResult $onPreviewItemPopulatedInContainer(::ItemStackBase const&, std::string const&);

    MCNAPI ::EventResult $onInventoryLayoutSelected(int, int);

    MCNAPI ::EventResult $onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const&);

    MCNAPI ::EventResult $onRecipeSelected(::ItemStackBase const&);

    MCNAPI ::EventResult $onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onItemSpawningActor(::Actor const&);

    MCNAPI ::EventResult $onItemSpawnedActor(::ItemStackBase const&, ::Actor const&);

    MCNAPI ::EventResult $onItemModifiedActor(::ItemStackBase const&, ::Actor const&);

    MCNAPI ::EventResult $onItemSelectedSlot(int);

    MCNAPI ::EventResult $onItemSelected(::ItemStackBase const&);

    MCNAPI ::EventResult $onItemDefinitionEventTriggered(::ItemStackBase const&, std::string const&);
    // NOLINTEND
};
