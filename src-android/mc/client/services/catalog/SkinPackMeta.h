#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/DurableCustom.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
// clang-format on

struct SkinPackMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument> mCommon;
    ::ll::TypedStorage<8, 1128, ::DurableCustom> mCustom;
    ::ll::TypedStorage<1, 1, bool>               isHidden;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackMeta(SkinPackMeta const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isOfferInRealmsPlus(::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> const) const;
    // NOLINTEND
};
