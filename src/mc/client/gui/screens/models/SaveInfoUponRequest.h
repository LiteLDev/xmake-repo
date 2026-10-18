#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/persona/PieceOfferWrapper.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"

struct SaveInfoUponRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::persona::PersonaCharacterHandle> mCharacterHandle;
    ::ll::UntypedStorage<8, 48>                                  mSaveRequestCallback;
    ::ll::TypedStorage<8, 16, ::persona::PieceOfferWrapper>      mEquippedOffer;
    ::ll::TypedStorage<8, 24, std::string>                       mInitiallyEquippedId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide>  mPieceSide;
    ::ll::TypedStorage<4, 4, int>                                mSelectedEmoteSlot;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/persona/PieceOfferWrapper.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"

struct SaveInfoUponRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle> mCharacterHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>           mSaveRequestCallback;
    ::ll::TypedStorage<8, 16, ::persona::PieceOfferWrapper>      mEquippedOffer;
    ::ll::TypedStorage<8, 32, ::std::string>                     mInitiallyEquippedId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide>  mPieceSide;
    ::ll::TypedStorage<4, 4, int>                                mSelectedEmoteSlot;
    // NOLINTEND
};
#else // @header-generator platform
struct SaveInfoUponRequest {};
#endif // @header-generator platform
#endif // @header-generator platform
