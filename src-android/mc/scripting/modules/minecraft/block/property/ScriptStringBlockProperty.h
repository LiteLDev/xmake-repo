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

class ScriptStringBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStringBlockProperty& operator=(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptStringBlockProperty();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStringBlockProperty(::ScriptModuleMinecraft::ScriptStringBlockProperty&&);

    MCNAPI ScriptStringBlockProperty(
        std::string,
        ::BlockState const&,
        std::vector<std::string>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>
    );

    MCNAPI ::Scripting::Result_deprecated<std::string> getState() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptStringBlockProperty&
    operator=(::ScriptModuleMinecraft::ScriptStringBlockProperty&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptStringBlockProperty&&);

    MCNAPI void* $ctor(
        std::string,
        ::BlockState const&,
        std::vector<std::string>,
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
