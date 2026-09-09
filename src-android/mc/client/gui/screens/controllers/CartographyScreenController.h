#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CartographyContainerManagerController;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class CartographyScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<CartographyContainerManagerController>> mCartographyContainerManagerController;
    ::ll::TypedStorage<1, 1, bool> mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool> mShouldUseFilteredMessage;
    ::ll::UntypedStorage<8, 24> mProfanityToggleSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CartographyScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CartographyScreenController();

    virtual bool _isStillValid() const;

    virtual void _handleTakeHalf(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CartographyScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ROOT_CONTROL_NAME();
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

    MCNAPI void $_handleTakeHalf(std::string const&, int);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
