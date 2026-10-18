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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 32, ::std::string> mType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptInvalidActorError& operator=(ScriptInvalidActorError const&);
#endif // @header-generator platform
    ScriptInvalidActorError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActor const&,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI ScriptInvalidActorError(::ScriptModuleMinecraft::ScriptInvalidActorError const&);

    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName,
        ::std::string_view                          entityName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActorData const&,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType        memberType,
        ::ScriptModuleMinecraft::ScriptActorData const& invalidActorData,
        ::std::string_view                              functionName,
        ::std::string_view                              entityName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType,
        std::string_view,
        std::string_view,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName,
        ::std::string_view                       entityName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptInvalidActorError();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptInvalidActorError&
    operator=(::ScriptModuleMinecraft::ScriptInvalidActorError&&);

    MCAPI ~ScriptInvalidActorError();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActor const&,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptInvalidActorError const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName,
        ::std::string_view                          entityName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        ::ScriptModuleMinecraft::ScriptActorData const&,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType        memberType,
        ::ScriptModuleMinecraft::ScriptActorData const& invalidActorData,
        ::std::string_view                              functionName,
        ::std::string_view                              entityName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType,
        std::string_view,
        std::string_view,
        std::string_view,
        std::string_view
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName,
        ::std::string_view                       entityName
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
