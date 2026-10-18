#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptingWorldInitializeEvent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEventIntermediateData& operator=(ScriptWorldInitializeAfterEventIntermediateData const&);
    ScriptWorldInitializeAfterEventIntermediateData(ScriptWorldInitializeAfterEventIntermediateData const&);
    ScriptWorldInitializeAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
