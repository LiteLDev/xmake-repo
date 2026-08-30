#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BlockContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class HorseContainerManagerController;
class Player;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class HorseScreenController : public ::BlockContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mChestTabOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HorseScreenController();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HorseScreenController(
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

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
