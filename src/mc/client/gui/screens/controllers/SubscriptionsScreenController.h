#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms { struct World; }
// clang-format on

class SubscriptionsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubscriptionsScreenController(std::shared_ptr<MainMenuScreenModel>);

    MCNAPI bool _isCsbSubscribed();

    MCNAPI bool _platformMatches();

    MCNAPI void _registerBindings();

    MCNAPI bool shouldShowSubscriptionsTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>);
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

    MCNAPI void $onOpen();
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
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class SubscriptionsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubscriptionsScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI bool _isCsbSubscribed();

    MCAPI bool _platformMatches();

    MCAPI void _registerBindings();

    MCAPI bool shouldShowSubscriptionsTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class SubscriptionsScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
