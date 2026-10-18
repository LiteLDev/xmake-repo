#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemFilterError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptItemFilterError& operator=(ScriptItemFilterError const&);
    ScriptItemFilterError(ScriptItemFilterError const&);
    ScriptItemFilterError();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
