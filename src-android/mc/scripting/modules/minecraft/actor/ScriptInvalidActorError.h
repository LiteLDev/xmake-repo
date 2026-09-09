#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidActorError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidActorError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActor const&,
        std::string_view,
        std::string_view
    );

    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActorData const&,
        std::string_view,
        std::string_view
    );

    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        std::string_view,
        std::string_view,
        std::string_view,
        std::string_view
    );

    MCNAPI ~ScriptInvalidActorError();
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
        ::ScriptModuleMinecraft::ScriptActor const&,
        std::string_view,
        std::string_view
    );

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActorData const&,
        std::string_view,
        std::string_view
    );

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        std::string_view,
        std::string_view,
        std::string_view,
        std::string_view
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
