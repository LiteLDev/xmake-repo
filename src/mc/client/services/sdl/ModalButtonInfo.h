#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct TextStyle;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SDL {

struct ModalButtonInfo {
public:
    // ModalButtonInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ActionType : int {
        Purchase = 0,
        Unknown  = 1,
    };
#else // @header-generator platform
    enum class ActionType : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class OfferType : int {
        PlatformOffer        = 0,
        VirtualCurrencyOffer = 1,
        Unknown              = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsOwned;
    ::ll::TypedStorage<8, 24, std::string>                       mOfferId;
    ::ll::UntypedStorage<8, 272>                                 mButtonText;
    ::ll::TypedStorage<4, 4, ::SDL::ModalButtonInfo::ActionType> mActionType;
    ::ll::TypedStorage<4, 4, ::SDL::ModalButtonInfo::OfferType>  mOfferType;
    // NOLINTEND
#else // @header-generator platform
    enum class OfferType : int {};
#endif // @header-generator platform
};

} // namespace SDL
