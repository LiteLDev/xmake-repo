#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Scene {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<int>> nodes;
    ::ll::TypedStorage<8, 24, std::string>      name;
    ::ll::TypedStorage<4, 4, int>               id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk4f789c;
    ::ll::UntypedStorage<8, 32> mUnk3a6c45;
    ::ll::UntypedStorage<4, 4>  mUnk506e0a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Scene& operator=(Scene const&);
    Scene(Scene const&);
    Scene();
#endif // @header-generator platform
};

} // namespace glTF
