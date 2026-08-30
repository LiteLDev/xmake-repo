#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

namespace ScriptModuleMinecraftServerUI {

struct HeaderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mText;
    ::ll::UntypedStorage<8, 40>  mVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    HeaderData& operator=(HeaderData const&);
    HeaderData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HeaderData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
