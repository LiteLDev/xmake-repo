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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mIncludeBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mExcludeBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mIncludeTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mExcludeTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeTags;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ScriptBiomeFilter& operator=(ScriptBiomeFilter const&);
    ScriptBiomeFilter();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBiomeFilter(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
#else // @header-generator platform
    MCAPI ScriptBiomeFilter(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty() const;
#else // @header-generator platform
    MCAPI void
    setBiomes(::std::vector<::std::string>& biomeContainer, ::std::optional<::std::vector<::std::string>> biomes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBiomeFilter& operator=(::ScriptModuleMinecraft::ScriptBiomeFilter&&);

    MCNAPI void setExcludeBiomes(std::optional<std::vector<std::string>>);

    MCNAPI void setExcludeTags(std::optional<std::vector<std::string>>);

    MCNAPI void setIncludeBiomes(std::optional<std::vector<std::string>>);

    MCNAPI void setIncludeTags(std::optional<std::vector<std::string>>);

    MCNAPI ~ScriptBiomeFilter();
#else // @header-generator platform
    MCAPI void setTags(::std::vector<::std::string>& tagContainer, ::std::optional<::std::vector<::std::string>> tags);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
