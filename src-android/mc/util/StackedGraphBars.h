#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackedGraphBars {
public:
    // StackedGraphBars inner types declare
    // clang-format off
    struct ColorKey;
    // clang-format on

    // StackedGraphBars inner types define
    struct ColorKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, char>         colorTag;
        ::ll::TypedStorage<8, 24, std::string> name;
        // NOLINTEND
    };

    using Bar = std::array<float, 2>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::array<float, 2>>>       mData;
    ::ll::TypedStorage<8, 24, std::vector<StackedGraphBars::ColorKey>> mColors;
    ::ll::TypedStorage<4, 4, float>                                    mHeight;
    ::ll::TypedStorage<8, 24, std::string>                             mGraphName;
    ::ll::TypedStorage<4, 4, int>                                      mMaxBars;
    // NOLINTEND

public:
    // prevent constructor by default
    StackedGraphBars();
};
