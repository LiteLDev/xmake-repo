#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

struct ScriptingWorldInitializeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mBlockCustomComponentRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&>
        mBlockCustomComponentRegistry;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&> mItemCustomComponentRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptingWorldInitializeEvent& operator=(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent();
};
