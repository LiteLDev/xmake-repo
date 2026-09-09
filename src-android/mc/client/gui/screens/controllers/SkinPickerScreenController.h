#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/persona/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SkinPackCollectionModel;
class SkinRepository;
// clang-format on

class SkinPickerScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinPackCollectionModel&>       mSkinPackCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinRepository>> mSkinRepository;
    ::ll::TypedStorage<1, 1, bool>                             mSearchedSkins;
    ::ll::TypedStorage<4, 4, int>                              mHoverPack;
    ::ll::TypedStorage<4, 4, int>                              mHoverSkin;
    ::ll::TypedStorage<8, 96, ::SkinHandle>                    mPreviewSkinHandle;
    ::ll::TypedStorage<8, 96, ::SkinHandle const>              mCustomSkinHandleSkinny;
    ::ll::TypedStorage<8, 96, ::SkinHandle const>              mCustomSkinHandleFat;
    ::ll::TypedStorage<8, 96, ::SkinHandle const>              mCustomSkinHandleDummy;
    ::ll::TypedStorage<8, 96, ::SkinHandle>                    mInitialSkinHandle;
    ::ll::TypedStorage<8, 48, std::deque<SkinHandle>>          mSkinUndoList;
    ::ll::TypedStorage<1, 1, bool>                             mForceUpdatePreviewSkin;
    ::ll::TypedStorage<1, 1, bool>                             mForceUpdateRecentSkin;
    ::ll::TypedStorage<1, 1, bool>                             mForceUpdateCustomSkin;
    ::ll::TypedStorage<1, 1, bool>                             mContentAreaActive;
    ::ll::TypedStorage<1, 1, bool>                             mSkinStatusHovered;
    ::ll::TypedStorage<1, 1, bool>                             mNewCustomSkinPicked;
    ::ll::TypedStorage<1, 1, bool>                             mCapeChanged;
    ::ll::UntypedStorage<1, 9>                                 mEventHandlersRegistered;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPickerScreenController& operator=(SkinPickerScreenController const&);
    SkinPickerScreenController(SkinPickerScreenController const&);
    SkinPickerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPickerScreenController() = default;

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual ::ui::ViewRequest tryExit();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual std::string _getButtonBDescription();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_SKINS_PER_ROW();

    MCNAPI static std::string const& MINECON_2012_CAPE_ID();

    MCNAPI static std::string const& MOJANG_CAPE_ID();
    // NOLINTEND
};
