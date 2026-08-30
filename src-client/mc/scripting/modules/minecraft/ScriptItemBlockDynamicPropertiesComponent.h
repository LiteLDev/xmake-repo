#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/DynamicPropertiesBlockActorComponent.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

namespace ScriptModuleMinecraft {

class ScriptItemBlockDynamicPropertiesComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::DynamicPropertiesBlockActorComponent> mDynamicProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemBlockDynamicPropertiesComponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
