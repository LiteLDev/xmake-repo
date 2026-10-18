#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

#if defined(LL_PLAT_A) // @header-generator platform
struct Rectangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> X;
    ::ll::TypedStorage<4, 4, float> Y;
    ::ll::TypedStorage<4, 4, float> Width;
    ::ll::TypedStorage<4, 4, float> Height;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Rectangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c8922;
    ::ll::UntypedStorage<4, 4> mUnk9e498f;
    ::ll::UntypedStorage<4, 4> mUnkf91ddd;
    ::ll::UntypedStorage<4, 4> mUnkc6401d;
    // NOLINTEND

public:
    // prevent constructor by default
    Rectangle& operator=(Rectangle const&);
    Rectangle(Rectangle const&);
    Rectangle();
};
#else // @header-generator platform
struct Rectangle {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml::TextInput
