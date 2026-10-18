#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class IScriptNetSerializer {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IScriptNetSerializer() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getContentType() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getContentType() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> serialize(::ScriptModuleMinecraft::IScriptSerializable const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::string>
    serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::IScriptSerializable>, ScriptModuleMinecraftNet::ScriptSerializableParseError> deserialize(std::string const&, std::string const&, ::Scripting::WeakLifetimeScope&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    deserialize(::std::string const& body, ::std::string const& identifier, ::Scripting::WeakLifetimeScope& scope) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
