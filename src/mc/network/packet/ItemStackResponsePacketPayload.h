#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/ItemStackResponseInfo.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ItemStackResponseInfo;
// clang-format on
#endif // @header-generator platform

struct ItemStackResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseInfo>> mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackResponsePacketPayload(std::vector<ItemStackResponseInfo>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<ItemStackResponseInfo>&&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseInfo>> mResponses;
#endif // @header-generator platform
    // NOLINTEND
};
