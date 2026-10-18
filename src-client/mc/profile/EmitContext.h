#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace Bedrock::Profiling::Orchestrator { struct ClientState; }
namespace Bedrock::Profiling::Orchestrator { struct UserOptions; }
// clang-format on

namespace Bedrock::Profiling::Orchestrator {

struct EmitContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevel const*>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiling::Orchestrator::UserOptions const*> mOptions;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiling::Orchestrator::ClientState const*> mState;
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Orchestrator
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
