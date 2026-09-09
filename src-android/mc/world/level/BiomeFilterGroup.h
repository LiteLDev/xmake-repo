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
    // prevent constructor by default
    BiomeFilterGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeFilterGroup() = default;

    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalizeParsedValue(::IWorldRegistriesProvider&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<FilterGroup> $_createSubgroup(::FilterGroup::CollectionType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
