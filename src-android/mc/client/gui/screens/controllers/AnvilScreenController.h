#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerController;
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class AnvilScreenController : public ::ContainerScreenController {
public:
    // AnvilScreenController inner types define
    enum class SlotIndex : int {
        Input    = 0,
        Material = 1,
        Result   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mRenameTextSelected;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnvilContainerManagerController>> mAnvilContainerManagerController;
    ::ll::TypedStorage<4, 4, ::AnvilScreenController::SlotIndex>                mHoveredSlot;
    ::ll::TypedStorage<1, 1, bool>                                              mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                              mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onLeave();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonXDescription();

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnvilScreenController(
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onLeave();

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
