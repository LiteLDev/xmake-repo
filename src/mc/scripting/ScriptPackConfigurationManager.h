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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                         mConfigDirectory;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptPackConfiguration>> mPackConfigurations;
    ::ll::TypedStorage<8, 152, ::ScriptPackConfiguration>                               mDefaultPackConfiguration;
    ::ll::TypedStorage<8, 80, std::optional<CommandsRegistryConfiguration>>             mCommandsRegistryConfiguration;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                       mSentryMaxEventsPerWindow;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> mSentryRateLimitWindow;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>> const>       mConfigDirectory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScriptPackConfiguration>> mPackConfigurations;
    ::ll::TypedStorage<8, 224, ::ScriptPackConfiguration>                                     mDefaultPackConfiguration;
    ::ll::TypedStorage<8, 104, ::std::optional<::CommandsRegistryConfiguration>> mCommandsRegistryConfiguration;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                              mSentryMaxEventsPerWindow;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::seconds>>           mSentryRateLimitWindow;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);
    ScriptPackConfigurationManager();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // virtual functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptPackConfigurationManager(std::optional<Core::PathBuffer<std::string>>);

    MCNAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager const&);

    MCNAPI std::optional<CommandsRegistryConfiguration> const& getCommandsRegistryConfiguration() const;

    MCNAPI ::ScriptPackConfiguration& getDefaultPackConfiguration();

    MCNAPI ::ScriptPackConfiguration const& getPackConfiguration(std::string const&) const;
#else // @header-generator platform
    virtual ~ScriptPackConfigurationManager() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& sDefaultConfigurationName();
#else // @header-generator platform
    MCNAPI ScriptPackConfigurationManager(::ScriptPackConfigurationManager const&);

    MCNAPI explicit ScriptPackConfigurationManager(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);

    MCNAPI ::ScriptPackConfiguration const& getPackConfiguration(::std::string const& packIdentifier) const;

#ifdef LL_PLAT_S
    MCNAPI void loadConfigs(::cereal::ReflectionCtx const& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::optional<Core::PathBuffer<std::string>>);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void* $ctor(::ScriptPackConfigurationManager const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void* $ctor(::std::optional<::Core::PathBuffer<::std::string>> configDirectory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
