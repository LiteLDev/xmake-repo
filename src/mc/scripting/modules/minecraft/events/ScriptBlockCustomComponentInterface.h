#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentScriptInterface.h"

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptBlockCustomComponentInterface : public ::ScriptModuleMinecraft::ScriptCustomComponentScriptInterface<14> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isEmpty() const;
    // NOLINTEND
};
#else // @header-generator platform
class ScriptBlockCustomComponentInterface : public ::ScriptModuleMinecraft::ScriptCustomComponentScriptInterface<14> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
