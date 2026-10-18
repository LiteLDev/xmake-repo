#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class IResourcePackRepository;
class RepositorySources;
// clang-format on

class IRepositoryFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IRepositoryFactory();
#else // @header-generator platform
    virtual ~IRepositoryFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<RepositorySources> createSources(::IResourcePackRepository const&) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::RepositorySources> createSources(::IResourcePackRepository const& repository) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPackIOProvider> createIO() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPackIOProvider> createIO() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
