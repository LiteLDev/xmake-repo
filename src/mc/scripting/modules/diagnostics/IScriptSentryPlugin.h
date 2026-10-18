#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ScriptSentryLogger;
// clang-format on

#endif // @header-generator platform
namespace ScriptModuleDiagnostics {

#if defined(LL_PLAT_A) // @header-generator platform
class IScriptSentryPlugin {};
#else // @header-generator platform
class IScriptSentryPlugin {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptSentryPlugin() = default;

    virtual void setSentryLogger(::std::unique_ptr<::ScriptSentryLogger> sentryLogger) = 0;

    virtual ::std::string const& getPlatformName() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ScriptModuleDiagnostics
