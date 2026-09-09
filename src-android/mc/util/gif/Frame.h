#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/util/gif/FrameDisposalMethod.h"

namespace gif {

struct Frame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   left;
    ::ll::TypedStorage<4, 4, int>                                                   top;
    ::ll::TypedStorage<4, 4, int>                                                   width;
    ::ll::TypedStorage<4, 4, int>                                                   height;
    ::ll::TypedStorage<4, 4, int>                                                   transparentIndex;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>>                              localColors;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                                   pixels;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> delay;
    ::ll::TypedStorage<4, 4, ::gif::FrameDisposalMethod>                            disposalMethod;
    // NOLINTEND
};

} // namespace gif
