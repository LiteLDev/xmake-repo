#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ImageObject : public ::OreUI::PropertyObject<::OreUI::ImageObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ImageObject(::std::string const& name, ::OreUI::Detail::IPropertyObject* parent, ::std::string url);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::OreUI::Detail::IPropertyObject* parent, ::std::string url);
    // NOLINTEND
};
#else // @header-generator platform
class ImageObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
