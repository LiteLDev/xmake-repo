#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ReflectionCtx.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/diagnostics/IScriptSentryRequestSender.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SentryEnvelope;
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryRequestSender : public ::ScriptModuleDiagnostics::IScriptSentryRequestSender {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealCtx;
    ::ll::TypedStorage<8, 24, std::string>              mSentryEnvelopeApiUri;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnkfa069e;
    ::ll::UntypedStorage<8, 32>  mUnkbedda0;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptSentryRequestSender& operator=(MinecraftScriptSentryRequestSender const&);
    MinecraftScriptSentryRequestSender(MinecraftScriptSentryRequestSender const&);
    MinecraftScriptSentryRequestSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendRequest(::SentryEnvelope sentryEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendRequest(::SentryEnvelope sentryEvent);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
