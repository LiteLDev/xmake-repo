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

namespace ScriptModuleMinecraftServerUI {

struct ToggleData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mToggled;
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnk199793;
    ::ll::UntypedStorage<8, 32>  mUnk563e43;
    ::ll::UntypedStorage<8, 224> mUnk52fb9f;
    ::ll::UntypedStorage<8, 48>  mUnk3b0d20;
    ::ll::UntypedStorage<8, 40>  mUnk8f671d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleData& operator=(ToggleData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ToggleData(ToggleData const&);
#endif // @header-generator platform
    ToggleData();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
