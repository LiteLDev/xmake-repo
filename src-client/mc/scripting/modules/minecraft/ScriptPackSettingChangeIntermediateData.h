#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mSettingName;
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mSettingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingChangeIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackSettingChangeIntermediateData(std::string const&, std::variant<float, bool, std::string>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::variant<float, bool, std::string>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
