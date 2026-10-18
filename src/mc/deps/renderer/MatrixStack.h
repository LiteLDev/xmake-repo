#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class MatrixStack {
public:
    // MatrixStack inner types declare
    // clang-format off
    struct MatrixStackRef;
    // clang-format on

    // MatrixStack inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MatrixStackRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::MatrixStack*> stack;
        ::ll::TypedStorage<8, 8, ::Matrix*>      mat;
        // NOLINTEND

    public:
        // prevent constructor by default
        MatrixStackRef& operator=(MatrixStackRef const&);
        MatrixStackRef(MatrixStackRef const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Matrix& operator*();

        MCNAPI ::Matrix* operator->();

        MCNAPI ::MatrixStack::MatrixStackRef& operator=(::Matrix const&);

        MCNAPI void release();

        MCNAPI ~MatrixStackRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::deque<Matrix>>   stack;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> sortOrigin;
    ::ll::TypedStorage<1, 1, bool>                  _isDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    MatrixStack& operator=(MatrixStack const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MatrixStack();

    MCNAPI ::Matrix& getTop();

    MCNAPI bool isSortOriginTop() const;

    MCNAPI ::MatrixStack::MatrixStackRef push(bool);

    MCNAPI ::MatrixStack::MatrixStackRef push(::Matrix const&, bool);

    MCNAPI ::MatrixStack::MatrixStackRef pushIdentity(bool);

    MCNAPI ::Matrix const& sortOriginTransform() const;

    MCNAPI ::Matrix const& top() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct MatrixStackRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::MatrixStack*> stack;
        ::ll::TypedStorage<8, 8, ::Matrix*>      mat;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~MatrixStackRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::Matrix>>  stack;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> sortOrigin;
    ::ll::TypedStorage<1, 1, bool>                     _isDirty;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MatrixStack();

    MCAPI ::MatrixStack::MatrixStackRef push(bool isSortOrigin);

    MCAPI ::MatrixStack::MatrixStackRef pushIdentity(bool isSortOrigin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    struct MatrixStackRef {};
#endif // @header-generator platform
#endif // @header-generator platform
};
