#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<4, 4, int>                                                   mCurrentIndex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TradeContainerManagerController>> mTradeContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> pModel,
        ::ActorUniqueID                                uniqueID,
        ::InteractionModel                             interactionModel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> pModel,
        ::ActorUniqueID                                uniqueID,
        ::InteractionModel                             interactionModel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onLeave();

    MCAPI bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND
};
#else // @header-generator platform
class TradeScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
