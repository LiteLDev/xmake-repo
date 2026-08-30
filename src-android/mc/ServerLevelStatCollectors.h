#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScriptStatCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

class ServerLevelStatCollectors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                       mServerLevel;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mLoadedChunksCollector;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mEntityCountCollector;
    // NOLINTEND
};
