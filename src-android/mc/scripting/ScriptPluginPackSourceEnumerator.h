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
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<IScriptPluginSource>>> mPluginPackSources;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginPackSourceEnumerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPluginPackSourceEnumerator();

    virtual std::vector<std::shared_ptr<IScriptPluginSource>> const& getPluginSources() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPluginPackSourceEnumerator(std::string const&, std::vector<PackInstance> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::vector<PackInstance> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<std::shared_ptr<IScriptPluginSource>> const& $getPluginSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
