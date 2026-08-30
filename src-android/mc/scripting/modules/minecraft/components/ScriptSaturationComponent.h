#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSaturationComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptSaturationComponent& operator=(ScriptSaturationComponent const&);
    ScriptSaturationComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSaturationComponent();
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
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
