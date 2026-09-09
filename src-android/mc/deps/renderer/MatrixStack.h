#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

class MatrixStack {
public:
    // MatrixStack inner types declare
    // clang-format off
    struct MatrixStackRef;
    // clang-format on

    // MatrixStack inner types define
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
};
