#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

namespace ScriptModuleMinecraftServerUI {

struct TextFieldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mText;
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    TextFieldData& operator=(TextFieldData const&);
    TextFieldData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextFieldData(::ScriptModuleMinecraftServerUI::TextFieldData&&);

    MCNAPI ~TextFieldData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::TextFieldData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
