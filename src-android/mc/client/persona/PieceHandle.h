#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/FreeItemState.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class PersonaPiece;
class SemVersion;
// clang-format on

namespace persona {

class PieceHandle {
public:
    // PieceHandle inner types declare
    // clang-format off
    struct SerializedExcessData;
    // clang-format on

    // PieceHandle inner types define
    struct SerializedExcessData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide> mPieceSide;
        ::ll::TypedStorage<4, 64, ::TintMapColor>                   mTintingData;
        ::ll::TypedStorage<1, 1, bool>                              mUseTintColor;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>             mPieceType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>             mPieceSubType;
    ::ll::UntypedStorage<8, 48>                                             mPackIdVersion;
    ::ll::TypedStorage<8, 24, std::string>                                  mPieceId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                  mPieceUUID;
    ::ll::TypedStorage<8, 24, std::string>                                  mProductId;
    ::ll::TypedStorage<4, 72, ::persona::PieceHandle::SerializedExcessData> mSerializedExcessData;
    ::ll::TypedStorage<1, 3, ::persona::FreeItemState>                      mFreeItemState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PieceHandle();

    MCNAPI PieceHandle(::persona::PieceHandle const&);

    MCNAPI PieceHandle(
        ::PersonaPiece const&,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceType
    );

    MCNAPI PieceHandle(
        std::string const&,
        ::SharedTypes::persona::PieceType,
        ::PackIdVersion const&,
        ::SharedTypes::persona::PieceSide,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceType
    );

    MCNAPI void _initPieceUUID();

    MCNAPI ::mce::UUID const& getPackId() const;

    MCNAPI ::PackIdVersion const& getPackIdVersion() const;

    MCNAPI std::string const& getPieceId() const;

    MCNAPI ::mce::UUID const& getPieceIdAsUUID() const;

    MCNAPI ::SharedTypes::persona::PieceType getPieceType() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI ::TintMapColor const& getTintMapColor() const;

    MCNAPI bool isClassicSkin() const;

    MCNAPI bool isDefaultPiece() const;

    MCNAPI bool isUsingTintColor() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::persona::PieceHandle const&) const;

    MCNAPI bool operator==(::persona::PieceHandle const&) const;

    MCNAPI std::string serializePiece(bool) const;

    MCNAPI void setPieceSubType(::SharedTypes::persona::PieceType);

    MCNAPI void setPieceType(::SharedTypes::persona::PieceType);

    MCNAPI ~PieceHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::persona::PieceHandle const& getInvalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::persona::PieceHandle const&);

    MCNAPI void* $ctor(
        ::PersonaPiece const&,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceType
    );

    MCNAPI void* $ctor(
        std::string const&,
        ::SharedTypes::persona::PieceType,
        ::PackIdVersion const&,
        ::SharedTypes::persona::PieceSide,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona
