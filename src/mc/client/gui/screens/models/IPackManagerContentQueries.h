#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentTierInfo;
namespace mce { class UUID; }
// clang-format on

class IPackManagerContentQueries {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackManagerContentQueries() = default;

    virtual ::ContentTierInfo getContentTierInfo() const = 0;

    virtual std::string const* getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const&) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentTierInfo;
namespace mce { class UUID; }
// clang-format on

class IPackManagerContentQueries {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackManagerContentQueries() = default;

    virtual ::ContentTierInfo getContentTierInfo() const = 0;

    virtual ::std::string const*
    getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const& uuid) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPackManagerContentQueries {};
#endif // @header-generator platform
#endif // @header-generator platform
