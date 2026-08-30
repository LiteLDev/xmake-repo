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
        ::ll::TypedStorage<1, 1, bool> mSentinel;
        // NOLINTEND
    };

    using KeepAliveHandle = std::shared_ptr<const Core::Profile::Whisker_ProfileClient::KeepAlive>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Whisker_ProfileClient();

    virtual void onFrameTransition(uchar);

    virtual void onThreadCreate(::brstd::basic_cstring_view<char, std::char_traits<char>>, ::Core::Profile::ThreadFrameType);

    virtual void onThreadDestroy();

    virtual void onMainThreadCreate();

    virtual void onMainThreadDestroy();

    virtual void enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);

    virtual void leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);

    virtual void generateCPUProfileTokenStatic(::Core::Profile::ScopeToken&, char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint, ::brstd::source_location const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onFrameTransition(uchar);

    MCNAPI void
        $onThreadCreate(::brstd::basic_cstring_view<char, std::char_traits<char>>, ::Core::Profile::ThreadFrameType);

    MCNAPI void $onThreadDestroy();

    MCNAPI void $onMainThreadCreate();

    MCNAPI void $onMainThreadDestroy();

    MCNAPI void $enterCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);

    MCNAPI void $leaveCPUProfile(::Bedrock::Profile::ScopeStackStorage&, ::Core::Profile::ScopeToken const&);

    MCNAPI void $generateCPUProfileTokenStatic(
        ::Core::Profile::ScopeToken&,
        char const*,
        ::Bedrock::Profiler::details::StaticProfLabel,
        uint,
        ::brstd::source_location const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::Profile
