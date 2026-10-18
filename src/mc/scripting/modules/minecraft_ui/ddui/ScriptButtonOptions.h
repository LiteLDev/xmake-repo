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

struct ScriptButtonOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200> mTooltip;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 48>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 224> mUnkbbf55f;
    ::ll::UntypedStorage<8, 48>  mUnkf594c3;
    ::ll::UntypedStorage<8, 48>  mUnk2b8fdc;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptButtonOptions(::ScriptModuleMinecraftServerUI::ScriptButtonOptions&&);

    MCNAPI ScriptButtonOptions(::ScriptModuleMinecraftServerUI::ScriptButtonOptions const&);

    MCNAPI ~ScriptButtonOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptButtonOptions& operator=(ScriptButtonOptions const&);
    ScriptButtonOptions(ScriptButtonOptions const&);
    ScriptButtonOptions();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptButtonOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptButtonOptions const&);
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
