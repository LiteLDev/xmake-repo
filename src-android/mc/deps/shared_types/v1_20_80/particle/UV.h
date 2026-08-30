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
    ::ll::TypedStorage<4, 4, int>                                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                                 mHeight;
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<8, 160, std::optional<SharedTypes::v1_20_80::FlipBook>>    mFlipBook;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UV(::SharedTypes::v1_20_80::UV const&);

    MCNAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::UV const&) const;

    MCNAPI ~UV();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
