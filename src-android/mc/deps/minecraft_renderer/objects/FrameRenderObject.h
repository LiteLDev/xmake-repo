#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
