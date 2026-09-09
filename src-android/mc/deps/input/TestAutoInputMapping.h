#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
