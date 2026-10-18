#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutSolvePass.h"
#include "mc/client/gui/screens/PostOperation.h"
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutSolvePass.h"
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct PostOperation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class LayoutVariables {
public:
    // LayoutVariables inner types declare
    // clang-format off
    struct UnsatisfiedVar;
    // clang-format on

    // LayoutVariables inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct UnsatisfiedVar {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::VariableRef> mVar;
        ::ll::TypedStorage<1, 1, bool>           mIsSatisfied;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnsatisfiedVar& operator=(UnsatisfiedVar const&);
        UnsatisfiedVar(UnsatisfiedVar const&);
        UnsatisfiedVar();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PostOperation>>                   mPostOperations;
    ::ll::TypedStorage<8, 24, std::vector<LayoutVariables::UnsatisfiedVar>> mUnsatisfiedVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _add(::UIControl&);

    MCNAPI void _solve(::ui::DirtyFlag&, ::LayoutSolvePass);

    MCNAPI void invalidate(::VariableRef&, bool);

    MCNAPI void invalidateDependencies(::VariableRef&, bool);

    MCNAPI void reinitialize(::VariableRef&);

    MCNAPI ::ui::DirtyFlag solve();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct UnsatisfiedVar {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::VariableRef> mVar;
        ::ll::TypedStorage<1, 1, bool>           mIsSatisfied;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PostOperation>>                   mPostOperations;
    ::ll::TypedStorage<8, 24, ::std::vector<::LayoutVariables::UnsatisfiedVar>> mUnsatisfiedVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _add(::UIControl& control);

    MCAPI void _solve(::ui::DirtyFlag& dirty, ::LayoutSolvePass pass);

    MCAPI void invalidate(::VariableRef& variableRef, bool forceInvalidation);

    MCAPI void invalidateDependencies(::VariableRef& variableRef, bool forceInvalidation);

    MCAPI ::ui::DirtyFlag solve();
    // NOLINTEND
#else // @header-generator platform
    struct UnsatisfiedVar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
