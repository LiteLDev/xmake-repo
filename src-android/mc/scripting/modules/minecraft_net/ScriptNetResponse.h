#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetHeader.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftNet::ScriptNetHeader>> mHeaders;
    ::ll::TypedStorage<8, 24, std::string>                                            mBody;
    ::ll::TypedStorage<4, 4, uint>                                                    mStatus;
    ::ll::UntypedStorage<8, 32>                                                       mRequestHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                         mScope;
    ::ll::UntypedStorage<8, 24>                                                       mSerializationRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetResponse();
};

} // namespace ScriptModuleMinecraftNet
