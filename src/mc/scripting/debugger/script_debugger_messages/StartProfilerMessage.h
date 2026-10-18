#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

struct StartProfilerMessage
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::StartProfilerMessage> {
#else // @header-generator platform
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::StartProfilerMessage> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mTargetModuleUUID;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk5a6de8;
    ::ll::UntypedStorage<8, 16> mUnk2de747;
    // NOLINTEND

public:
    // prevent constructor by default
    StartProfilerMessage& operator=(StartProfilerMessage const&);
    StartProfilerMessage(StartProfilerMessage const&);
    StartProfilerMessage();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
