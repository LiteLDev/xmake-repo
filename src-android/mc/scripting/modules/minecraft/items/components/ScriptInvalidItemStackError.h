#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidItemStackError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mItemType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidItemStackError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInvalidItemStackError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>,
        std::string_view
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>,
        std::string_view
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
