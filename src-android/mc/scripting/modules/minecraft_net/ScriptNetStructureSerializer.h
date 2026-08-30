#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_net/IScriptNetSerializer.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class StructureManager;
namespace ScriptModuleMinecraft { struct IScriptSerializable; }
namespace ScriptModuleMinecraftNet { struct ScriptSerializableParseError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetStructureSerializer : public ::ScriptModuleMinecraftNet::IScriptNetSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>               mStructureManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage&> mLevelStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetStructureSerializer& operator=(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer(ScriptNetStructureSerializer const&);
    ScriptNetStructureSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::string const& getContentType() const;

    virtual std::optional<std::string> serialize(::ScriptModuleMinecraft::IScriptSerializable const&);

    virtual ::Scripting::Result<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::IScriptSerializable>, ScriptModuleMinecraftNet::ScriptSerializableParseError> deserialize(std::string const&, std::string const&, ::Scripting::WeakLifetimeScope&);
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& CONTENT_TYPE();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
