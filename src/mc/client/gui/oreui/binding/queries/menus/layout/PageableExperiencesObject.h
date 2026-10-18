#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ExperiencePreviewObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class PageableExperiencesObject : public ::OreUI::PropertyObject<::OreUI::PageableExperiencesObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mContinuationToken;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ExperiencePreviewObject, ::std::allocator<::OreUI::ExperiencePreviewObject>>>
        mExperiences;
    // NOLINTEND
};
#else // @header-generator platform
class PageableExperiencesObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
