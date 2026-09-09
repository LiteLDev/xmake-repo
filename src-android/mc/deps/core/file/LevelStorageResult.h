#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

namespace Core {

struct LevelStorageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Core::LevelStorageState> state;
    ::ll::TypedStorage<8, 24, std::string>              telemetryMsg;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageResult& operator=(LevelStorageResult const&);
    LevelStorageResult(LevelStorageResult const&);
    LevelStorageResult();
};

} // namespace Core
