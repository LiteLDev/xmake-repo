#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/FreeItemState.h"

namespace persona {

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

} // namespace persona
