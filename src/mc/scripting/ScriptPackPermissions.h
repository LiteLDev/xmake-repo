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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                     mModulePermissions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>             mAllowedModules;
    ::ll::TypedStorage<1, 2, std::optional<CommandPermissionLevel>> mCommandsPermissionLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, ::Json::Value>>>
                                                                        mModulePermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>             mAllowedModules;
    ::ll::TypedStorage<1, 2, ::std::optional<::CommandPermissionLevel>> mCommandsPermissionLevel;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isModuleAllowed(std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setAllModulesAllowed();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAllModulesAllowed();
#else // @header-generator platform
    MCNAPI ~ScriptPackPermissions();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& sWildCardModuleName();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::string const& sWildCardModuleName();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
