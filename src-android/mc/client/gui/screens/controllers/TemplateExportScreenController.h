#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
class IWorldSettingsStorage;
class MainMenuScreenModel;
// clang-format on

class TemplateExportScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IWorldSettingsStorage>> mWorldSettingsStorageInterface;
    ::ll::TypedStorage<8, 24, std::string>                          mMinTemplateVersionString;
    ::ll::TypedStorage<8, 48, ::GameVersion>                        mMinTemplateVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateExportScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TemplateExportScreenController();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
