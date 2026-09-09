#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"

class SerializedPersonaPieceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mPieceId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                      mPackId;
    ::ll::TypedStorage<1, 1, bool>                              mIsDefaultPiece;
    ::ll::TypedStorage<8, 24, std::string>                      mProductId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializedPersonaPieceHandle(
        std::string const&,
        ::SharedTypes::persona::PieceType,
        ::mce::UUID,
        bool,
        std::string const&
    );

    MCNAPI bool operator==(::SerializedPersonaPieceHandle const&) const;

    MCNAPI ~SerializedPersonaPieceHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::SharedTypes::persona::PieceType, ::mce::UUID, bool, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
