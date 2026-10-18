#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition> {
#else // @header-generator platform
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::DynamicPropertiesDefinition>  mDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::DynamicPropertiesDefinition>  mDefinition;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDynamicPropertiesDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DynamicPropertiesDefinition const& getDefinition() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
