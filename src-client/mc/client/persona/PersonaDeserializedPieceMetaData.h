#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/PieceIdType.h"
#include "mc/deps/shared_types/PieceSide.h"

namespace persona {

struct PersonaDeserializedPieceMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mActualId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide> mPieceSide;
    ::ll::TypedStorage<1, 1, bool>                              mFreeItem;
    ::ll::TypedStorage<4, 4, ::persona::PieceIdType>            mPieceType;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaDeserializedPieceMetaData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaDeserializedPieceMetaData(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
