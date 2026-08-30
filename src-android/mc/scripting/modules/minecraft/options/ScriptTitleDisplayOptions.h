#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>  mSubtitle;
    ::ll::TypedStorage<4, 4, int> mFadeInTime;
    ::ll::TypedStorage<4, 4, int> mStayTime;
    ::ll::TypedStorage<4, 4, int> mFadeOutTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptTitleDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
