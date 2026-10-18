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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                             mPackVariables;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mPackSecrets;
    ::ll::TypedStorage<8, 72, ::ScriptPackPermissions>                      mPackPermisions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Json::Value>> mPackVariables;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mPackSecrets;
    ::ll::TypedStorage<8, 96, ::ScriptPackPermissions>                            mPackPermisions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&);
    ScriptPackConfiguration();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration&&);
#else // @header-generator platform
    MCNAPI ScriptPackConfiguration(::ScriptPackConfiguration const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptPackPermissions const& getPermissions() const;

    MCNAPI ::ScriptPackPermissions& getPermissions();

    MCNAPI std::unordered_map<std::string, std::string> const& getSecrets() const;
#else // @header-generator platform
    MCNAPI ~ScriptPackConfiguration();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptPackConfiguration&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::ScriptPackConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
