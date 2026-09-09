#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IClientDimensionExtensions;
class ILevel;
class TaskGroup;
// clang-format on

struct DerivedDimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mLevel;
    ::ll::UntypedStorage<8, 64> mCreateTaskGroup;
    ::ll::UntypedStorage<8, 16> mClientExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    DerivedDimensionArguments& operator=(DerivedDimensionArguments const&);
    DerivedDimensionArguments(DerivedDimensionArguments const&);
    DerivedDimensionArguments();
};
