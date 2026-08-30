#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetAchievementCategoryData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

namespace OreUI {

class AchievementCategoriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::AchievementCategoriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetAchievementCategoryData>> mStandardCategoryData;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetAchievementCategoryData>> mReleaseCategoryData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementCategoriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementCategoriesFacet();

    MCNAPI std::vector<OreUI::FacetAchievementCategoryData> const& getReleaseCategoryData() const;

    MCNAPI std::vector<OreUI::FacetAchievementCategoryData> const& getStandardCategoryData() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
