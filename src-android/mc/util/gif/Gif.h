#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/util/gif/Frame.h"

namespace gif {

struct Gif {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      width;
    ::ll::TypedStorage<4, 4, int>                      height;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>> globalColors;
    ::ll::TypedStorage<8, 24, std::vector<gif::Frame>> frames;
    // NOLINTEND

public:
    // prevent constructor by default
    Gif();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Gif();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gif
