#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class MolangVersion : ushort {
    Invalid                                = 65535,
#else // @header-generator platform
enum class MolangVersion : short {
    Invalid                                = -1,
#endif // @header-generator platform
    BeforeVersioning                       = 0,
    Initial                                = 1,
    FixedItemRemainingUseDurationQuery     = 2,
    ExpressionErrorMessages                = 3,
    UnexpectedOperatorErrors               = 4,
    ConditionalOperatorAssociativity       = 5,
    ComparisonAndLogicalOperatorPrecedence = 6,
    DivideByNegativeValue                  = 7,
    FixedCapeFlapAmountQuery               = 8,
    QueryBlockPropertyRenamedToState       = 9,
    DeprecateOldBlockQueryNames            = 10,
    DeprecatedSnifferAndCamelQueries       = 11,
    LeafSupportingInFirstSolidBlockBelow   = 12,
    CarryingBlockQueryAllActors            = 13,
    NumValidVersions                       = 14,
    Latest                                 = 13,
    HardcodedMolang                        = 13,
};
