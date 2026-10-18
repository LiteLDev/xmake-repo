#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#endif // @header-generator platform
#include "mc/resources/IResourcePackRepositoryRefresher.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RepositoryLoading { class IRepositoryLoader; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

class RefresherImpl : public ::IResourcePackRepositoryRefresher {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<RepositoryLoading::IRepositoryLoader>>> mLoader;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk31a5be;
    // NOLINTEND

public:
    // prevent constructor by default
    RefresherImpl& operator=(RefresherImpl const&);
    RefresherImpl(RefresherImpl const&);
    RefresherImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<void> initialize() /*override*/;

    virtual ::Bedrock::Threading::Async<void> refreshPacks() /*override*/;

    virtual ::Bedrock::Threading::Async<void> reloadUserPacks() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> $initialize();

    MCNAPI ::Bedrock::Threading::Async<void> $refreshPacks();

    MCNAPI ::Bedrock::Threading::Async<void> $reloadUserPacks();


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RepositoryLoading
