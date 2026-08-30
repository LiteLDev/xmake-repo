#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
