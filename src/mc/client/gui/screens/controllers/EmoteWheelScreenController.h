#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/models/EmoteWheelCommonModel.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class LocalPlayer;
class PersonaAppearance;
class PersonaScreenModelCommon;
// clang-format on

class EmoteWheelScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*> mLocalPlayer;
    ::ll::UntypedStorage<8, 128>             mEmoteWheelCommonModel;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteWheelScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoteWheelScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual std::string _getButtonStartDescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmoteWheelScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        std::shared_ptr<PersonaScreenModelCommon>
    );

    MCNAPI std::string _getChangeOrExitInstructions() const;

    MCNAPI std::string _getEmoteScreenInstructions();

    MCNAPI void _onButtonPress(int);

    MCNAPI void _sendButtonPressedMessage(bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, std::shared_ptr<PersonaScreenModelCommon>);
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

    MCNAPI std::string $_getButtonStartDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/models/EmoteWheelCommonModel.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class LocalPlayer;
class PersonaScreenModelCommon;
// clang-format on

class EmoteWheelScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>            mLocalPlayer;
    ::ll::TypedStorage<8, 144, ::EmoteWheelCommonModel> mEmoteWheelCommonModel;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteWheelScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoteWheelScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string _getButtonStartDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EmoteWheelScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> clientModel,
        ::std::shared_ptr<::PersonaScreenModelCommon>  model
    );

    MCAPI ::std::string _getChangeOrExitInstructions() const;

    MCAPI ::std::string _getEmoteScreenInstructions();

    MCAPI void _onButtonPress(int emoteIndex);

    MCAPI void _sendButtonPressedMessage(bool slotSet) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> clientModel,
        ::std::shared_ptr<::PersonaScreenModelCommon>  model
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $_getButtonStartDescription();
    // NOLINTEND
};
#else // @header-generator platform
class EmoteWheelScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
