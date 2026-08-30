#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftClient {

struct ScriptClientMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptClientMessage(std::string, std::string);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftClient
