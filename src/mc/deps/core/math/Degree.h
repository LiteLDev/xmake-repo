#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Radian; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct Degree : public ::type_safe::strong_typedef<mce::Degree, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<mce::Degree>,
                public ::type_safe::strong_typedef_op::relational_comparison<mce::Degree>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<mce::Degree>,
                public ::type_safe::strong_typedef_op::input_operator<mce::Degree>,
                public ::type_safe::strong_typedef_op::output_operator<mce::Degree> {
public:
    // prevent constructor by default
    Degree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Degree(::mce::Radian const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Radian const);
    // NOLINTEND
};
#else // @header-generator platform
struct Degree : public ::type_safe::strong_typedef<::mce::Degree, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::relational_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Degree>,
                public ::type_safe::strong_typedef_op::input_operator<::mce::Degree>,
                public ::type_safe::strong_typedef_op::output_operator<::mce::Degree> {};
#endif // @header-generator platform

} // namespace mce
