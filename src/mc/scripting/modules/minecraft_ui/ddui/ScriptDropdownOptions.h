#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptDropdownOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 48>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 224> mUnk3380de;
    ::ll::UntypedStorage<8, 48>  mUnkf526b6;
    ::ll::UntypedStorage<8, 48>  mUnk83bf27;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDropdownOptions(::ScriptModuleMinecraftServerUI::ScriptDropdownOptions&&);

    MCNAPI ScriptDropdownOptions(::ScriptModuleMinecraftServerUI::ScriptDropdownOptions const&);

    MCNAPI ~ScriptDropdownOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptDropdownOptions& operator=(ScriptDropdownOptions const&);
    ScriptDropdownOptions(ScriptDropdownOptions const&);
    ScriptDropdownOptions();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptDropdownOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptDropdownOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
