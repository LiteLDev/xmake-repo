#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class JoinedRecordSchemaVersion : int {
    Initial          = 1,
    AddEditorSupport = 2,
};
#else // @header-generator platform
enum class JoinedRecordSchemaVersion : int {};
#endif // @header-generator platform
