#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct Color {
public:
    // Color inner types declare
    // clang-format off
    struct Predefined;
    // clang-format on

    // Color inner types define
    struct Predefined {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> mValue;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkb4eb98;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Value = uint;
#else // @header-generator platform
    public:
        // prevent constructor by default
        Predefined& operator=(Predefined const&);
        Predefined(Predefined const&);
        Predefined();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7a08d5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Color& operator=(Color const&);
    Color(Color const&);
    Color();
#endif // @header-generator platform
};

} // namespace Bedrock::Profiler::details
