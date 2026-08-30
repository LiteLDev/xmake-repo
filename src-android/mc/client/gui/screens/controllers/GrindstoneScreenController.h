#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class GrindstoneContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class GrindstoneScreenController : public ::ContainerScreenController {
public:
    // GrindstoneScreenController inner types define
    enum class SlotIndex : int {
        Input      = 0,
        Additional = 1,
        Result     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<GrindstoneContainerManagerController>> mGrindstoneContainerManagerController;
    ::ll::UntypedStorage<4, 16> mHoveredSlot;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GrindstoneScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrindstoneScreenController();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonXDescription();

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrindstoneScreenController(
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

    MCNAPI std::string $_getButtonXDescription();

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
