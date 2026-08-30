#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SuggestedContentOffersProvider;
// clang-format on

class SuggestedContentOffersScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin> mStoreOrigin;
    ::ll::TypedStorage<8, 24, std::string const>      mOptionalBindingSuffix;
    ::ll::TypedStorage<8, 24, std::string const>      mDefaultTitleString;
    ::ll::TypedStorage<8, 24, std::string const>      mUpsellQueryName;
    ::ll::UntypedStorage<8, 24>                       mOffersProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    SuggestedContentOffersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SuggestedContentOffersScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onCreation();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SuggestedContentOffersScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        ::StoreNavigationOrigin,
        std::string const&,
        std::string const&
    );

    MCNAPI std::string _getSuggestedOffersTitle() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        ::StoreNavigationOrigin,
        std::string const&,
        std::string const&
    );
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

    MCNAPI void $onCreation();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
