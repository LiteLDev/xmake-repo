#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/events/StoreOfferClickedData.h"
#include "mc/world/actor/player/persona/ProfileType.h"

namespace Social::eventData {

class PersonaOfferClickedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Social::eventData::StoreOfferClickedData const> mStoreOfferClickedData;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType const>                      mProfileType;
    ::ll::TypedStorage<8, 8, double const>                                      mSecondsToLoadContent;
    ::ll::TypedStorage<1, 1, bool const>                                        mIsOwned;
    // NOLINTEND
};

} // namespace Social::eventData
