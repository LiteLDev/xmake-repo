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
#if defined(LL_PLAT_A) // @header-generator platform
    struct Warning;
#else // @header-generator platform
#endif // @header-generator platform
    struct Info;
    struct Verbose;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Warning;
#endif // @header-generator platform
    // clang-format on

    // ScriptPluginResult inner types define
    struct Error {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> message;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Error& operator=(Error const&);
        Error();
    };

    struct Warning {
    public:
        // member variables
#else // @header-generator platform
        // member functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
        MCAPI ~Error();
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Warning& operator=(Warning const&);
        Warning();
#else // @header-generator platform
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

    struct Info {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> message;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Info& operator=(Info const&);
        Info();
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCAPI ~Info();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

    struct Verbose {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> message;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Warning {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Verbose& operator=(Verbose const&);
        Verbose();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> message;
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                        mPackId;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor const>                     mDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Error>>                  mErrors;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Warning>>                mWarnings;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Info>>                   mInfos;
    ::ll::TypedStorage<8, 24, std::vector<ScriptPluginResult::Verbose>>                mVerboses;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mRunDuration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::PackIdVersion const>                        mPackId;
    ::ll::TypedStorage<8, 96, ::Scripting::ModuleDescriptor const>          mDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Error>>   mErrors;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Warning>> mWarnings;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Info>>    mInfos;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptPluginResult::Verbose>> mVerboses;
    ::ll::TypedStorage<8, 8, ::std::chrono::microseconds>                   mRunDuration;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPluginResult& operator=(ScriptPluginResult const&);
    ScriptPluginResult();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPluginResult(::ScriptPluginResult&&);
#else // @header-generator platform
    MCAPI void logError(::std::string const& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptPluginResult::Error> const& getErrors() const;
#else // @header-generator platform
    MCAPI void logInfo(::std::string const& info);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000>> getRunDuration() const;

    MCNAPI std::vector<ScriptPluginResult::Warning> const& getWarnings() const;

    MCNAPI void logError(std::string const&);

    MCNAPI void logInfo(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ScriptPluginResult();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptPluginResult&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
