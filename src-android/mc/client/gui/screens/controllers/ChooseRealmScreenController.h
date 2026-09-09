#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"
#include "mc/client/world/RealmsWorldInfo.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms { struct Slot; }
namespace Realms { struct World; }
// clang-format on

class ChooseRealmScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mDirty;
    ::ll::TypedStorage<1, 1, bool>                 mSlotsViewToggle;
    ::ll::TypedStorage<1, 1, bool>                 mProgressLoadingVisible;
    ::ll::TypedStorage<4, 4, int>                  mCurrentRealmIndex;
    ::ll::TypedStorage<8, 24, std::string>         mCurrentSlotImage;
    ::ll::TypedStorage<8, 24, std::string>         mCurrentSlotImagePath;
    ::ll::TypedStorage<1, 1, bool>                 mIsFetching;
    ::ll::UntypedStorage<8, 24>                    mRealmsWorldsInfo;
    ::ll::UntypedStorage<8, 48>                    mCallback;
    ::ll::UntypedStorage<8, 48>                    mOnCancelCallback;
    ::ll::TypedStorage<4, 4, ::SlotSelectedAction> mSlotSelectedAction;
    ::ll::TypedStorage<1, 1, bool>                 mRealmSlotSelected;
    ::ll::TypedStorage<1, 1, bool>                 mShowingConfirmationDialog;
    ::ll::UntypedStorage<1, 10>                    mIsChangingSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    ChooseRealmScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChooseRealmScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onDelete();

    virtual void onCreation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChooseRealmScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(Realms::World)>,
        ::SlotSelectedAction,
        std::function<void()>
    );

    MCNAPI ::Realms::Slot _getSlotAt(int);

    MCNAPI ::ui::ViewRequest _notifyCallback(::Realms::World);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(Realms::World)>,
        ::SlotSelectedAction,
        std::function<void()>
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

    MCNAPI void $onOpen();

    MCNAPI void $onDelete();

    MCNAPI void $onCreation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
