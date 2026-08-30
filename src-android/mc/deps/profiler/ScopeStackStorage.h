#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/Whisker_ScopeStackStorage.h"
#include "mc/deps/profiler/platform/Tracy_ScopeStackStorage.h"

namespace Bedrock::Profile {

class ScopeStackStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::Profile::Tracy_ScopeStackStorage>   mTracy;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profile::Whisker_ScopeStackStorage> mWhisker;
    // NOLINTEND
};

} // namespace Bedrock::Profile
