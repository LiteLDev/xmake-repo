#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { class IScriptNetSerializer; }
namespace ScriptModuleMinecraftNet { struct ScriptNetSerializeResult; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetSerializationRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<ScriptModuleMinecraftNet::IScriptNetSerializer>>> mSerializers;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkdf5474;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetSerializationRegistry& operator=(ScriptNetSerializationRegistry const&);
    ScriptNetSerializationRegistry(ScriptNetSerializationRegistry const&);
    ScriptNetSerializationRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerSerializer(::std::unique_ptr<::ScriptModuleMinecraftNet::IScriptNetSerializer> serializer);

    MCNAPI ::std::optional<::ScriptModuleMinecraftNet::ScriptNetSerializeResult>
    serialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable> const& handle) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string normalizeContentType(::std::string const& contentType);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
