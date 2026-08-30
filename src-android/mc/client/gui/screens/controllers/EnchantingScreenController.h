#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class EnchantingContainerManagerController;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
namespace mce { class Color; }
// clang-format on

class EnchantingScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<EnchantingContainerManagerController>> mEnchantingContainerManagerController;
    ::ll::UntypedStorage<4, 16> mSelectedButton;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingScreenController();

    virtual void onLeave();

    virtual bool _isStillValid() const;

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual ::ui::ViewRequest _onContainerSlotSelected(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnchantingScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI ::ui::ViewRequest _enchantmentClicked(int);

    MCNAPI ::ui::ViewRequest _onOptionButtonSelected(::UIPropertyBag*);
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
    MCNAPI void $onLeave();

    MCNAPI bool $_isStillValid() const;

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(std::string const&, int);

    MCNAPI ::ui::ViewRequest $_onContainerSlotSelected(std::string const&, int);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
