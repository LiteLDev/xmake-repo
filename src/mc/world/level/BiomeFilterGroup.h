#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
// clang-format on

class BiomeFilterGroup : public ::FilterGroup {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BiomeFilterGroup();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BiomeFilterGroup() = default;
#else // @header-generator platform
    virtual ~BiomeFilterGroup() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeParsedValue(::IWorldRegistriesProvider&);
#else // @header-generator platform
    MCNAPI void finalizeParsedValue(::IWorldRegistriesProvider& registries);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<FilterGroup> $_createSubgroup(::FilterGroup::CollectionType) const;
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::FilterGroup> $_createSubgroup(::FilterGroup::CollectionType type) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
