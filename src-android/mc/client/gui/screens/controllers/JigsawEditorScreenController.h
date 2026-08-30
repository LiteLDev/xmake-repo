#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class JigsawBlockActor;
class Player;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class JigsawEditorScreenController : public ::BlockScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mTextBoxEditing;
    ::ll::UntypedStorage<8, 120>   mTempData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawEditorScreenController();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawEditorScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI std::string _getTextEditValue(::TextEditScreenEventData&) const;

    MCNAPI int _getTextEditValueAsInt(::TextEditScreenEventData&) const;

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, ::BlockPos const&, ::ActorUniqueID const);
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
