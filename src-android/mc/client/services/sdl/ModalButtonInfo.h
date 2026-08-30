#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TextStyle;
// clang-format on

namespace SDL {

struct ModalButtonInfo {
public:
    // ModalButtonInfo inner types define
    enum class ActionType : int {
        Purchase = 0,
        Unknown  = 1,
    };

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
};

} // namespace SDL
