#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                     mModulePermissions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>             mAllowedModules;
    ::ll::TypedStorage<1, 2, std::optional<CommandPermissionLevel>> mCommandsPermissionLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isModuleAllowed(std::string const&) const;

    MCNAPI void setAllModulesAllowed();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sWildCardModuleName();
    // NOLINTEND
};
