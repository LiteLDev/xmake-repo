#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SentryEnvelope;
// clang-format on

#endif // @header-generator platform
namespace ScriptModuleDiagnostics {

#if defined(LL_PLAT_A) // @header-generator platform
class IScriptSentryRequestSender {};
#else // @header-generator platform
class IScriptSentryRequestSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptSentryRequestSender() = default;

    virtual void sendRequest(::SentryEnvelope sentryEvent) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ScriptModuleDiagnostics
