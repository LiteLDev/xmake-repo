#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class SafetyDialogScreenController : public ::MinecraftScreenController {
public:
    // prevent constructor by default
    SafetyDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SafetyDialogScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual void _registerSafetyEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SafetyDialogScreenController(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI void _registerProgressBindings();
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $_registerSafetyEventHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
