#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageScoreInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> name;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> objective;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> name;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> objective;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptRawMessageScoreInterface(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);
#else // @header-generator platform
    MCFOLD bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&) const;

    MCNAPI ~ScriptRawMessageScoreInterface();
#else // @header-generator platform
    MCAPI ~ScriptRawMessageScoreInterface();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
