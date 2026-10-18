#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/FontStyle.h"
#include "mc/external/gameface/cohtml/FontWeight.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct FontDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*>                 FontFamily;
    ::ll::TypedStorage<1, 1, ::cohtml::Fonts::FontStyle>  Style;
    ::ll::TypedStorage<1, 1, ::cohtml::Fonts::FontWeight> Weight;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FontDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkea99b0;
    ::ll::UntypedStorage<1, 1> mUnke0cfa2;
    ::ll::UntypedStorage<1, 1> mUnkd9b64d;
    // NOLINTEND

public:
    // prevent constructor by default
    FontDescription& operator=(FontDescription const&);
    FontDescription(FontDescription const&);
    FontDescription();
};
#else // @header-generator platform
struct FontDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
