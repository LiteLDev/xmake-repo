#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActorType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinition;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActorType; }
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // ScriptActorTypes inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ActorTypesMap =
        std::unordered_map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorType>>;
#else // @header-generator platform
    using ActorTypesMap = ::std::
        unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                   mActorTypes;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const Level>> mLevel;
    ::ll::TypedStorage<1, 1, bool>                                mRegisteredTypes;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>>
                                                                      mActorTypes;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Level const>> mLevel;
    ::ll::TypedStorage<1, 1, bool>                                    mRegisteredTypes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorTypes();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::Scripting::WeakLifetimeScope&, std::string const&);
#else // @header-generator platform
    MCAPI void add(::Scripting::WeakLifetimeScope& scope, ::std::string const& actorName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&, ::Level const&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::Level const& level);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
