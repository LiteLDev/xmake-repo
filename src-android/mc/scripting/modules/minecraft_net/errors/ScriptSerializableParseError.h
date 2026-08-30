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
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftNet::ScriptSerializableParseError::Reason> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSerializableParseError();
};

} // namespace ScriptModuleMinecraftNet
