#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
// clang-format on

class EnchantingScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EnchantingContainerManagerController>>
                                  mEnchantingContainerManagerController;
    ::ll::TypedStorage<4, 4, int> mSelectedButton;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingScreenController() /*override*/ = default;

    virtual void onLeave() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotSelected(::std::string const& collectionName, int index) /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantingScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI ::ui::ViewRequest _enchantmentClicked(int option);

    MCAPI ::ui::ViewRequest _onOptionButtonSelected(::UIPropertyBag* bag);
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
    MCAPI void $onLeave();

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::ui::ViewRequest $_onContainerSlotSelected(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);
    // NOLINTEND
};
#else // @header-generator platform
class EnchantingScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
