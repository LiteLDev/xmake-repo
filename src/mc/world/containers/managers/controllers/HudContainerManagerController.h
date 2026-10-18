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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mDynamicContainerRemovalNotifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mDynamicContainerRemovalNotifier;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    HudContainerManagerController();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HudContainerManagerController();
#else // @header-generator platform
    virtual ~HudContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerContainerCallbacks();
#else // @header-generator platform
    virtual void registerContainerCallbacks() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void refreshHotbar();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerContainerCallbacks();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $registerContainerCallbacks();
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
