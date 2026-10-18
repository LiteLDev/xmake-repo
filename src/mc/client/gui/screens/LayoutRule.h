#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutRuleTerm;
class UIControl;
class VariableRef;
namespace ui { struct AxisOffset; }
// clang-format on

class LayoutRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::LayoutRuleTerm>> mTerms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAnchorTerm(
        ::UIControl&               relativeTo,
        ::LayoutVariableType const type,
        ::ui::AnchorPoint const    anchorPoint,
        float const                signFactor,
        ::LayoutRuleTermType       termType
    );

    MCAPI void
    addAxisOffsetTerms(::UIControl& relativeTo, ::UIControl& control, ::std::vector<::ui::AxisOffset> const& offsets);

    MCAPI void addDependsOnMeEntriesForInvalidation(::VariableRef const& variable, bool checkForDuplicates);

    MCAPI void addFillGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );

    MCAPI void
    addGridSizeTerms(::UIControl& control, ::UIControl& gridItemTemplate, ::LayoutVariableType sizeType, float scale);

    MCAPI void addOffsetDeltaTerm(::UIControl& control, ::LayoutVariableType type);

    MCAPI void addRescalingGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );
    // NOLINTEND
};
#else // @header-generator platform
class LayoutRule {};
#endif // @header-generator platform
#endif // @header-generator platform
