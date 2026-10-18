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

struct ScriptModalFormDataToggleOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>> mDefaultValue;
    ::ll::UntypedStorage<8, 200>                  mTooltip;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2>   mUnk24b964;
    ::ll::UntypedStorage<8, 224> mUnk4c1140;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptModalFormDataToggleOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptModalFormDataToggleOptions& operator=(ScriptModalFormDataToggleOptions const&);
    ScriptModalFormDataToggleOptions(ScriptModalFormDataToggleOptions const&);
    ScriptModalFormDataToggleOptions();
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
