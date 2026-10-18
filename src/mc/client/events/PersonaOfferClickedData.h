#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/events/StoreOfferClickedData.h"
#include "mc/world/actor/player/persona/ProfileType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social::eventData {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class PersonaOfferClickedData {};
#endif // @header-generator platform

} // namespace Social::eventData
