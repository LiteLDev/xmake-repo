#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptCustomComponentRegistry.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentReader.h"
#include "mc/scripting/modules/minecraft/items/IScriptItemCustomComponentWriter.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
struct ServerScriptManagerEvents;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentReader,
                                           public ::ScriptModuleMinecraft::IScriptItemCustomComponentWriter,
                                           public ::ScriptModuleMinecraft::ScriptCustomComponentRegistry {
public:
    // prevent constructor by default
    IScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptItemCustomComponentRegistry() = default;

    virtual ::ScriptDeferredEventListener& getEventListener() = 0;

    virtual void setCerealContext(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
