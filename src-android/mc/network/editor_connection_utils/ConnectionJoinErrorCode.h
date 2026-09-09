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
