#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
