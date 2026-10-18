#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class PackInstance;
#else // @header-generator platform
#endif // @header-generator platform
class PackManifest;
namespace Core { class Path; }
// clang-format on

class ScriptPluginPackSource : public ::IScriptPluginSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>          mScriptRoot;
    ::ll::TypedStorage<8, 8, ::PackInstance const&> mPackInstance;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk758692;
    ::ll::UntypedStorage<8, 8>  mUnkec988c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&);
    ScriptPluginPackSource(ScriptPluginPackSource const&);
    ScriptPluginPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptPluginPackSource();
#else // @header-generator platform
    virtual ::PackManifest const& getManifest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackManifest const& getManifest();
#else // @header-generator platform
    virtual ::std::vector<::std::string> enumerateScripts(::std::string const& extension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> enumerateScripts(std::string const&);
#else // @header-generator platform
    virtual ::std::optional<::std::string> loadScript(::std::string const& path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> loadScript(std::string const&);

    virtual std::string removeRootFromPath(std::string const&);
#else // @header-generator platform
    virtual ::std::string removeRootFromPath(::std::string const& path) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Path _removeRootFromPath(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::Core::Path _removeRootFromPath(::Core::Path const& pathIn);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackManifest const& $getManifest();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $enumerateScripts(std::string const&);
#else // @header-generator platform
    MCNAPI ::std::vector<::std::string> $enumerateScripts(::std::string const& extension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> $loadScript(std::string const&);
#else // @header-generator platform
    MCNAPI ::std::optional<::std::string> $loadScript(::std::string const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $removeRootFromPath(std::string const&);
#else // @header-generator platform
    MCNAPI ::std::string $removeRootFromPath(::std::string const& path);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
