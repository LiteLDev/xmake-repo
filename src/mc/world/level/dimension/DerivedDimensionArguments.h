#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IClientDimensionExtensions;
#else // @header-generator platform
#endif // @header-generator platform
class ILevel;
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IClientDimensionExtensions;
#endif // @header-generator platform
// clang-format on

struct DerivedDimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mLevel;
    ::ll::UntypedStorage<8, 64> mCreateTaskGroup;
    ::ll::UntypedStorage<8, 16> mClientExtensions;
#else // @header-generator platform
    ::ILevel&                                                                       mLevel;
    ::brstd::move_only_function<::std::unique_ptr<::TaskGroup>(::std::string_view)> mCreateTaskGroup;
    std::unique_ptr<::IClientDimensionExtensions> mClientExtensions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DerivedDimensionArguments& operator=(DerivedDimensionArguments const&);
    DerivedDimensionArguments(DerivedDimensionArguments const&);
    DerivedDimensionArguments();
#else // @header-generator platform
#endif // @header-generator platform
};
