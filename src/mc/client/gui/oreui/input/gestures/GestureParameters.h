#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/FlingGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/PanGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/TapGestureParameters.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/FlingGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/PanGestureParameters.h"
#include "mc/client/gui/oreui/input/gestures/TapGestureParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct GestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::OreUI::TapGestureParameters>   tapParameters;
    ::ll::TypedStorage<8, 24, ::OreUI::FlingGestureParameters> flingParameters;
    ::ll::TypedStorage<4, 12, ::OreUI::PanGestureParameters>   panParameters;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::OreUI::TapGestureParameters>   tapParameters;
    ::ll::TypedStorage<8, 24, ::OreUI::FlingGestureParameters> flingParameters;
    ::ll::TypedStorage<4, 12, ::OreUI::PanGestureParameters>   panParameters;
    // NOLINTEND
};
#else // @header-generator platform
struct GestureParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
