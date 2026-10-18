#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ContentIdentity;
class PackSource;
#else // @header-generator platform
#endif // @header-generator platform
class PackSourceFactory;
struct RepositorySourceOptions;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RepositorySources {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<const RepositorySourceOptions>> mOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mPackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mCachePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mWorldPackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mTempWorldTemplatePackSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RepositorySourceOptions const>> mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mCachePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mWorldPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mTempWorldTemplatePackSource;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RepositorySources& operator=(RepositorySources const&);
    RepositorySources(RepositorySources const&);
    RepositorySources();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializePackSource(::PackSourceFactory&);
#else // @header-generator platform
    MCAPI void initializePackSource(::PackSourceFactory& packSourceFactory);
#endif // @header-generator platform
    // NOLINTEND
};
