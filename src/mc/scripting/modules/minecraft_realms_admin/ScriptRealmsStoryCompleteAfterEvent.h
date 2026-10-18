#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftRealmsAdmin { struct ScriptRealmsStoryCompleteIntermediateData; }
// clang-format on

namespace ScriptModuleMinecraftRealmsAdmin {

struct ScriptRealmsStoryCompleteAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4b8a1f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsStoryCompleteAfterEvent& operator=(ScriptRealmsStoryCompleteAfterEvent const&);
    ScriptRealmsStoryCompleteAfterEvent(ScriptRealmsStoryCompleteAfterEvent const&);
    ScriptRealmsStoryCompleteAfterEvent();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
#endif // @header-generator platform
