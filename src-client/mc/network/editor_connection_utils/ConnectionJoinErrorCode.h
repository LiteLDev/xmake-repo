#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EditorConnectionUtils {

enum class ConnectionJoinErrorCode : int {
    EditorWorldRequired                  = 0,
    EditorClientRequired                 = 1,
    VanillaClientRequired                = 2,
    EditorClientWithEditorIntentRequired = 3,
    VanillaConnectionRequired            = 4,
    UnknownServerPolicy                  = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
