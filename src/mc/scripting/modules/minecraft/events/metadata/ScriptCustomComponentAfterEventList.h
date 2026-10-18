#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredFlushTracker;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptCustomComponentAfterEventSignal; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleMinecraft::IScriptCustomComponentAfterEventSignal>>> mHandles;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::IScriptCustomComponentAfterEventSignal>>>
        mHandles;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptCustomComponentAfterEventList();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptCustomComponentAfterEventList();
#else // @header-generator platform
    MCAPI ~ScriptCustomComponentAfterEventList();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
