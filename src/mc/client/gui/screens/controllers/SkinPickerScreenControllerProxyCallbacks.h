#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SkinHandle;
class UIPropertyBag;
// clang-format on

struct SkinPickerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetPreviewSkinHandle;
    ::ll::UntypedStorage<8, 48> mDisplayJsonDefinedControlPopup;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SkinHandle;
class UIPropertyBag;
// clang-format on

struct SkinPickerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::SkinHandle*()>> mGetPreviewSkinHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void(::UIPropertyBag const&, ::std::string const&)>>
        mDisplayJsonDefinedControlPopup;
    // NOLINTEND
};
#else // @header-generator platform
struct SkinPickerScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
