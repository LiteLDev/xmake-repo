#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details::AnnotationFlags::Flag::Composite {

enum Value : uchar {
    RetailLiteAndBelow = 1,
    RetailPlusAndBelow = 3,
    DevAndBelow        = 7,
    VerboseAndBelow    = 15,
    TraceAndBelow      = 31,
};

}
