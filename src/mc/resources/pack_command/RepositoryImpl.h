#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IResourceRepositories.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/pack_command/RepositoriesOptions.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pack;
namespace PackCommand { struct PackAssociations; }
// clang-format on
#endif // @header-generator platform

namespace PackCommand {

class RepositoryImpl : public ::PackCommand::IResourceRepositories {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::PackCommand::RepositoriesOptions> mOptions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkfd56c9;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryImpl& operator=(RepositoryImpl const&);
    RepositoryImpl(RepositoryImpl const&);
    RepositoryImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>& packs) /*override*/;

    virtual void removePacks(::std::vector<::gsl::not_null<::Pack const*>> const& packs) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>& packs);

    MCNAPI void $removePacks(::std::vector<::gsl::not_null<::Pack const*>> const& packs);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PackCommand
