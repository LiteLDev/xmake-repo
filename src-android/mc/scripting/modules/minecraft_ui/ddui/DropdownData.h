#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DropdownItemData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct DropdownData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192>                                                            mLabel;
    ::ll::UntypedStorage<8, 32>                                                             mValue;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftServerUI::DropdownItemData>> mItems;
    ::ll::UntypedStorage<8, 200>                                                            mDescription;
    ::ll::UntypedStorage<8, 48>                                                             mDisabled;
    ::ll::UntypedStorage<8, 40>                                                             mVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownData& operator=(DropdownData const&);
    DropdownData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DropdownData(::ScriptModuleMinecraftServerUI::DropdownData&&);

    MCNAPI ~DropdownData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::DropdownData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
