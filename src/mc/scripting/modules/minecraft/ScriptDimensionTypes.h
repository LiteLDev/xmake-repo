#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptDimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // ScriptDimensionTypes inner types define
    using DimensionTypeMap =
#if defined(LL_PLAT_A) // @header-generator platform
        std::map<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimensionType>>;
#else // @header-generator platform
        ::std::map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mDimensionTypes;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>>
                                   mDimensionTypes;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mRegisteredTypes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerTypes(::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI void registerTypes(::Scripting::WeakLifetimeScope scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, std::string> _getDimensionStringNames();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::std::string> _getDimensionStringNames();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType fromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::DimensionType fromString(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string toString(::DimensionType const&);
#else // @header-generator platform
    MCAPI static ::std::string toString(::DimensionType const& type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& sMinecraftNamespace();
#else // @header-generator platform
    MCAPI static ::std::string const& sMinecraftNamespace();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
