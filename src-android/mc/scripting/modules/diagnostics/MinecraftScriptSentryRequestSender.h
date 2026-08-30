#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/scripting/modules/diagnostics/IScriptSentryRequestSender.h"

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryRequestSender : public ::ScriptModuleDiagnostics::IScriptSentryRequestSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealCtx;
    ::ll::TypedStorage<8, 24, std::string>              mSentryEnvelopeApiUri;
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
