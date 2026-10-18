#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/world/eas/attributes/modifiers/ColorAttributeOperation.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

struct ColorAttributeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>   mValue;
    ::ll::TypedStorage<4, 4, ::EAS::ColorAttributeOperation> mOperation;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 16> mUnk742b22;
    ::ll::UntypedStorage<4, 4>  mUnk7249dd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ColorAttributeData& operator=(ColorAttributeData const&);
    ColorAttributeData(ColorAttributeData const&);
    ColorAttributeData();
#endif // @header-generator platform
};

} // namespace EAS
