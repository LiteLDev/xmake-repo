#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::gatherings::model {

enum class ScenarioMode : int {
    None    = 0,
    Dev     = 1,
    Qa      = 2,
    Private = 3,
    Public  = 4,
};

}
