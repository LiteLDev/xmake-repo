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

struct ScriptModalFormDataDropdownOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>> mDefaultValueIndex;
    ::ll::UntypedStorage<8, 200>                  mTooltip;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>   mUnk1b9406;
    ::ll::UntypedStorage<8, 224> mUnke20342;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptModalFormDataDropdownOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptModalFormDataDropdownOptions& operator=(ScriptModalFormDataDropdownOptions const&);
    ScriptModalFormDataDropdownOptions(ScriptModalFormDataDropdownOptions const&);
    ScriptModalFormDataDropdownOptions();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
