#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSource.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
class PackManifest;
namespace Core { class Path; }
// clang-format on

class ScriptPluginPackSource : public ::IScriptPluginSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mScriptRoot;
    ::ll::TypedStorage<8, 8, ::PackInstance const&> mPackInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&);
    ScriptPluginPackSource(ScriptPluginPackSource const&);
    ScriptPluginPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPluginPackSource();

    virtual ::PackManifest const& getManifest();

    virtual std::vector<std::string> enumerateScripts(std::string const&);

    virtual std::optional<std::string> loadScript(std::string const&);

    virtual std::string removeRootFromPath(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Path _removeRootFromPath(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackManifest const& $getManifest();

    MCNAPI std::vector<std::string> $enumerateScripts(std::string const&);

    MCNAPI std::optional<std::string> $loadScript(std::string const&);

    MCNAPI std::string $removeRootFromPath(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
