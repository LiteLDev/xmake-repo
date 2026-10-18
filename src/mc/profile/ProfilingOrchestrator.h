#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profile/platform/Whisker_ProfileClient.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::UntypedStorage<8, 16> mSamplingWhiskerHandle;
            ::ll::UntypedStorage<8, 16> mAlwaysOnWhiskerHandle;
#else // @header-generator platform
            ::ll::UntypedStorage<8, 16> mUnk635552;
            ::ll::UntypedStorage<8, 16> mUnk4bd558;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

        public:
            // prevent constructor by default
            Whisker& operator=(Whisker const&);
            Whisker(Whisker const&);
            Whisker();
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48>                                                           mGetOptions;
        ::ll::UntypedStorage<8, 48>                                                           mGetLevel;
        ::ll::UntypedStorage<8, 48>                                                           mGetEventingRef;
        ::ll::UntypedStorage<8, 48>                                                           mGetState;
        ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::ProfilingOrchestrator::Impl::Whisker> mWhisker;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnke76782;
        ::ll::UntypedStorage<8, 64> mUnk36fb68;
        ::ll::UntypedStorage<8, 64> mUnk4d83af;
        ::ll::UntypedStorage<8, 64> mUnke69ca2;
        ::ll::UntypedStorage<8, 32> mUnk60f52e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI Impl(
            ::std::function<::Bedrock::Profiling::Orchestrator::UserOptions()>&& getOptions,
            ::std::function<::ILevel const*()>&&                                 getLevel,
            ::std::function<::IMinecraftEventing&()>&&                           getEventingRef,
            ::std::function<::Bedrock::Profiling::Orchestrator::ClientState()>&& getState
        );

        MCNAPI void tick();

        MCNAPI ~Impl();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(
            ::std::function<::Bedrock::Profiling::Orchestrator::UserOptions()>&& getOptions,
            ::std::function<::ILevel const*()>&&                                 getLevel,
            ::std::function<::IMinecraftEventing&()>&&                           getEventingRef,
            ::std::function<::Bedrock::Profiling::Orchestrator::ClientState()>&& getState
        );
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using GetOptionsFunc = std::function<Bedrock::Profiling::Orchestrator::UserOptions()>;

    using GetLevelFunc = std::function<const ILevel*()>;

    using GetEventingRefFunc = std::function<IMinecraftEventing&()>;

    using GetStateFunc = std::function<Bedrock::Profiling::Orchestrator::ClientState()>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::Profiling::ProfilingOrchestrator::Impl>>> mImpl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf55b40;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilingOrchestrator& operator=(ProfilingOrchestrator const&);
    ProfilingOrchestrator(ProfilingOrchestrator const&);
    ProfilingOrchestrator();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void tick();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Profiling
