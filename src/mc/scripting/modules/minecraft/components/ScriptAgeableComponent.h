#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/AgeableComponent.h"
#include "mc/entity/definitions/AgeableDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
struct ActorDefinitionFeedItem;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
class AgeableDefinition;
struct AgeableComponent;
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<AgeableComponent, AgeableDefinition> {
public:
    // prevent constructor by default
    ScriptAgeableComponent& operator=(ScriptAgeableComponent const&);
    ScriptAgeableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAgeableComponent();
    // NOLINTEND

#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::AgeableComponent, ::AgeableDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getDropItems() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getDropItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<ActorDefinitionTrigger> getGrowUp() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::ActorDefinitionTrigger> getGrowUp() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::string> getTransformToItem() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::string> getTransformToItem() const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
