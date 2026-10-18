#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterStorage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentInterface.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterStorage<
#if defined(LL_PLAT_A) // @header-generator platform
      ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
public:
    // prevent constructor by default
    ScriptItemCustomComponentIntermediateStorage& operator=(ScriptItemCustomComponentIntermediateStorage const&);
};
#else // @header-generator platform
      ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
