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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, char>         colorTag;
        ::ll::TypedStorage<8, 24, std::string> name;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnkb538f5;
        ::ll::UntypedStorage<8, 32> mUnk18e600;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Bar = std::array<float, 2>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        ColorKey& operator=(ColorKey const&);
        ColorKey(ColorKey const&);
        ColorKey();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::array<float, 2>>>       mData;
    ::ll::TypedStorage<8, 24, std::vector<StackedGraphBars::ColorKey>> mColors;
    ::ll::TypedStorage<4, 4, float>                                    mHeight;
    ::ll::TypedStorage<8, 24, std::string>                             mGraphName;
    ::ll::TypedStorage<4, 4, int>                                      mMaxBars;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk1be662;
    ::ll::UntypedStorage<8, 24> mUnk32605d;
    ::ll::UntypedStorage<4, 4>  mUnk4e6cf1;
    ::ll::UntypedStorage<8, 32> mUnk8e50dc;
    ::ll::UntypedStorage<4, 4>  mUnk87a5cf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StackedGraphBars& operator=(StackedGraphBars const&);
    StackedGraphBars(StackedGraphBars const&);
#endif // @header-generator platform
    StackedGraphBars();
};
