#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventSignalHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredFlushTracker;
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptAfterEventSignalHandle; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptAfterEventSignalHandle>> mSignalHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deferredFlush(::ScriptDeferredFlushTracker&);

    MCNAPI std::vector<const ScriptModuleMinecraft::ScriptAfterEventSignalHandle*>
           getAllSignalsByEventType(ulong) const;

    MCNAPI void postFlush();

    MCNAPI void preFlush();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptAfterEventSignalHandle>> mSignalHandles;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
