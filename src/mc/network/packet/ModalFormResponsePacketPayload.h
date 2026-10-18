#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/network/packet/ModalFormCancelReason.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ModalFormResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                 mFormId;
    ::ll::UntypedStorage<8, 24>                                    mJSONResponse;
    ::ll::TypedStorage<1, 2, std::optional<ModalFormCancelReason>> mFormCancelReason;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                     mFormId;
    ::ll::TypedStorage<8, 24, ::std::optional<::Json::Value>>          mJSONResponse;
    ::ll::TypedStorage<1, 2, ::std::optional<::ModalFormCancelReason>> mFormCancelReason;
#endif // @header-generator platform
    // NOLINTEND
};
