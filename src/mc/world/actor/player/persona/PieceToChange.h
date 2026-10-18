#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/FreeItemState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
struct PieceToChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                      mId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide> mSide;
    ::ll::TypedStorage<8, 24, std::string>                      mProductId;
    ::ll::TypedStorage<1, 3, ::persona::FreeItemState>          mFreeItemState;
    // NOLINTEND

public:
    // prevent constructor by default
    PieceToChange& operator=(PieceToChange const&);
    PieceToChange(PieceToChange const&);
    PieceToChange();
};
#else // @header-generator platform
struct PieceToChange {};
#endif // @header-generator platform

} // namespace persona
