#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ScriptDebuggerSettings;
namespace Core { class Path; }
// clang-format on

class IScriptDebugger {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(std::string const&, ushort) = 0;
#else // @header-generator platform
    virtual bool connect(::std::string const& host, ushort port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool listen(ushort) = 0;
#else // @header-generator platform
    virtual bool listen(ushort port) = 0;
#endif // @header-generator platform

    virtual void stop() = 0;

    virtual ::ScriptDebuggerSettings const& getSettings() const = 0;

    virtual void startProfiler() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Core::Path> stopProfiler() = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DIAGNOSTICS_CAPTURES_FOLDER();

    MCNAPI static std::string_view const& PROFILER_CAPTURES_FOLDER();
#else // @header-generator platform
    virtual ::std::vector<::Core::Path> stopProfiler() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
