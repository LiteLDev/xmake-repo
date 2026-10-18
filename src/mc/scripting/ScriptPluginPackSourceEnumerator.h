#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSourceEnumerator.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class PackInstance;
// clang-format on

class ScriptPluginPackSourceEnumerator : public ::IScriptPluginSourceEnumerator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IScriptPluginSource>>> mPluginPackSources;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkfd5333;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPluginPackSourceEnumerator& operator=(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator(ScriptPluginPackSourceEnumerator const&);
#endif // @header-generator platform
    ScriptPluginPackSourceEnumerator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptPluginPackSourceEnumerator();

    virtual std::vector<std::shared_ptr<IScriptPluginSource>> const& getPluginSources() const;
#else // @header-generator platform
    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPluginPackSourceEnumerator(std::string const&, std::vector<PackInstance> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI
    ScriptPluginPackSourceEnumerator(::std::string const& scriptRoot, ::std::vector<::PackInstance> const& packStack);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::vector<PackInstance> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& scriptRoot, ::std::vector<::PackInstance> const& packStack);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<IScriptPluginSource>> const& $getPluginSources() const;
#else // @header-generator platform
    MCNAPI ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& $getPluginSources() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
