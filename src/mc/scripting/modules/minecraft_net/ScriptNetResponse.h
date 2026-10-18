#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetHeader.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftNet::ScriptNetHeader>> mHeaders;
    ::ll::TypedStorage<8, 24, std::string>                                            mBody;
    ::ll::TypedStorage<4, 4, uint>                                                    mStatus;
    ::ll::UntypedStorage<8, 32>                                                       mRequestHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                         mScope;
    ::ll::UntypedStorage<8, 24>                                                       mSerializationRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkb89a85;
    ::ll::UntypedStorage<8, 32> mUnk4a7c58;
    ::ll::UntypedStorage<4, 4>  mUnk225dc0;
    ::ll::UntypedStorage<8, 32> mUnkd38337;
    ::ll::UntypedStorage<8, 16> mUnk47f1fd;
    ::ll::UntypedStorage<8, 24> mUnkc32db5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptNetResponse& operator=(ScriptNetResponse const&);
    ScriptNetResponse(ScriptNetResponse const&);
#endif // @header-generator platform
    ScriptNetResponse();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
