#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class HudContainerManagerModel;
// clang-format on

class HudContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mDynamicContainerRemovalNotifier;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerManagerController();

    virtual void registerContainerCallbacks();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HudContainerManagerController(std::weak_ptr<HudContainerManagerModel>);

    MCNAPI void broadcastContainerChanges();

    MCNAPI void refreshHotbar();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<HudContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerContainerCallbacks();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
