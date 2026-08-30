#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class CompoundCreatorContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class CompoundCreatorScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CompoundCreatorContainerManagerController>> mManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundCreatorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundCreatorScreenController();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonXDescription();

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundCreatorScreenController(
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

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
