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

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<int>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptIntBlockProperty();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptIntBlockProperty(::ScriptModuleMinecraft::ScriptIntBlockProperty&&);

    MCNAPI ScriptIntBlockProperty(
        std::string,
        ::BlockState const&,
        std::vector<int>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    );

    MCNAPI ::Scripting::Result_deprecated<int> getState() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptIntBlockProperty&
    operator=(::ScriptModuleMinecraft::ScriptIntBlockProperty&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptIntBlockProperty&&);

    MCNAPI void* $ctor(
        std::string,
        ::BlockState const&,
        std::vector<int>,
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
