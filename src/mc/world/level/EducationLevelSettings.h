#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/level/AgentCapabilities.h"
#include "mc/world/level/EducationLocalLevelSettings.h"
#include "mc/world/level/ExternalLinkSettings.h"

// auto generated forward declare list
// clang-format off
class LevelLooseFileStorage;
struct CommandFlag;
// clang-format on

struct EducationLevelSettings {
public:
    // EducationLevelSettings inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using CommandOverrideFunctor = std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>;
#else // @header-generator platform
    using CommandOverrideFunctor =
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>;

    using HiddenCommands = ::std::string;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           codeBuilderDefaultUri;
    ::ll::TypedStorage<8, 24, std::string>                           codeBuilderTitle;
    ::ll::TypedStorage<1, 1, bool>                                   canResizeCodeBuilder;
    ::ll::TypedStorage<1, 1, bool>                                   disableLegacyTitleBar;
    ::ll::TypedStorage<8, 24, std::string>                           postProcessFilter;
    ::ll::TypedStorage<8, 24, std::string>                           screenshotBorderResourcePath;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, uint>> hiddenCommands;
    ::ll::TypedStorage<8, 32, ::EducationLocalLevelSettings>         localSettings;
    ::ll::TypedStorage<1, 4, std::optional<AgentCapabilities>>       agentCapabilities;
    ::ll::TypedStorage<8, 56, std::optional<ExternalLinkSettings>>   externalLinkSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             codeBuilderDefaultUri;
    ::ll::TypedStorage<8, 32, ::std::string>                             codeBuilderTitle;
    ::ll::TypedStorage<1, 1, bool>                                       canResizeCodeBuilder;
    ::ll::TypedStorage<1, 1, bool>                                       disableLegacyTitleBar;
    ::ll::TypedStorage<8, 32, ::std::string>                             postProcessFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                             screenshotBorderResourcePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint>> hiddenCommands;
    ::ll::TypedStorage<8, 40, ::EducationLocalLevelSettings>             localSettings;
    ::ll::TypedStorage<1, 3, ::std::optional<::AgentCapabilities>>       agentCapabilities;
    ::ll::TypedStorage<8, 72, ::std::optional<::ExternalLinkSettings>>   externalLinkSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    EducationLevelSettings& operator=(EducationLevelSettings const&);
#else // @header-generator platform
#endif // @header-generator platform
    EducationLevelSettings();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EducationLevelSettings(::EducationLevelSettings const&);
#else // @header-generator platform
    MCAPI EducationLevelSettings(::EducationLevelSettings const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>
           getCommandOverrideFunctor() const;
#else // @header-generator platform
    MCAPI ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>
    getCommandOverrideFunctor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getScreenShotBorderPath() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getScreenShotBorderPath() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EducationLevelSettings();
#else // @header-generator platform
    MCAPI ::EducationLevelSettings& operator=(::EducationLevelSettings const&);

    MCAPI ~EducationLevelSettings();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<EducationLevelSettings> load(::LevelLooseFileStorage const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::EducationLevelSettings> load(::LevelLooseFileStorage const& storage);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_BORDER_PATH();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_BORDER_PATH();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EducationLevelSettings const&);
#else // @header-generator platform
    MCAPI void* $ctor(::EducationLevelSettings const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
