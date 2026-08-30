#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStateType {
public:
    // ScriptBlockStateType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockStateType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*> const> blockState;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                                 mName;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*> const>           mBlockState;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<int, std::string, bool>>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockStateType& operator=(ScriptBlockStateType const&);
    ScriptBlockStateType();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::BlockState const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
