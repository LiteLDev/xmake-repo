#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class StorageContentItem; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

struct StorageContentCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mNumberOfSelectedItems;
    ::ll::UntypedStorage<8, 104> mContentItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentCommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageContentCommonProperties(::OreUI::Detail::IPropertyObject*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*);
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
