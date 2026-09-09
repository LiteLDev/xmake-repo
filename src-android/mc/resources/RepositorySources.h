#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class ContentIdentity;
class PackSource;
class PackSourceFactory;
struct RepositorySourceOptions;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { class UUID; }
// clang-format on

class RepositorySources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<const RepositorySourceOptions>> mOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mPackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mCachePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mWorldPackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mTempWorldTemplatePackSource;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySources& operator=(RepositorySources const&);
    RepositorySources(RepositorySources const&);
    RepositorySources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializePackSource(::PackSourceFactory&);
    // NOLINTEND
};
