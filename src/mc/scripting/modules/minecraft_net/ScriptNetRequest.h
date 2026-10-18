#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/http/Method.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetHeader.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptNetRequest : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftNet::ScriptNetRequest> {
#else // @header-generator platform
struct ScriptNetRequest : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptNetRequest> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                            mUri;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftNet::ScriptNetHeader>> mHeaders;
    ::ll::UntypedStorage<8, 40>                                                       mBody;
    ::ll::TypedStorage<4, 4, uint>                                                    mTimeout;
    ::ll::UntypedStorage<1, 8>                                                        mMethod;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk4b319b;
    ::ll::UntypedStorage<8, 24> mUnk5227c1;
    ::ll::UntypedStorage<8, 40> mUnk5b8bc6;
    ::ll::UntypedStorage<4, 4>  mUnk807e94;
    ::ll::UntypedStorage<1, 2>  mUnke5dba2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptNetRequest& operator=(ScriptNetRequest const&);
    ScriptNetRequest(ScriptNetRequest const&);
#endif // @header-generator platform
    ScriptNetRequest();
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
