#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace ScriptDebuggerMessages {

struct ScriptDebuggerPacket {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mType;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEventPayload;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke55e60;
    ::ll::UntypedStorage<8, 72> mUnkdf880f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerPacket& operator=(ScriptDebuggerPacket const&);
    ScriptDebuggerPacket(ScriptDebuggerPacket const&);
    ScriptDebuggerPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool deserialize(::std::string const& rawData, ::cereal::ReflectionCtx const& cerealContext);

    MCNAPI ~ScriptDebuggerPacket();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
