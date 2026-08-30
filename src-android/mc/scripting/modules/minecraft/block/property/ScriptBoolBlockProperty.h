#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/property/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoolBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<bool>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBoolBlockProperty& operator=(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBoolBlockProperty();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBoolBlockProperty(::ScriptModuleMinecraft::ScriptBoolBlockProperty&&);

    MCNAPI ScriptBoolBlockProperty(
        std::string,
        ::BlockState const&,
        std::vector<bool>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    );

    MCNAPI ::Scripting::Result_deprecated<bool> getState() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBoolBlockProperty&
    operator=(::ScriptModuleMinecraft::ScriptBoolBlockProperty&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBoolBlockProperty&&);

    MCNAPI void* $ctor(
        std::string,
        ::BlockState const&,
        std::vector<bool>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    );
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
