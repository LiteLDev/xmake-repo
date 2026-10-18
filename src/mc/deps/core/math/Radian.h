#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct Radian : public ::type_safe::strong_typedef<mce::Radian, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<mce::Radian>,
                public ::type_safe::strong_typedef_op::relational_comparison<mce::Radian>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<mce::Radian>,
                public ::type_safe::strong_typedef_op::input_operator<mce::Radian>,
                public ::type_safe::strong_typedef_op::output_operator<mce::Radian> {
public:
    // prevent constructor by default
    Radian();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Radian(::mce::Degree const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Degree const);
    // NOLINTEND
};
#else // @header-generator platform
struct Radian : public ::type_safe::strong_typedef<::mce::Radian, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<::mce::Radian>,
                public ::type_safe::strong_typedef_op::relational_comparison<::mce::Radian>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Radian>,
                public ::type_safe::strong_typedef_op::input_operator<::mce::Radian>,
                public ::type_safe::strong_typedef_op::output_operator<::mce::Radian> {};
#endif // @header-generator platform

} // namespace mce
