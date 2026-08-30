#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisconnectScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitleMessage;
    ::ll::TypedStorage<8, 24, std::string> mTelemetryOverride;
    ::ll::TypedStorage<8, 24, std::string> mDisconnectString;
    ::ll::TypedStorage<1, 1, bool>         mShowAccountSettingUriButton;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisconnectScreenController();

    virtual void onOpen();

    virtual std::string getAdditionalScreenInfo() const;

    virtual std::string getTelemetryOverride() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string _getButtonADescription();

    virtual ::ui::ViewRequest _processLeaveScreen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisconnectScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI ::ui::ViewRequest $_processLeaveScreen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
