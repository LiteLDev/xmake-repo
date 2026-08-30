#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptPackConfigurationManager;
class ServerLevel;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftNetModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mServerScheduler;
    ::ll::UntypedStorage<8, 24> mPackConfigManager;
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory>> mWebSocketFactory;
    ::ll::UntypedStorage<8, 16> mSerializationRegistry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftNetModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftNetModuleFactory() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID getModuleUUID();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND
};
