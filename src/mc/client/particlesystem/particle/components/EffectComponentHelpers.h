#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExpressionNode;
template<typename T0> class buffer_span_mut;
struct ConstDeserializeDataParams;
// clang-format on

class EffectComponentHelpers {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void parseFloatOrExpressionArray(
        ::ConstDeserializeDataParams const&,
        ::buffer_span_mut<ExpressionNode>,
        float const,
        bool
    );

    MCNAPI static void parseFloatOrExpressionArray(
        ::ConstDeserializeDataParams const&,
        std::string const&,
        ::buffer_span_mut<ExpressionNode>,
        float const,
        bool
    );

    MCNAPI static void
    parseFloatOrExpressionField(::ConstDeserializeDataParams const&, ::ExpressionNode&, float const, bool);

    MCNAPI static void parseFloatOrExpressionField(
        ::ConstDeserializeDataParams const&,
        std::string const&,
        ::ExpressionNode&,
        float const,
        bool
    );
    // NOLINTEND
};
#else // @header-generator platform
class EffectComponentHelpers {};
#endif // @header-generator platform
