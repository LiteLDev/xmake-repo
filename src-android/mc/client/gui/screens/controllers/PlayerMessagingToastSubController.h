#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ToastAnnouncementSurface;
class ToastManager;
class ToastMessage;
// clang-format on

class PlayerMessagingToastSubController : public ::MinecraftScreenController, public ::IToastEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ToastManager&> mToastManager;
    ::ll::UntypedStorage<8, 32>               mToastSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingToastSubController& operator=(PlayerMessagingToastSubController const&);
    PlayerMessagingToastSubController(PlayerMessagingToastSubController const&);
    PlayerMessagingToastSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingToastSubController();

    virtual ::ui::DirtyFlag tick();

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerMessagingToastSubController(
        std::shared_ptr<MinecraftScreenModel>,
        ::Bedrock::NonOwnerPointer<ToastAnnouncementSurface>,
        ::ToastManager&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MinecraftScreenModel>, ::Bedrock::NonOwnerPointer<ToastAnnouncementSurface>, ::ToastManager&);
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

    MCNAPI void $handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
