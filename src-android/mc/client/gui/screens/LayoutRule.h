#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/screens/LayoutRuleTerm.h"
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class VariableRef;
namespace ui { struct AxisOffset; }
// clang-format on

class LayoutRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<LayoutRuleTerm>> mTerms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    addAnchorTerm(::UIControl&, ::LayoutVariableType const, ::ui::AnchorPoint const, float const, ::LayoutRuleTermType);

    MCNAPI void addAxisOffsetTerms(::UIControl&, ::UIControl&, std::vector<ui::AxisOffset> const&);

    MCNAPI void addDependsOnMeEntriesForInvalidation(::VariableRef const&, bool);

    MCNAPI void addFillGridDimensionTerm(::UIControl&, ::UIControl&, ::LayoutVariableType, ::ui::OrientationType);

    MCNAPI void addGridSizeTerms(::UIControl&, ::UIControl&, ::LayoutVariableType, float);

    MCNAPI void addOffsetDeltaTerm(::UIControl&, ::LayoutVariableType);

    MCNAPI void addRescalingGridDimensionTerm(::UIControl&, ::UIControl&, ::LayoutVariableType, ::ui::OrientationType);
    // NOLINTEND
};
