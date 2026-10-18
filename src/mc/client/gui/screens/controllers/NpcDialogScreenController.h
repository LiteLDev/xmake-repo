#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
struct INpcDialogueData;
namespace Json { class Value; }
// clang-format on

class NpcDialogScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
#else // @header-generator platform
class NpcDialogScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // NpcDialogScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class InteractionState : schar {
        None       = 0,
        Opened     = 1,
        Interacted = 2,
        Closed     = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                     mPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::INpcDialogueData>>        mDialogueData;
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
    virtual ~NpcDialogScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data) /*override*/;

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _leaveScreen(bool performClosingActions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onCreation();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::EventResult $onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    MCAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
    // NOLINTEND
#else // @header-generator platform
    enum class InteractionState : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
