#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileClient.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile { class ScopeStackStorage; }
namespace Bedrock::Profile::Whisker { struct ScopeData; }
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
namespace Core::Profile { class ScopeToken; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core::Profile {

class Whisker_ProfileClient : public ::Core::Profile::ProfileClient {
public:
    // Whisker_ProfileClient inner types declare
    // clang-format off
    struct KeepAlive;
    // clang-format on

    // Whisker_ProfileClient inner types define
    struct KeepAlive {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mSentinel;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk671c1d;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using KeepAliveHandle = std::shared_ptr<const Core::Profile::Whisker_ProfileClient::KeepAlive>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        KeepAlive& operator=(KeepAlive const&);
        KeepAlive(KeepAlive const&);
        KeepAlive();
    };
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Whisker_ProfileClient();
#else // @header-generator platform
    virtual ~Whisker_ProfileClient() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFrameTransition(uchar);
#else // @header-generator platform
    virtual void onFrameTransition(uchar previousFrameType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onThreadCreate(::brstd::basic_cstring_view<char, std::char_traits<char>>, ::Core::Profile::ThreadFrameType);
#else // @header-generator platform
    virtual void onThreadCreate(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onThreadDestroy();
#else // @header-generator platform
    virtual void onThreadDestroy() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMainThreadCreate();
#else // @header-generator platform
    virtual void onMainThreadCreate() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMainThreadDestroy();
#else // @header-generator platform
    virtual void onMainThreadDestroy() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    virtual void enterCPUProfile(
        ::Bedrock::Profile::ScopeStackStorage& scope,
        ::Core::Profile::ScopeToken const&     token
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    virtual void leaveCPUProfile(
        ::Bedrock::Profile::ScopeStackStorage& scope,
        ::Core::Profile::ScopeToken const&     token
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateCPUProfileTokenStatic(::Core::Profile::ScopeToken&, char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint, ::brstd::source_location const&);
    // clang-format on
#else // @header-generator platform
    virtual void generateCPUProfileTokenStatic(
        ::Core::Profile::ScopeToken&                  target,
        char const*                                   group,
        ::Bedrock::Profiler::details::StaticProfLabel label,
        uint                                          color,
        ::brstd::source_location const&               location
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fetchData(::gsl::span<Bedrock::Profile::Whisker::ScopeData>, std::__thread_id) const;

    MCNAPI std::shared_ptr<const Core::Profile::Whisker_ProfileClient::KeepAlive> makeActive(std::string_view);

    MCNAPI void prepareForFetch(::Bedrock::Profile::Whisker::ScopeData&, void const*) const;

    MCNAPI void purgeAllRecords();

    MCNAPI void queryThreadIDsByType(std::vector<std::__thread_id>&, ::Core::Profile::ThreadFrameType) const;

    MCNAPI void
        resolveUniqueKeysByName(::gsl::span<const void*>, ::gsl::span<const std::string_view>, std::__thread_id) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Profile::Whisker_ProfileClient getInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void fetchData(::gsl::span<::Bedrock::Profile::Whisker::ScopeData> output, ::std::thread::id thread) const;

    MCNAPI ::std::shared_ptr<::Core::Profile::Whisker_ProfileClient::KeepAlive const>
    makeActive(::std::string_view consumerName);

    MCNAPI void purgeAllRecords();

    MCNAPI void
    queryThreadIDsByType(::std::vector<::std::thread::id>& output, ::Core::Profile::ThreadFrameType threadType) const;

    MCNAPI void resolveUniqueKeysByName(
        ::gsl::span<void const*>              output,
        ::gsl::span<::std::string_view const> names,
        ::std::thread::id                     thread
    ) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFrameTransition(uchar);
#else // @header-generator platform
    MCNAPI void $onFrameTransition(uchar previousFrameType);
#endif // @header-generator platform

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
    MCNAPI void $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    MCNAPI void
    $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);
#else // @header-generator platform
    MCNAPI void
    $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage& scope, ::Core::Profile::ScopeToken const& token);
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::Profile
