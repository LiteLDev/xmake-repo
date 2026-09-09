#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"

namespace ScriptModuleMinecraftServerUI {

struct DividerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    DividerData& operator=(DividerData const&);
    DividerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DividerData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
