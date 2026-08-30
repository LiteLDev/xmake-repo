#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/CommandTeacherFlag.h"
#include "mc/server/commands/CommandAsyncFlag.h"
#include "mc/server/commands/CommandCheatFlag.h"
#include "mc/server/commands/CommandEditorFlag.h"
#include "mc/server/commands/CommandExecuteFlag.h"
#include "mc/server/commands/CommandSyncFlag.h"
#include "mc/server/commands/CommandTypeFlag.h"
#include "mc/server/commands/CommandUsageFlag.h"
#include "mc/server/commands/CommandVisibilityFlag.h"

struct CommandFlag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> flag;
    // NOLINTEND
};
