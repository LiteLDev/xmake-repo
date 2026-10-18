#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/PieceWeight.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/SHStairsDown.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
class PieceWeight;
#endif // @header-generator platform
class SHPortalRoom;
class StructurePiece;
// clang-format on

class SHStartPiece : public ::SHStairsDown {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<StructurePiece*>> pendingChildren;
    ::ll::TypedStorage<8, 8, ::SHPortalRoom*>               portalRoom;
    ::ll::TypedStorage<8, 24, std::string>                  imposedPiece;
    ::ll::TypedStorage<8, 24, std::string>                  previousPiece;
    ::ll::TypedStorage<8, 24, std::vector<PieceWeight>>     pieceWeights;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePiece*>> pendingChildren;
    ::ll::TypedStorage<8, 8, ::SHPortalRoom*>                   portalRoom;
    ::ll::TypedStorage<8, 32, ::std::string>                    imposedPiece;
    ::ll::TypedStorage<8, 32, ::std::string>                    previousPiece;
    ::ll::TypedStorage<8, 24, ::std::vector<::PieceWeight>>     pieceWeights;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SHStartPiece();

    virtual ::StructurePieceType getType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::StructurePieceType getType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePieceType $getType() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::StructurePieceType $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
