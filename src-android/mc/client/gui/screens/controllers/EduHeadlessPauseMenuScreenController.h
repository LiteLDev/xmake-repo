#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class EduHeadlessPauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController {
public:
    // prevent constructor by default
    EduHeadlessPauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessPauseMenuScreenController();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduHeadlessPauseMenuScreenController(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
