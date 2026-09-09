#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ModalFormCancelReason.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ModalFormResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                 mFormId;
    ::ll::UntypedStorage<8, 24>                                    mJSONResponse;
    ::ll::TypedStorage<1, 2, std::optional<ModalFormCancelReason>> mFormCancelReason;
    // NOLINTEND
};
