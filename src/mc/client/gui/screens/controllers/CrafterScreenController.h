#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/BlockContainerScreenController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct ScreenEvent;
// clang-format on

class CrafterScreenController : public ::BlockContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>   mRegion;
    ::ll::TypedStorage<8, 8, ::BlockActor*>    mBlockActor;
    ::ll::TypedStorage<8, 8, std::bitset<9>>   mDisabledSlotsPrediction;
    ::ll::TypedStorage<8, 8, long>             mLastDisabledSlotsInteractedTime;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mCrafterOutputItem;
    // NOLINTEND

public:
    // prevent constructor by default
    CrafterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrafterScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrafterScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _setToggledStateForSlot(int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, ::BlockPos const&, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::ViewRequest $handleEvent(::ScreenEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/BlockContainerScreenController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct ScreenEvent;
// clang-format on

class CrafterScreenController : public ::BlockContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>   mRegion;
    ::ll::TypedStorage<8, 8, ::BlockActor*>    mBlockActor;
    ::ll::TypedStorage<4, 4, ::std::bitset<9>> mDisabledSlotsPrediction;
    ::ll::TypedStorage<8, 8, int64>            mLastDisabledSlotsInteractedTime;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mCrafterOutputItem;
    // NOLINTEND

public:
    // prevent constructor by default
    CrafterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrafterScreenController() /*override*/ = default;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrafterScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _setToggledStateForSlot(int slot, bool shouldEnable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class CrafterScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
