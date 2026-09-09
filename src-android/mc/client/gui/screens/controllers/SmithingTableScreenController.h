#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // SmithingTableScreenController inner types define
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
};
