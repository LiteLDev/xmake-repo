#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct SharedUniformPhase {
public:
    // SharedUniformPhase inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ExpressionUpdate;
#else // @header-generator platform
#endif // @header-generator platform
    struct ConstantUpdate;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ExpressionUpdate;
#endif // @header-generator platform
    // clang-format on

    // SharedUniformPhase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ExpressionUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
        ::ll::TypedStorage<8, 8, ::RenderParams*>         mParams;
        ::ll::TypedStorage<8, 8, float*>                  mDestination;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ConstantUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, float const*> mConstant;
        ::ll::TypedStorage<8, 8, float*>       mDestination;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ConstantUpdate {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ConstantUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, float const*> mConstant;
        ::ll::TypedStorage<8, 8, float*>       mDestination;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedUniformPhase::ConstantUpdate>>   mConstantsToUniforms;
    ::ll::TypedStorage<8, 24, std::vector<SharedUniformPhase::ExpressionUpdate>> mExpressionsToUniforms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SharedUniformPhase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ExpressionUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
        ::ll::TypedStorage<8, 8, ::RenderParams*>         mParams;
        ::ll::TypedStorage<8, 8, float*>                  mDestination;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedUniformPhase::ConstantUpdate>>   mConstantsToUniforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedUniformPhase::ExpressionUpdate>> mExpressionsToUniforms;
    // NOLINTEND
#else // @header-generator platform
    struct ExpressionUpdate {};
#endif // @header-generator platform
#endif // @header-generator platform
};
