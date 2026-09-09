#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class StonecutterContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class StonecutterScreenController : public ::ContainerScreenController {
public:
    // StonecutterScreenController inner types define
    enum class LeftTabIndex : int {
        Inventory = 0,
        Stones    = 1,
        Count     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::StonecutterScreenController::LeftTabIndex> mSelectedTabIndex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StonecutterContainerManagerController>> mStonecutterContainerManagerController;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData> mRepeatCraftButton;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterScreenController();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StonecutterScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI void _changeLeftTab(int);
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

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
