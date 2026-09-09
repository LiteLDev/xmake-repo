#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/EduExternalLinkResourceUriState.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EduExternalLinkScreenController : public ::MinecraftScreenController {
public:
    // EduExternalLinkScreenController inner types declare
    // clang-format off
    struct Capabilities;
    // clang-format on

    // EduExternalLinkScreenController inner types define
    struct Capabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mExternalLinkEnabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EduExternalLinkScreenController::Capabilities> mCapabilities;
    ::ll::TypedStorage<1, 1, ::EduExternalLinkResourceUriState>               mResourceUriState;
    // NOLINTEND

public:
    // prevent constructor by default
    EduExternalLinkScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduExternalLinkScreenController();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduExternalLinkScreenController(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI void _registerBindings();

    MCNAPI void _updateResourceUriState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
