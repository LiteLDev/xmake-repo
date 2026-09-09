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
    virtual ~RepositoryFactory();

    virtual std::shared_ptr<RepositorySources> createSources(::IResourcePackRepository const&) const;

    virtual std::unique_ptr<IPackIOProvider> createIO() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<RepositorySources> $createSources(::IResourcePackRepository const&) const;

    MCNAPI std::unique_ptr<IPackIOProvider> $createIO() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
