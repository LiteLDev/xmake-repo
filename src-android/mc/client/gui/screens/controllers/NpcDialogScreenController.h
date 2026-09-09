#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct INpcDialogueData;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcDialogScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
public:
    // NpcDialogScreenController inner types define
    enum class InteractionState : uchar {
        None       = 0,
        Opened     = 1,
        Interacted = 2,
        Closed     = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                     mPlayer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<INpcDialogueData>>            mDialogueData;
    ::ll::TypedStorage<1, 1, ::NpcDialogScreenController::InteractionState> mState;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogScreenController& operator=(NpcDialogScreenController const&);
    NpcDialogScreenController(NpcDialogScreenController const&);
    NpcDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcDialogScreenController();

    virtual void onCreation();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::EventResult onNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _runCloseActions();

    MCNAPI void _runOpenActions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onCreation();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::EventResult $onNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    MCNAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
