#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#include "mc/deps/minecraft_renderer/objects/NameTagRenderObject.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/objects/NameTagRenderObject.h"

// auto generated forward declare list
// clang-format off
struct FrameRenderObject;
// clang-format on

struct NameTagRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mNameTags;
    // NOLINTEND

public:
    // prevent constructor by default
    NameTagRenderObjectCollection& operator=(NameTagRenderObjectCollection const&);
    NameTagRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NameTagRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct NameTagRenderObject;
// clang-format on

struct NameTagRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::NameTagRenderObject, ::LinearAllocator<::NameTagRenderObject>>> mNameTags;
    // NOLINTEND
};
#else // @header-generator platform
struct NameTagRenderObjectCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
