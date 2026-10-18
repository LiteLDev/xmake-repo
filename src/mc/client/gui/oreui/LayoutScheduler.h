#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Library; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Library; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class LayoutScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::Library&> mLibrary;
    ::ll::TypedStorage<8, 240, ::TaskGroup>      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutScheduler& operator=(LayoutScheduler const&);
    LayoutScheduler(LayoutScheduler const&);
    LayoutScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void waitUntilLayoutIsCompleted();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LayoutScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::Library&> mLibrary;
    ::ll::TypedStorage<8, 336, ::TaskGroup>      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutScheduler& operator=(LayoutScheduler const&);
    LayoutScheduler(LayoutScheduler const&);
    LayoutScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void waitUntilLayoutIsCompleted();
    // NOLINTEND
};
#else // @header-generator platform
class LayoutScheduler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
