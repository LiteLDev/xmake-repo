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

struct ScriptModalFormDataSliderOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>> mValueStep;
    ::ll::TypedStorage<4, 8, std::optional<int>> mDefaultValue;
    ::ll::UntypedStorage<8, 200>                 mTooltip;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>   mUnk718950;
    ::ll::UntypedStorage<4, 8>   mUnk8f2c82;
    ::ll::UntypedStorage<8, 224> mUnkc2aee1;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptModalFormDataSliderOptions();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptModalFormDataSliderOptions& operator=(ScriptModalFormDataSliderOptions const&);
    ScriptModalFormDataSliderOptions(ScriptModalFormDataSliderOptions const&);
    ScriptModalFormDataSliderOptions();
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
