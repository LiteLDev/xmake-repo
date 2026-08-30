#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mIncludeBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mExcludeBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mIncludeTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBiomeFilter(::ScriptModuleMinecraft::ScriptBiomeFilter const&);

    MCNAPI bool isEmpty() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBiomeFilter& operator=(::ScriptModuleMinecraft::ScriptBiomeFilter&&);

    MCNAPI void setExcludeBiomes(std::optional<std::vector<std::string>>);

    MCNAPI void setExcludeTags(std::optional<std::vector<std::string>>);

    MCNAPI void setIncludeBiomes(std::optional<std::vector<std::string>>);

    MCNAPI void setIncludeTags(std::optional<std::vector<std::string>>);

    MCNAPI ~ScriptBiomeFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
