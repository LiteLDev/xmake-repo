#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapterAfterEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentInterface.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAfterEvent
: public ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapterAfterEvent<
#if defined(LL_PLAT_A) // @header-generator platform
      ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
#else // @header-generator platform
      ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptItemCustomComponentAfterEvent() = default;
#else // @header-generator platform
    virtual ~ScriptItemCustomComponentAfterEvent() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
