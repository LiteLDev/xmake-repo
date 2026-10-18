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
class Player;
class SmithingTableContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class SmithingTableScreenController : public ::ContainerScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class SmithingTableContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class SmithingTableScreenController : public ::ContainerScreenController {
#else // @header-generator platform
class SmithingTableScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // SmithingTableScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SlotIndex : int {
        Input    = 0,
        Material = 1,
        Result   = 2,
        Template = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<SmithingTableContainerManagerController>> mSmithingTableContainerManagerController;
    ::ll::TypedStorage<4, 4, ::SmithingTableScreenController::SlotIndex> mHoveredSlot;
    ::ll::UntypedStorage<1, 12> mUseSmithingTable2UI;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTableScreenController();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual std::string _getButtonXDescription();

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SmithingTableScreenController(
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
    MCNAPI void $addStaticScreenVars(::Json::Value&);

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
        Input    = 0,
        Material = 1,
        Result   = 2,
        Template = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SmithingTableContainerManagerController>>
                                                                         mSmithingTableContainerManagerController;
    ::ll::TypedStorage<4, 4, ::SmithingTableScreenController::SlotIndex> mHoveredSlot;
    ::ll::TypedStorage<1, 1, bool>                                       mUseSmithingTable2UI;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTableScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SmithingTableScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

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
