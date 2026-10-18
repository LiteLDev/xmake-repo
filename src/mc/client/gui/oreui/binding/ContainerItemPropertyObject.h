#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ContainerItemBindings.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ContainerItemBindings.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerItemPropertyObject : public ::OreUI::PropertyObject<OreUI::ContainerItemPropertyObject>,
                                     public ::OreUI::ContainerItemBindings {
public:
    // prevent constructor by default
    ContainerItemPropertyObject& operator=(ContainerItemPropertyObject const&);
    ContainerItemPropertyObject(ContainerItemPropertyObject const&);
    ContainerItemPropertyObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerItemPropertyObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ContainerItemPropertyObject : public ::OreUI::PropertyObject<::OreUI::ContainerItemPropertyObject>,
                                     public ::OreUI::ContainerItemBindings {};
#else // @header-generator platform
struct ContainerItemPropertyObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
