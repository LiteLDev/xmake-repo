#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> pieceClass;
    ::ll::TypedStorage<4, 4, int>          weight;
    ::ll::TypedStorage<4, 4, int>          placeCount;
    ::ll::TypedStorage<4, 4, int>          maxPlaceCount;
    ::ll::TypedStorage<4, 4, int>          minDepth;
    ::ll::TypedStorage<1, 1, bool>         allowInRow;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> pieceClass;
    ::ll::TypedStorage<4, 4, int>            weight;
    ::ll::TypedStorage<4, 4, int>            placeCount;
    ::ll::TypedStorage<4, 4, int>            maxPlaceCount;
    ::ll::TypedStorage<4, 4, int>            minDepth;
    ::ll::TypedStorage<1, 1, bool>           allowInRow;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PieceWeight& operator=(PieceWeight const&);
    PieceWeight(PieceWeight const&);
    PieceWeight();
#else // @header-generator platform
#endif // @header-generator platform
};
