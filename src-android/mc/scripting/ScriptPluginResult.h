#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

class ScriptPluginResult {
public:
    // ScriptPluginResult inner types declare
    // clang-format off
    struct Error;
    struct Warning;
    struct Info;
    struct Verbose;
    // clang-format on

    // ScriptPluginResult inner types define
    struct Error {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> message;
        // NOLINTEND

    public:
        // prevent constructor by default
        Error& operator=(Error const&);
        Error();
    };

    struct Warning {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> message;
        // NOLINTEND

    public:
        // prevent constructor by default
        Warning& operator=(Warning const&);
        Warning();
    };

    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> message;
        // NOLINTEND

    public:
        // prevent constructor by default
        Info& operator=(Info const&);
        Info();
    };

    struct Verbose {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> message;
        // NOLINTEND

    public:
        // prevent constructor by default
        Verbose& operator=(Verbose const&);
        Verbose();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                        mPackId;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor const>                     mDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Error>>                  mErrors;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Warning>>                mWarnings;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Info>>                   mInfos;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Verbose>>                mVerboses;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mRunDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPluginResult(::ScriptPluginResult&&);

    MCNAPI std::vector<ScriptPluginResult::Error> const& getErrors() const;

    MCNAPI ::Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000>> getRunDuration() const;

    MCNAPI std::vector<ScriptPluginResult::Warning> const& getWarnings() const;

    MCNAPI void logError(std::string const&);

    MCNAPI void logInfo(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPluginResult&&);
    // NOLINTEND
};
