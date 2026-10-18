#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataTextFieldOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200> mDefaultValue;
    ::ll::UntypedStorage<8, 200> mTooltip;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 224> mUnkfacf55;
    ::ll::UntypedStorage<8, 224> mUnk4bb75a;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI
    ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);

    MCNAPI ~ScriptModalFormDataTextFieldOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptModalFormDataTextFieldOptions& operator=(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);
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
