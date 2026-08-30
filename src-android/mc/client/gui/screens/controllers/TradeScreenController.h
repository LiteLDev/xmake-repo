#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/InteractionModel.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class TradeContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class TradeScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentIndex;
    ::ll::UntypedStorage<8, 24>   mTradeContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeScreenController();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TradeScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::ActorUniqueID const, ::InteractionModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::ActorUniqueID const, ::InteractionModel);
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
