#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/IScriptNetSerializer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class LevelStorage;
class StructureManager;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetStructureSerializer : public ::ScriptModuleMinecraftNet::IScriptNetSerializer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>               mStructureManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage&> mLevelStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk57dc82;
    ::ll::UntypedStorage<8, 8>  mUnkcb050b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetStructureSerializer& operator=(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::string const& getContentType() const;
#else // @header-generator platform
    virtual ::std::string const& getContentType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> serialize(::ScriptModuleMinecraft::IScriptSerializable const&);
#else // @header-generator platform
    virtual ::std::optional<::std::string>
    serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::IScriptSerializable>, ScriptModuleMinecraftNet::ScriptSerializableParseError> deserialize(std::string const&, std::string const&, ::Scripting::WeakLifetimeScope&);
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    deserialize(
        ::std::string const&            body,
        ::std::string const&            identifier,
        ::Scripting::WeakLifetimeScope& scope
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CONTENT_TYPE();
#else // @header-generator platform
    MCNAPI static ::std::string const& CONTENT_TYPE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getContentType() const;

    MCNAPI ::std::optional<::std::string> $serialize(::ScriptModuleMinecraft::IScriptSerializable const& serializable);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptSerializable>,
        ::ScriptModuleMinecraftNet::ScriptSerializableParseError>
    $deserialize(::std::string const& body, ::std::string const& identifier, ::Scripting::WeakLifetimeScope& scope);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
