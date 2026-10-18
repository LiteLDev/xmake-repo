#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
#include "mc/deps/profiler/CounterDisplayFormat.h"
#include "mc/deps/profiler/FileExtension.h"
#include "mc/deps/profiler/LegacyCounterFlags.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profiler::details { struct DynamicProfLabel; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class CounterToken; }
namespace Core::Profile { class GPUProfileToken; }
namespace Core::Profile { class LogMessageToken; }
namespace Core::Profile { class ScopeToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {

class ProfileClient {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ProfileClient inner types define
    using GPUEvent = uint;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ProfileClient();
#else // @header-generator platform
    virtual ~ProfileClient() = default;
#endif // @header-generator platform

    virtual void initializeProfile();

    virtual void shutdownProfile();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setProfileStamp(std::string_view);
#else // @header-generator platform
    virtual void setProfileStamp(::std::string_view);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFrameTransition(uchar);
#else // @header-generator platform
    virtual void onFrameTransition(uchar previousFrameType);
#endif // @header-generator platform

    virtual uint getMaxTokens() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onThreadCreate(::brstd::basic_cstring_view<char, std::char_traits<char>>, ::Core::Profile::ThreadFrameType);
#else // @header-generator platform
    virtual void onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );
#endif // @header-generator platform

    virtual void onThreadDestroy();

    virtual void onMainThreadCreate();

    virtual void onMainThreadDestroy();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onHeapAllocation(void const*, ulong, ::Memory::MemoryCategory, char const*);
#else // @header-generator platform
    virtual void onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onHeapFree(void const*, ulong, ::Memory::MemoryCategory, char const*);
#else // @header-generator platform
    virtual void onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    virtual void
    enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enterCPUProfileDynamic(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);
#else // @header-generator platform
    virtual void enterCPUProfileDynamic(
        ::Bedrock::Profile::ScopeStackStorage& scope,
        ::Core::Profile::ScopeToken const&     token,
        ::Bedrock::Profiler::details::DynamicProfLabel
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    virtual void
    leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar createGPUContext(char const*, long, float, bool, bool);
#else // @header-generator platform
    virtual uchar createGPUContext(char const*, int64, float, bool, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);
#else // @header-generator platform
    virtual uint
    enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);
#endif // @header-generator platform

    virtual void leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void emitGPUTiming(uint, long, long);
#else // @header-generator platform
    virtual void emitGPUTiming(uint, int64, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void syncGPUTiming(uchar, long, long, long);
#else // @header-generator platform
    virtual void syncGPUTiming(uchar, int64, int64, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void counterAdd(::Core::Profile::CounterToken const&, long);
#else // @header-generator platform
    virtual void counterAdd(::Core::Profile::CounterToken const&, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void counterSet(::Core::Profile::CounterToken const&, long);
#else // @header-generator platform
    virtual void counterSet(::Core::Profile::CounterToken const&, int64);
#endif // @header-generator platform

    virtual void emitLogMessage(::Core::Profile::LogMessageToken const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void emitLogMessageDynamic(::Core::Profile::LogMessageToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);
#else // @header-generator platform
    virtual void
    emitLogMessageDynamic(::Core::Profile::LogMessageToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);
#endif // @header-generator platform

    virtual void beginCapture(char const*);

    virtual void endCapture(bool);

    virtual void logCaptureResults();

    virtual bool isCaptureEnding();

    virtual void setMarker(char const*, uint) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCPUProfileTokenStatic(::Core::Profile::ScopeToken&, char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::ScopeToken&                  target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCPUProfileTokenLegacy(::Core::Profile::ScopeToken&, char const*, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateCPUProfileTokenLegacy(
        ::Core::Profile::ScopeToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCPUProfileTokenDynamic(::Core::Profile::ScopeToken&, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void
    generateCPUProfileTokenDynamic(::Core::Profile::ScopeToken&, char const*, uint, ::brstd::source_location const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateGPUProfileToken(::Core::Profile::GPUProfileToken&, char const*, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateGPUProfileToken(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateGPUProfileTokenDynamic(::Core::Profile::GPUProfileToken&, char const*, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateGPUProfileTokenDynamic(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCounterToken(::Core::Profile::CounterToken&, char const*);
#else // @header-generator platform
    virtual void generateCounterToken(::Core::Profile::CounterToken& target, char const* label);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCounterTokenWithConfig(::Core::Profile::CounterToken&, char const*, ::Core::Profile::CounterDisplayFormat, long, ::Core::Profile::LegacyCounterFlags);
#else // @header-generator platform
    virtual void generateCounterTokenWithConfig(
        ::Core::Profile::CounterToken&,
        char const*,
        ::Core::Profile::CounterDisplayFormat,
        int64,
        ::Core::Profile::LegacyCounterFlags
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateLogMessageTokenStatic(::Core::Profile::LogMessageToken&, char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateLogMessageTokenStatic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateLogMessageTokenDynamic(::Core::Profile::LogMessageToken&, char const*, uint, ::brstd::source_location const&);
#else // @header-generator platform
    virtual void generateLogMessageTokenDynamic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long getProfilerTimestamp();
#else // @header-generator platform
    virtual int64 getProfilerTimestamp();
#endif // @header-generator platform

    virtual void dumpFile(char const*, ::Core::Profile::FileExtension);
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeProfile();

    MCNAPI void $shutdownProfile();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setProfileStamp(std::string_view);
#else // @header-generator platform
    MCNAPI void $setProfileStamp(::std::string_view);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFrameTransition(uchar);
#else // @header-generator platform
    MCNAPI void $onFrameTransition(uchar previousFrameType);
#endif // @header-generator platform

    MCNAPI uint $getMaxTokens() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        $onThreadCreate(::brstd::basic_cstring_view<char, std::char_traits<char>>, ::Core::Profile::ThreadFrameType);
#else // @header-generator platform
    MCNAPI void $onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );
#endif // @header-generator platform

    MCNAPI void $onThreadDestroy();

    MCNAPI void $onMainThreadCreate();

    MCNAPI void $onMainThreadDestroy();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onHeapAllocation(void const*, ulong, ::Memory::MemoryCategory, char const*);
#else // @header-generator platform
    MCNAPI void $onHeapAllocation(void const*, uint64, ::Memory::MemoryCategory, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onHeapFree(void const*, ulong, ::Memory::MemoryCategory, char const*);
#else // @header-generator platform
    MCNAPI void $onHeapFree(void const*, uint64, ::Memory::MemoryCategory, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    MCNAPI void
    $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

    MCNAPI void $enterCPUProfileDynamic(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Bedrock::Profile::ScopeStackStorage&,
        ::Core::Profile::ScopeToken const&,
#else // @header-generator platform
        ::Bedrock::Profile::ScopeStackStorage& scope,
        ::Core::Profile::ScopeToken const&     token,
#endif // @header-generator platform
        ::Bedrock::Profiler::details::DynamicProfLabel
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    MCNAPI void
    $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $createGPUContext(char const*, long, float, bool, bool);
#else // @header-generator platform
    MCNAPI uchar $createGPUContext(char const*, int64, float, bool, bool);
#endif // @header-generator platform

    MCNAPI uint
    $enterGPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::GPUProfileToken const&, uchar);

    MCNAPI void $leaveGPUProfile(::Bedrock::Profile::ScopeStackStorage&, uint);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $emitGPUTiming(uint, long, long);
#else // @header-generator platform
    MCNAPI void $emitGPUTiming(uint, int64, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $syncGPUTiming(uchar, long, long, long);
#else // @header-generator platform
    MCNAPI void $syncGPUTiming(uchar, int64, int64, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $counterAdd(::Core::Profile::CounterToken const&, long);
#else // @header-generator platform
    MCNAPI void $counterAdd(::Core::Profile::CounterToken const&, int64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $counterSet(::Core::Profile::CounterToken const&, long);
#else // @header-generator platform
    MCNAPI void $counterSet(::Core::Profile::CounterToken const&, int64);
#endif // @header-generator platform

    MCNAPI void $emitLogMessage(::Core::Profile::LogMessageToken const&);

    MCNAPI void
    $emitLogMessageDynamic(::Core::Profile::LogMessageToken const&, ::Bedrock::Profiler::details::DynamicProfLabel);

    MCNAPI void $beginCapture(char const*);

    MCNAPI void $endCapture(bool);

    MCNAPI void $logCaptureResults();

    MCNAPI bool $isCaptureEnding();

    MCNAPI void $setMarker(char const*, uint) const;

    MCNAPI void $generateCPUProfileTokenStatic(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::Profile::ScopeToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
#else // @header-generator platform
        ::Core::Profile::ScopeToken&                  target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
#endif // @header-generator platform
    );

    MCNAPI void $generateCPUProfileTokenLegacy(
        ::Core::Profile::ScopeToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void
    $generateCPUProfileTokenDynamic(::Core::Profile::ScopeToken&, char const*, uint, ::brstd::source_location const&);

    MCNAPI void $generateGPUProfileToken(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateGPUProfileTokenDynamic(
        ::Core::Profile::GPUProfileToken&,
        char const*,
        char const*,
        uint,
        ::brstd::source_location const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $generateCounterToken(::Core::Profile::CounterToken&, char const*);
#else // @header-generator platform
    MCNAPI void $generateCounterToken(::Core::Profile::CounterToken& target, char const* label);
#endif // @header-generator platform

    MCNAPI void $generateCounterTokenWithConfig(
        ::Core::Profile::CounterToken&,
        char const*,
        ::Core::Profile::CounterDisplayFormat,
#if defined(LL_PLAT_A) // @header-generator platform
        long,
#else // @header-generator platform
        int64,
#endif // @header-generator platform
        ::Core::Profile::LegacyCounterFlags
    );

    MCNAPI void $generateLogMessageTokenStatic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );

    MCNAPI void $generateLogMessageTokenDynamic(
        ::Core::Profile::LogMessageToken&,
        char const*,
        uint,
        ::brstd::source_location const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $getProfilerTimestamp();
#else // @header-generator platform
    MCNAPI int64 $getProfilerTimestamp();
#endif // @header-generator platform

    MCNAPI void $dumpFile(char const*, ::Core::Profile::FileExtension);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
