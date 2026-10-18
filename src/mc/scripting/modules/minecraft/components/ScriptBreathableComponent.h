#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/BreathableComponent.h"
#include "mc/entity/components_json_legacy/BreathableDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
class BreathableComponent;
class BreathableDefinition;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<BreathableComponent, BreathableDefinition> {
public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&);
    ScriptBreathableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBreathableComponent();
    // NOLINTEND

#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::BreathableComponent, ::BreathableDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<short> getAirSupply() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<short> getAirSupply() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
#endif // @header-generator platform
    getBreatheBlocks() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getCanBreathe() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getCanBreathe() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getGeneratesBubbles() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
#endif // @header-generator platform
    getNonBreatheBlocks() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
