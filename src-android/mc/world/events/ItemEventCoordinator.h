#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemGameplayHandler;
class ItemStackBase;
class Player;
// clang-format on

class ItemEventCoordinator : public ::EventCoordinator<ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemGameplayHandler>> mItemGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemEventCoordinator();

    MCNAPI ::ItemGameplayHandler& getItemGameplayHandler();

    MCNAPI void onInventoryItemClosed();

    MCNAPI void onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const&);

    MCNAPI void onInventoryItemOpened(bool);

    MCNAPI void onInventoryLayoutSelected(int, int);

    MCNAPI void onItemModifiedActor(::ItemStackBase const&, ::Actor const&);

    MCNAPI void onItemSelected(::ItemStackBase const&);

    MCNAPI void onItemSelectedSlot(int);

    MCNAPI void onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI void onItemSpawnedActor(::ItemStackBase const&, ::Actor const&);

    MCNAPI void onItemTransferredFromContainer(::ItemStackBase const&, std::string const&);

    MCNAPI void onItemTransferredToContainer(::ItemStackBase const&, std::string const&);

    MCNAPI void onPreviewItemPopulatedInContainer(::ItemStackBase const&, std::string const&);

    MCNAPI void onRecipeSelected(::ItemStackBase const&);

    MCNAPI void registerItemGameplayHandler(std::unique_ptr<ItemGameplayHandler>);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableItemGameplayEvent<CoordinatorResult>>);

    MCNAPI void sendEvent(::EventRef<ItemGameplayEvent<void>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
