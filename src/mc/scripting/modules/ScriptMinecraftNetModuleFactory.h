#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptPackConfigurationManager;
class ServerLevel;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftNetModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mServerScheduler;
    ::ll::UntypedStorage<8, 24> mPackConfigManager;
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory>> mWebSocketFactory;
    ::ll::UntypedStorage<8, 16> mSerializationRegistry;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk7f2275;
    ::ll::UntypedStorage<8, 24> mUnkc9f7d9;
    ::ll::UntypedStorage<8, 8>  mUnk4fb1f9;
    ::ll::UntypedStorage<8, 16> mUnk167a04;
    ::ll::UntypedStorage<8, 16> mUnkc2b23c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptMinecraftNetModuleFactory& operator=(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory(ScriptMinecraftNetModuleFactory const&);
#endif // @header-generator platform
    ScriptMinecraftNetModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptMinecraftNetModuleFactory() = default;
#else // @header-generator platform
    virtual ~ScriptMinecraftNetModuleFactory() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID getModuleUUID();
#else // @header-generator platform
    MCNAPI ScriptMinecraftNetModuleFactory(
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     serverScheduler,
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager>                packConfigManager,
        ::ServerLevel*                                                              level,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> webSocketFactory
    );

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&          moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> contextConfig,
        bool                                        allowUntagged,
        ::std::vector<::std::string> const&         allowedTags
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& ModuleName();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     serverScheduler,
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager>                packConfigManager,
        ::ServerLevel*                                                              level,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> webSocketFactory
    );
    // NOLINTEND
#endif // @header-generator platform
};
