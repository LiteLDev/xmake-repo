#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

namespace ScriptModuleMinecraftServerUI {

struct ToggleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mToggled;
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleData& operator=(ToggleData const&);
    ToggleData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ToggleData(::ScriptModuleMinecraftServerUI::ToggleData&&);

    MCNAPI ~ToggleData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ToggleData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
