#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/scripting/ScriptPackConfiguration.h"
#include "mc/server/commands/CommandsRegistryConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                         mConfigDirectory;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptPackConfiguration>> mPackConfigurations;
    ::ll::TypedStorage<8, 152, ::ScriptPackConfiguration>                               mDefaultPackConfiguration;
    ::ll::TypedStorage<8, 80, std::optional<CommandsRegistryConfiguration>>             mCommandsRegistryConfiguration;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                       mSentryMaxEventsPerWindow;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> mSentryRateLimitWindow;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);
    ScriptPackConfigurationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPackConfigurationManager(std::optional<Core::PathBuffer<std::string>>);

    MCNAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager const&);

    MCNAPI std::optional<CommandsRegistryConfiguration> const& getCommandsRegistryConfiguration() const;

    MCNAPI ::ScriptPackConfiguration& getDefaultPackConfiguration();

    MCNAPI ::ScriptPackConfiguration const& getPackConfiguration(std::string const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sDefaultConfigurationName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::optional<Core::PathBuffer<std::string>>);

    MCNAPI void* $ctor(::ScriptPackConfigurationManager const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
