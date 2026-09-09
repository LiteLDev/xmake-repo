#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/biomes/ScriptBiomeType.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mBiomeTypes;
    ::ll::UntypedStorage<8, 24> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateAllBiomeTypeHandles(::Scripting::WeakLifetimeScope&);

    MCNAPI ~ScriptBiomeTypes();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::Bedrock::NonOwnerPointer<BiomeRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
