#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { class ScriptObservableCallback; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mText;
    ::ll::UntypedStorage<8, 200> mTooltip;
    ::ll::UntypedStorage<8, 32>  mCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ButtonBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
