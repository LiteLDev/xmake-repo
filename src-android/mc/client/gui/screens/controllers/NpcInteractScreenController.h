#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DeferredTextObject.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/actor/npc/action_mode/Enum.h"
#include "mc/world/actor/npc/action_type/Enum.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientInstanceScreenModel;
class DeferredTextObject;
class NpcComponent;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
struct INpcDialogueData;
struct NpcGUIOffset;
struct TextEditScreenEventData;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcInteractScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
public:
    // NpcInteractScreenController inner types declare
    // clang-format off
    struct NpcActionEditData;
    // clang-format on

    // NpcInteractScreenController inner types define
    enum Section : uchar {
        Basic               = 0,
        Advanced            = 1,
        MaximizedActionEdit = 2,
        Student             = 3,
    };

    enum class NpcTextErrorStatus : uchar {
        Empty             = 0,
        ButtonSetUriEmpty = 1,
        InvalidUri        = 2,
        Valid             = 3,
    };

    enum NpcTextEdit : uint {
        Name             = 0,
        InteractText     = 1,
        ActionButtonName = 2,
        ActionText       = 3,
    };

    struct NpcActionEditData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 16> type;
        ::ll::UntypedStorage<8, 80> name;
        ::ll::UntypedStorage<8, 80> text;
        ::ll::UntypedStorage<1, 16> state;
        // NOLINTEND

    public:
        // prevent constructor by default
        NpcActionEditData& operator=(NpcActionEditData const&);
        NpcActionEditData(NpcActionEditData const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                                    mPlayer;
    ::ll::TypedStorage<1, 1, ::NpcInteractScreenController::Section>                       mVisibleSection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<INpcDialogueData>>                           mDialogueData;
    ::ll::TypedStorage<1, 1, bool>                                                         mShouldRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                         mHasActionWarning;
    ::ll::TypedStorage<1, 1, bool>                                                         mSaveToServer;
    ::ll::TypedStorage<4, 4, int>                                                          mMaxSkinsPerRow;
    ::ll::TypedStorage<4, 4, int>                                                          mStartSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mMaxSkinButtonIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mMaxSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mSelectedSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mHoverSkin;
    ::ll::TypedStorage<4, 4, int>                                                          mMaximizedEditIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mActionDeleteIndex;
    ::ll::TypedStorage<4, 4, int>                                                          mActionCollectionIndex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DeferredTextObject>>                          mDeferredNameText;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DeferredTextObject>>                          mDeferredInteractText;
    ::ll::TypedStorage<8, 24, std::vector<NpcInteractScreenController::NpcActionEditData>> mDeferredActionTexts;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcInteractScreenController& operator=(NpcInteractScreenController const&);
    NpcInteractScreenController(NpcInteractScreenController const&);
    NpcInteractScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcInteractScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onTerminate();

    virtual void onCreation();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual ::EventResult onNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NpcInteractScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        std::shared_ptr<INpcDialogueData>
    );

    MCNAPI void _addNewDeferredButtonTexts(ulong);

    MCNAPI void _handleTextChanged(::NpcInteractScreenController::NpcTextEdit, int);

    MCNAPI bool _isAddActionAllowed();

    MCNAPI ::ui::ViewRequest _leaveFrom(::NpcInteractScreenController::Section);

    MCNAPI void _saveEditsToServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, std::shared_ptr<INpcDialogueData>);
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

    MCNAPI void $onTerminate();

    MCNAPI void $onCreation();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;

    MCNAPI ::EventResult $onNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    MCNAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
