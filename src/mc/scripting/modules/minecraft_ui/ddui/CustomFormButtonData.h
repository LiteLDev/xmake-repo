#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { class ScriptObservableCallback; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct CustomFormButtonData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mOnClick;
    ::ll::UntypedStorage<8, 200> mTooltip;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnk927960;
    ::ll::UntypedStorage<8, 32>  mUnk21067e;
    ::ll::UntypedStorage<8, 224> mUnked9ea4;
    ::ll::UntypedStorage<8, 48>  mUnkd25605;
    ::ll::UntypedStorage<8, 40>  mUnkde4bb5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CustomFormButtonData& operator=(CustomFormButtonData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CustomFormButtonData(CustomFormButtonData const&);
#endif // @header-generator platform
    CustomFormButtonData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomFormButtonData(::ScriptModuleMinecraftServerUI::CustomFormButtonData&&);

    MCNAPI ::ScriptModuleMinecraftServerUI::CustomFormButtonData&
    operator=(::ScriptModuleMinecraftServerUI::CustomFormButtonData&&);

    MCNAPI ~CustomFormButtonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::CustomFormButtonData&&);
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
