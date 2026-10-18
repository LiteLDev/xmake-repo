#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct SweepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>> collision;
    // NOLINTEND

public:
    // prevent constructor by default
    SweepResult& operator=(SweepResult const&);
    SweepResult(SweepResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SweepResult();
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
class UIControl;
// clang-format on

struct SweepResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> collision;
    // NOLINTEND
};
#else // @header-generator platform
struct SweepResult {};
#endif // @header-generator platform
#endif // @header-generator platform
