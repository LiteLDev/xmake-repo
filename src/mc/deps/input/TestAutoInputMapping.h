#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TestAutoInputBinding.h"

struct TestAutoInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TestAutoInputBinding>> inputBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    TestAutoInputMapping& operator=(TestAutoInputMapping const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TestAutoInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TestAutoInputBinding;
// clang-format on

struct TestAutoInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TestAutoInputBinding>> inputBindings;
    // NOLINTEND
};
#else // @header-generator platform
struct TestAutoInputMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
