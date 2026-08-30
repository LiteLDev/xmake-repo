#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Method.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetHeader.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequest : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptNetRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                            mUri;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftNet::ScriptNetHeader>> mHeaders;
    ::ll::UntypedStorage<8, 40>                                                       mBody;
    ::ll::TypedStorage<4, 4, uint>                                                    mTimeout;
    ::ll::UntypedStorage<1, 8>                                                        mMethod;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetRequest();
};

} // namespace ScriptModuleMinecraftNet
