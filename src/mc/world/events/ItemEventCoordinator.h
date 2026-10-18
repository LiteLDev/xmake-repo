#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/ItemGameplayEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class ItemDescriptor;
#else // @header-generator platform
class ItemEventListener;
#endif // @header-generator platform
class ItemGameplayHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ItemEventCoordinator : public ::EventCoordinator<ItemEventListener> {
#else // @header-generator platform
class ItemEventCoordinator : public ::EventCoordinator<::ItemEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemGameplayHandler>> mItemGameplayHandler;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemGameplayHandler>> mItemGameplayHandler;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemEventCoordinator();
#else // @header-generator platform
    virtual ~ItemEventCoordinator() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableItemGameplayEvent<::CoordinatorResult>> event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
