#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptSerializableParseError : public ::Scripting::BaseError {
public:
    // ScriptSerializableParseError inner types define
    enum class Reason : int {
        EmptyBody               = 0,
        InvalidContentType      = 1,
        InvalidIdentifier       = 2,
        IdentifierAlreadyExists = 3,
        InvalidData             = 4,
        SerializationFailed     = 5,
        DeserializationFailed   = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptSerializableParseError::Reason> mReason;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkfe45a9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptSerializableParseError& operator=(ScriptSerializableParseError const&);
    ScriptSerializableParseError(ScriptSerializableParseError const&);
#endif // @header-generator platform
    ScriptSerializableParseError();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
