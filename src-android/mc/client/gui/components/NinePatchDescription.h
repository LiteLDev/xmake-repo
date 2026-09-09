#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IntRectangle;
namespace mce { struct Image; }
// clang-format on

class NinePatchDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> u0;
    ::ll::TypedStorage<4, 4, float> u1;
    ::ll::TypedStorage<4, 4, float> u2;
    ::ll::TypedStorage<4, 4, float> u3;
    ::ll::TypedStorage<4, 4, float> v0;
    ::ll::TypedStorage<4, 4, float> v1;
    ::ll::TypedStorage<4, 4, float> v2;
    ::ll::TypedStorage<4, 4, float> v3;
    ::ll::TypedStorage<4, 4, float> w;
    ::ll::TypedStorage<4, 4, float> e;
    ::ll::TypedStorage<4, 4, float> n;
    ::ll::TypedStorage<4, 4, float> s;
    ::ll::TypedStorage<4, 4, int>   imgW;
    ::ll::TypedStorage<4, 4, int>   imgH;
    // NOLINTEND

public:
    // prevent constructor by default
    NinePatchDescription();
};
