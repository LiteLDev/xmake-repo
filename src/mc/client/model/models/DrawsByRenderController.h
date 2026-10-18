#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/DrawsByMaterial.h"

// auto generated forward declare list
// clang-format off
class RenderController;
class ScreenContext;
namespace mce { class MaterialPtr; }
// clang-format on

class DrawsByRenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RenderController const*>     mRenderController;
    ::ll::TypedStorage<8, 24, std::vector<DrawsByMaterial>> mDrawsByMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByRenderController& operator=(DrawsByRenderController const&);
    DrawsByRenderController(DrawsByRenderController const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DrawsByMaterial;
class RenderController;
// clang-format on

class DrawsByRenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RenderController const*>         mRenderController;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByMaterial>> mDrawsByMaterial;
    // NOLINTEND
};
#else // @header-generator platform
class DrawsByRenderController {};
#endif // @header-generator platform
#endif // @header-generator platform
