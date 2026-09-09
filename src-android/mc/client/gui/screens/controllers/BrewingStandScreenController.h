#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BrewingStandContainerManagerController;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class BrewingStandScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerEnumName> mHoveredContainer;
    ::ll::UntypedStorage<8, 24>                   mBrewingContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandScreenController();

    virtual bool _isStillValid() const;

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrewingStandScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );
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
    MCNAPI bool $_isStillValid() const;

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(std::string const&, int);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
