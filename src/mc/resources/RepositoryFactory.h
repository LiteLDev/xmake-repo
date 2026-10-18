#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IRepositoryFactory.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class IResourcePackRepository;
class RepositorySources;
// clang-format on

class RepositoryFactory : public ::IRepositoryFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RepositoryFactory();
#else // @header-generator platform
    virtual ::std::shared_ptr<::RepositorySources> createSources(::IResourcePackRepository const& repository) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<RepositorySources> createSources(::IResourcePackRepository const&) const;

    virtual std::unique_ptr<IPackIOProvider> createIO() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPackIOProvider> createIO() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<RepositorySources> $createSources(::IResourcePackRepository const&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::RepositorySources> $createSources(::IResourcePackRepository const& repository) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPackIOProvider> $createIO() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::IPackIOProvider> $createIO() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
