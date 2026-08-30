#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ViewStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> name;
    ::ll::TypedStorage<2, 2, ushort>      view;
    ::ll::TypedStorage<8, 8, long>        cpuTimeElapsed;
    ::ll::TypedStorage<8, 8, long>        cpuTimeBegin;
    ::ll::TypedStorage<8, 8, ulong>       gpuTimeBegin;
    ::ll::TypedStorage<8, 8, ulong>       gpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>        gpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint>        gpuFrameNum;
    // NOLINTEND
};

} // namespace bgfx
