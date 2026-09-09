#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptNativeModuleIds {

struct Environment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::TypedStorage<1, 1, bool> mIsPublish;
    // NOLINTEND
};

} // namespace ScriptNativeModuleIds
