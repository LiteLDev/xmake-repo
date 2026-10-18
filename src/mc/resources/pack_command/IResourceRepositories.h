#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Pack;
namespace PackCommand { struct PackAssociations; }
// clang-format on

#endif // @header-generator platform
namespace PackCommand {

#if defined(LL_PLAT_A) // @header-generator platform
class IResourceRepositories {};
#else // @header-generator platform
class IResourceRepositories {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceRepositories() = default;

    virtual void fillPackAssociations(::std::vector<::gsl::not_null<::PackCommand::PackAssociations*>>& packs) = 0;

    virtual void removePacks(::std::vector<::gsl::not_null<::Pack const*>> const& packs) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace PackCommand
