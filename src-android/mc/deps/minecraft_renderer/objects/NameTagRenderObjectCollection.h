#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
