#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduShareLinkItem.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class LibraryItem;
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class EduShareLinkScreenController : public ::MainMenuScreenController {
public:
    // EduShareLinkScreenController inner types declare
    // clang-format off
    struct EduShareLinkCapabilities;
    // clang-format on

    // EduShareLinkScreenController inner types define
    enum class ScreenState : int {
        None        = 0,
        Simple      = 1,
        Teams       = 2,
        AddResource = 3,
    };

    enum class UriResourceValidationStatus : int {
        Empty   = 0,
        Invalid = 1,
        Valid   = 2,
    };

    struct EduShareLinkCapabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShareLinkIgnored;
        ::ll::TypedStorage<1, 1, bool> mShareToTeams;
        ::ll::TypedStorage<1, 1, bool> mCanAssignResources;
        ::ll::TypedStorage<1, 1, bool> mIsEducator;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::EduShareLinkScreenController::EduShareLinkCapabilities> mCapabilities;
    ::ll::TypedStorage<8, 24, std::string>                                             mSourceScreen;
    ::ll::TypedStorage<8, 24, std::string>                                             mSourcePrefix;
    ::ll::TypedStorage<4, 4, ::EduShareLinkScreenController::ScreenState>              mScreenState;
    ::ll::TypedStorage<8, 80, ::EduShareLinkItem>                                      mItem;
    ::ll::TypedStorage<8, 56, std::optional<EduSharedUriResource>>                     mOriginalAdditionalUriResource;
    ::ll::TypedStorage<8, 56, std::optional<EduSharedUriResource>>                     mAdditionalUriResource;
    ::ll::TypedStorage<8, 48, ::EduSharedUriResource>                                  mEditAdditionalUriResource;
    ::ll::TypedStorage<4, 4, ::EduShareLinkScreenController::UriResourceValidationStatus> mUriResourceValidationStatus;
    ::ll::UntypedStorage<8, 32> mAdditionalUriResourceUriErrorMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    EduShareLinkScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduShareLinkScreenController();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduShareLinkScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::LibraryItem const&,
        std::optional<EduSharedUriResource>
    );

    MCNAPI std::string _appendAdditionalResources(std::string const&);

    MCNAPI void _clearAdditionalUriResource();

    MCNAPI void _closeActiveScreen();

    MCNAPI std::string _getResourceAddedText() const;

    MCNAPI std::string _getTeamsAdvancedShareTitle() const;

    MCNAPI std::string _getTeamsBodyText() const;

    MCNAPI void _openScreen(::EduShareLinkScreenController::ScreenState);

    MCNAPI void _registerShareDialogHandlers(std::string const&);

    MCNAPI void _screenTTS(std::string const&, std::string const&, std::string const&);

    MCNAPI void _sendNotification(::EduShareUriType, ::EduShareMethodType, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::LibraryItem const&, std::optional<EduSharedUriResource>);
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
