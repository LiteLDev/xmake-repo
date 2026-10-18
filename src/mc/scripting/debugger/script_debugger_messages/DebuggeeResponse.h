#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/debugger/script_debugger_messages/ResponseEnvelope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

#if defined(LL_PLAT_A) // @header-generator platform
struct DebuggeeResponse : public ::ScriptDebuggerMessages::ResponseEnvelope<ScriptDebuggerMessages::DebuggeeResponse> {
#else // @header-generator platform
struct DebuggeeResponse
: public ::ScriptDebuggerMessages::ResponseEnvelope<::ScriptDebuggerMessages::DebuggeeResponse> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mRequestSeq;
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
    ::ll::TypedStorage<8, 24, std::string>                         mResponseMessage;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk5c92d4;
    ::ll::UntypedStorage<1, 1>  mUnkeda63a;
    ::ll::UntypedStorage<8, 32> mUnk20fbb3;
    ::ll::UntypedStorage<8, 80> mUnk7ab5fc;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggeeResponse& operator=(DebuggeeResponse const&);
    DebuggeeResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggeeResponse(::ScriptDebuggerMessages::DebuggeeResponse const&);

    MCNAPI DebuggeeResponse(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::DebuggeeResponse const&);

    MCNAPI void* $ctor(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
