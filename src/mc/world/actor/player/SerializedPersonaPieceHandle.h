#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/PieceType.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform
#include "mc/platform/UUID.h"

class SerializedPersonaPieceHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mPieceId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    mPieceId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                      mPackId;
    ::ll::TypedStorage<1, 1, bool>                              mIsDefaultPiece;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mProductId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    mProductId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SerializedPersonaPieceHandle& operator=(SerializedPersonaPieceHandle const&);
    SerializedPersonaPieceHandle();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedPersonaPieceHandle(
        std::string const&,
        ::SharedTypes::persona::PieceType,
        ::mce::UUID,
        bool,
        std::string const&
#else // @header-generator platform
    MCAPI SerializedPersonaPieceHandle(::SerializedPersonaPieceHandle const&);

    MCAPI SerializedPersonaPieceHandle(
        ::std::string const&              pieceId,
        ::SharedTypes::persona::PieceType pieceType,
        ::mce::UUID                       packId,
        bool                              isDefaultPiece,
        ::std::string const&              productId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SerializedPersonaPieceHandle const&) const;

    MCNAPI ~SerializedPersonaPieceHandle();
#else // @header-generator platform
    MCAPI bool operator==(::SerializedPersonaPieceHandle const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::SharedTypes::persona::PieceType, ::mce::UUID, bool, std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $ctor(::SerializedPersonaPieceHandle const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&              pieceId,
        ::SharedTypes::persona::PieceType pieceType,
        ::mce::UUID                       packId,
        bool                              isDefaultPiece,
        ::std::string const&              productId
    );
#endif // @header-generator platform
    // NOLINTEND
};
