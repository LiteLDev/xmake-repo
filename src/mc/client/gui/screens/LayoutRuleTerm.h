#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class LayoutRuleTerm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LayoutRuleTermType>      mType;
    ::ll::UntypedStorage<8, 16>                         mData;
    ::ll::TypedStorage<8, 24, std::vector<VariableRef>> mDependentVariables;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutRuleTerm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float compute(::UIControl&, ::LayoutVariableType) const;

    MCNAPI void removeDependsOnMeEntries();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class VariableRef;
// clang-format on

class LayoutRuleTerm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LayoutRuleTermType> mType;
    union {
        ::ll::TypedStorage<4, 16, float> mConstant;
        struct {
            ::ll::TypedStorage<4, 4, float>        mFactor;
            ::ll::TypedStorage<8, 8, ::UIControl*> mParent;
        } mFactorAndParent;
        struct {
            ::ll::TypedStorage<1, 1, ::ui::OrientationType> mRescalingType;
            ::ll::TypedStorage<4, 4, int>                   mCollectionIndex;
        } mRescalingAndIndex;
        struct {
            ::ll::TypedStorage<1, 1, ::ui::OrientationType> mRescalingType;
            ::ll::TypedStorage<1, 1, ::LayoutVariableType>  mDimensionType;
        } mRescalingAndDimension;
    } mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::VariableRef>> mDependentVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float compute(::UIControl& control, ::LayoutVariableType sizeType) const;

    MCAPI void removeDependsOnMeEntries();
    // NOLINTEND
};
#else // @header-generator platform
class LayoutRuleTerm {};
#endif // @header-generator platform
#endif // @header-generator platform
