#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class JigsawEditorScreenController : public ::BlockScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mTextBoxEditing;
    ::ll::TypedStorage<8, 144, ::JigsawEditorData> mTempData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawEditorScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawEditorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&,
        ::BlockPos const& pos,
        ::ActorUniqueID   uniqueId
    );

    MCAPI ::std::string _getTextEditValue(::TextEditScreenEventData& textEditEvent) const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _getTextEditValueAsInt(::TextEditScreenEventData& textEditEvent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&,
        ::BlockPos const& pos,
        ::ActorUniqueID   uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class JigsawEditorScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
