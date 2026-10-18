#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/objects/ViewRenderObject.h"

struct FrameRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mViews;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameRenderObject& operator=(FrameRenderObject const&);
    FrameRenderObject();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct ViewRenderObject;
// clang-format on

struct FrameRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::ViewRenderObject, ::LinearAllocator<::ViewRenderObject>>> mViews;
    // NOLINTEND
};
#else // @header-generator platform
struct FrameRenderObject {};
#endif // @header-generator platform
#endif // @header-generator platform
