#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerSoundInstance;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundDurationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerSoundInstance>> mSoundInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDurationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptSoundDurationInfo(std::shared_ptr<ServerSoundInstance>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ServerSoundInstance>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
