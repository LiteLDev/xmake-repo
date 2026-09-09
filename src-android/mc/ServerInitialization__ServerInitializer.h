#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerInitialization__IServerInitializer.h"
#include "mc/deps/core/threading/TaskGroup.h"

namespace ServerInitialization {

class ServerInitializer : public ::ServerInitialization::IServerInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND
};

} // namespace ServerInitialization
