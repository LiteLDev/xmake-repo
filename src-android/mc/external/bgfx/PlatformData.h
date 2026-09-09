#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct PlatformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> ndt;
    ::ll::TypedStorage<8, 8, void*> nwh;
    ::ll::TypedStorage<8, 8, void*> context;
    ::ll::TypedStorage<8, 8, void*> backBuffer;
    ::ll::TypedStorage<8, 8, void*> backBufferDS;
    ::ll::TypedStorage<8, 8, void*> session;
    // NOLINTEND
};

} // namespace bgfx
