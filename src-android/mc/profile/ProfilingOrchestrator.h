#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profile/platform/Whisker_ProfileClient.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IMinecraftEventing;
namespace Bedrock::Profiling::Orchestrator { struct ClientState; }
namespace Bedrock::Profiling::Orchestrator { struct UserOptions; }
// clang-format on

namespace Bedrock::Profiling {

class ProfilingOrchestrator {
public:
    // ProfilingOrchestrator inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // ProfilingOrchestrator inner types define
    class Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct Whisker;
        // clang-format on

        // Impl inner types define
        struct Whisker {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mSamplingWhiskerHandle;
            ::ll::UntypedStorage<8, 16> mAlwaysOnWhiskerHandle;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>                                                           mGetOptions;
        ::ll::UntypedStorage<8, 48>                                                           mGetLevel;
        ::ll::UntypedStorage<8, 48>                                                           mGetEventingRef;
        ::ll::UntypedStorage<8, 48>                                                           mGetState;
        ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::ProfilingOrchestrator::Impl::Whisker> mWhisker;
        // NOLINTEND
    };

    using GetOptionsFunc = std::function<Bedrock::Profiling::Orchestrator::UserOptions()>;

    using GetLevelFunc = std::function<const ILevel*()>;

    using GetEventingRefFunc = std::function<IMinecraftEventing&()>;

    using GetStateFunc = std::function<Bedrock::Profiling::Orchestrator::ClientState()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::Profiling::ProfilingOrchestrator::Impl>>> mImpl;
    // NOLINTEND
};

} // namespace Bedrock::Profiling
