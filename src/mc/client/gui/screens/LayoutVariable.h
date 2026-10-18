#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutRule.h"
#include "mc/client/gui/screens/LayoutVariableStringType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct PostOperation;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutRule.h"
#include "mc/client/gui/screens/LayoutVariableStringType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class VariableRef;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class LayoutVariable {
public:
    // LayoutVariable inner types declare
    // clang-format off
    struct RuleValue;
    struct MinMaxRuleValue;
    // clang-format on

    // LayoutVariable inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>         mValue;
        ::ll::TypedStorage<8, 24, ::LayoutRule> mRule;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>         mValue;
        ::ll::TypedStorage<8, 24, ::LayoutRule> mRule;
        // NOLINTEND
    };
#else // @header-generator platform
    struct RuleValue {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct MinMaxRuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMinValue;
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMaxValue;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MinMaxRuleValue();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIControl&>                                     mControl;
    ::ll::TypedStorage<8, 24, std::vector<VariableRef>>                        mDependsOnMe;
    ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue>                     mRuleValue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutVariable::MinMaxRuleValue>> mMinMaxValue;
    ::ll::TypedStorage<1, 1, ::LayoutVariableType>                             mType;
    bool                                                                       mIsSatisfied : 1;
    bool                                                                       mIsOverriden : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutVariable& operator=(LayoutVariable const&);
    LayoutVariable(LayoutVariable const&);
    LayoutVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayoutVariable(::UIControl&, ::LayoutVariableType);

    MCNAPI void _clearSatisfied();

    MCNAPI float _getMaxSiblingValue() const;

    MCNAPI void _initialize(bool);

    MCNAPI void _invalidate(std::function<void(const VariableRef&)>, bool);

    MCNAPI void _invalidateDependencies(std::function<void(const VariableRef&)>, bool);

    MCNAPI void _removeDependsOnMeEntries();

    MCNAPI void clearOverrideValue();

    MCNAPI void initialize();

    MCNAPI bool isSatisfiable() const;

    MCNAPI void overrideRenderableLayoutRule(::UIControl&, ::LayoutVariableType const);

    MCNAPI void removeDeadDependencies();

    MCNAPI void removeDependencies();

    MCNAPI ::ui::DirtyFlag satisfy();

    MCNAPI void setOverrideValue(float);

    MCNAPI void setRelativeLayoutRule(::UIControl&, ::UIControl&, ::LayoutVariableType const);

    MCNAPI std::string toString(::LayoutVariableStringType) const;

    MCNAPI ~LayoutVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&, ::LayoutVariableType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct MinMaxRuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMinValue;
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMaxValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIControl&>                                         mControl;
    ::ll::TypedStorage<8, 24, ::std::vector<::VariableRef>>                        mDependsOnMe;
    ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue>                         mRuleValue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutVariable::MinMaxRuleValue>> mMinMaxValue;
    ::ll::TypedStorage<1, 1, ::LayoutVariableType>                                 mType;
    bool                                                                           mIsSatisfied : 1;
    bool                                                                           mIsOverriden : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutVariable& operator=(LayoutVariable const&);
    LayoutVariable(LayoutVariable const&);
    LayoutVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float _getMaxSiblingValue() const;

    MCAPI void _initialize(bool checkForDuplicates);

    MCAPI void _invalidate(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI void
    _invalidateDependencies(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI bool isSatisfiable() const;

    MCAPI void overrideRenderableLayoutRule(::UIControl& control, ::LayoutVariableType type);

    MCAPI void removeDeadDependencies();

    MCAPI void removeDependencies();

    MCAPI ::ui::DirtyFlag satisfy();

    MCAPI void setOverrideValue(float inValue);

    MCAPI void setRelativeLayoutRule(::UIControl& control, ::UIControl& relativeTo, ::LayoutVariableType const type);

    MCAPI ::std::string toString(::LayoutVariableStringType type) const;

    MCAPI ~LayoutVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct MinMaxRuleValue {};
#endif // @header-generator platform
#endif // @header-generator platform
};
