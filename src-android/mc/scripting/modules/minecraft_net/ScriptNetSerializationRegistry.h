#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { class IScriptNetSerializer; }
namespace ScriptModuleMinecraftNet { struct ScriptNetSerializeResult; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetSerializationRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ScriptModuleMinecraftNet::IScriptNetSerializer>>> mSerializers;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
