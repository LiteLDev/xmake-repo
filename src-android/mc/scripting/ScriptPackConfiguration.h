#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptPackPermissions.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                             mPackVariables;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mPackSecrets;
    ::ll::TypedStorage<8, 72, ::ScriptPackPermissions>                      mPackPermisions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&);
    ScriptPackConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration&&);

    MCNAPI ::ScriptPackPermissions const& getPermissions() const;

    MCNAPI ::ScriptPackPermissions& getPermissions();

    MCNAPI std::unordered_map<std::string, std::string> const& getSecrets() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPackConfiguration&&);
    // NOLINTEND
};
