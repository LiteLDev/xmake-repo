#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/FlipBook.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct UV {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                                 mHeight;
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::FlipBook>>    mFlipBook;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                     mWidth;
    ::ll::TypedStorage<4, 4, int>                                                     mHeight;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::FlipBook>>    mFlipBook;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    UV& operator=(UV const&);
    UV();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UV(::SharedTypes::v1_20_80::UV const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI UV(::SharedTypes::v1_20_80::UV&&);

    MCAPI UV(::SharedTypes::v1_20_80::UV const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV const&);
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_20_80::UV const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::UV const&) const;

    MCNAPI ~UV();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~UV();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
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
