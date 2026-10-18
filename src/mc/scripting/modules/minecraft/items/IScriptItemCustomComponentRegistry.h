#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentWriter.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
#if defined(LL_PLAT_A) // @header-generator platform
struct ServerScriptManagerEvents;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentReader,
                                           public ::ScriptModuleMinecraft::IScriptItemCustomComponentWriter,
                                           public ::ScriptModuleMinecraft::ScriptCustomComponentRegistry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    IScriptItemCustomComponentRegistry();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IScriptItemCustomComponentRegistry() = default;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::ScriptDeferredEventListener& getEventListener() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCerealContext(::cereal::ReflectionCtx&);
#else // @header-generator platform
    virtual void setCerealContext(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
