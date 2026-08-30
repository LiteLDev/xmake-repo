#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastListener.h"
#include "mc/client/social/ToastMessage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class IStoreCatalogItem;
class MinecraftScreenModel;
class PartySystemSubController;
class PerfTurtleScreenController;
class PersonaRepository;
class PlayerMessagingToastSubController;
class ToastManager;
namespace Json { class Value; }
namespace Parties { class PartySystem; }
// clang-format on

class ToastScreenController : public ::MinecraftScreenController, public ::IToastListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mVerifiedCreateCallback;
    ::ll::TypedStorage<1, 1, bool>                                                mSplitscreenJoinPopupActive;
    ::ll::TypedStorage<4, 4, float>                                               mPopupVerticalAnchor;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                     mDirty;
    ::ll::TypedStorage<8, 16, std::weak_ptr<PerfTurtleScreenController>>          mPerfTurtleScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PartySystemSubController>>          mPartySystemController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayerMessagingToastSubController>> mPlayerMessagingToastSubController;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                                mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                                  mOptions;
    ::ll::UntypedStorage<8, 24>                                                   mToastManager;
    ::ll::TypedStorage<8, 320, std::optional<ToastMessage>>                       mToastMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastScreenController& operator=(ToastScreenController const&);
    ToastScreenController(ToastScreenController const&);
    ToastScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void showToast(::ToastMessage, bool);

    virtual void removeToast();

    virtual void refreshToast();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ToastScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::PersonaRepository&,
        ::IOptionRegistry&,
        ::ToastManager&,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>
    );

    MCNAPI ::IStoreCatalogItem const* _getAchievementPersonaPiece();

    MCNAPI std::string readToastData(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        ::PersonaRepository&,
        ::IOptionRegistry&,
        ::ToastManager&,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>
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

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $showToast(::ToastMessage, bool);

    MCNAPI void $removeToast();

    MCNAPI void $refreshToast();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
