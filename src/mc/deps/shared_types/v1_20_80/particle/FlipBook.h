#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct FlipBook {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mBaseUVExpr;
    ::ll::TypedStorage<4, 8, std::array<float, 2>>                                mSizeUV;
    ::ll::TypedStorage<4, 8, std::array<float, 2>>                                mStepUV;
    ::ll::TypedStorage<4, 4, float>                                               mFPS;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>              mMaxFrame;
    ::ll::TypedStorage<1, 1, bool>                                                mStretchToLifetime;
    ::ll::TypedStorage<1, 1, bool>                                                mLoop;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mBaseUVExpr;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>                                  mSizeUV;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>                                  mStepUV;
    ::ll::TypedStorage<4, 4, float>                                                   mFPS;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                  mMaxFrame;
    ::ll::TypedStorage<1, 1, bool>                                                    mStretchToLifetime;
    ::ll::TypedStorage<1, 1, bool>                                                    mLoop;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FlipBook(::SharedTypes::v1_20_80::FlipBook const&);

    MCNAPI ::SharedTypes::v1_20_80::FlipBook& operator=(::SharedTypes::v1_20_80::FlipBook const&);

    MCNAPI ~FlipBook();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::FlipBook const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~FlipBook();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
