#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

enum class JSONType : int {
    NULL_TYPE = 0,
    BOOLEAN   = 1,
    NUMBER    = 2,
    STRING    = 3,
    ARRAY     = 4,
    OBJECT    = 5,
};

}
