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

#if defined(LL_PLAT_A) // @header-generator platform
struct ProtocolResponse : public ::ScriptDebuggerMessages::NetworkPayload<ScriptDebuggerMessages::ProtocolResponse> {
#else // @header-generator platform
struct ProtocolResponse : public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::ProtocolResponse> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mType;
    ::ll::TypedStorage<4, 4, int>                         mVersion;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mTargetModuleUUID;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPasscode;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk37da2a;
    ::ll::UntypedStorage<4, 4>  mUnk823392;
    ::ll::UntypedStorage<8, 24> mUnk38dffa;
    ::ll::UntypedStorage<8, 40> mUnkbfeaa2;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolResponse(ProtocolResponse const&);
    ProtocolResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProtocolResponse() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProtocolResponse& operator=(::ScriptDebuggerMessages::ProtocolResponse const&);
    // NOLINTEND

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
