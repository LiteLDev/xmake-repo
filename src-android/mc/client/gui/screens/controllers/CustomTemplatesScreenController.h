#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlayScreenModel;
struct PackIdVersion;
struct WorldTemplateInfo;
// clang-format on

class CustomTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>     mPlayScreenModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>>         mDlcUIWrapper;
    ::ll::TypedStorage<1, 1, bool>                                  mDirty;
    ::ll::TypedStorage<8, 8, std::vector<WorldTemplateInfo> const&> mCustomTemplates;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomTemplatesScreenController& operator=(CustomTemplatesScreenController const&);
    CustomTemplatesScreenController(CustomTemplatesScreenController const&);
    CustomTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomTemplatesScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onCreation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomTemplatesScreenController(std::shared_ptr<PlayScreenModel>, std::vector<WorldTemplateInfo> const&);

    MCNAPI void _handleWorldTemplateClicked(::WorldTemplateInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>, std::vector<WorldTemplateInfo> const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
