#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperiencePreviewObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperienceFab; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ExperienceFabObject : public ::OreUI::PropertyObject<::OreUI::ExperienceFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 3272, ::OreUI::ExperiencePreviewObject> mExperience;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>    mTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceFabObject(
        ::OreUI::Detail::IPropertyObject*                        fabParent,
        ::Bedrock::Services::layout::model::ExperienceFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Detail::IPropertyObject* fabParent, ::Bedrock::Services::layout::model::ExperienceFab const& fab);
    // NOLINTEND
};
#else // @header-generator platform
class ExperienceFabObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
