#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
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

struct ButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mText;
    ::ll::UntypedStorage<8, 200> mTooltip;
    ::ll::UntypedStorage<8, 32>  mCallback;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnk39f745;
    ::ll::UntypedStorage<8, 224> mUnk6e7873;
    ::ll::UntypedStorage<8, 32>  mUnka18c28;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ButtonBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ButtonBinding& operator=(ButtonBinding const&);
    ButtonBinding(ButtonBinding const&);
    ButtonBinding();
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
