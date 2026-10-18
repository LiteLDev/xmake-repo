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
class GrindstoneContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class GrindstoneScreenController : public ::ContainerScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class GrindstoneScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // GrindstoneScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SlotIndex : int {
        Input      = 0,
        Additional = 1,
        Result     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GrindstoneContainerManagerController>>
                                                                      mGrindstoneContainerManagerController;
    ::ll::TypedStorage<4, 4, ::GrindstoneScreenController::SlotIndex> mHoveredSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    GrindstoneScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrindstoneScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrindstoneScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&,
        ::BlockPos const& pos,
        ::ActorUniqueID
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::Player&, ::BlockPos const& pos, ::ActorUniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);
    // NOLINTEND
#else // @header-generator platform
    enum class SlotIndex : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
