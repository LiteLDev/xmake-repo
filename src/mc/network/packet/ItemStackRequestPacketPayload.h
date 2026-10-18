#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/ItemStackRequestPacketData__RequestData.h"
#else // @header-generator platform
#include "mc/network/packet/item_stack_request_packet_data/RequestData.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStackRequestBatch;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ItemStackRequestPacketData { struct RequestData; }
#endif // @header-generator platform
// clang-format on

struct ItemStackRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStackRequestPacketData::RequestData>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackRequestPacketData::RequestData>> mRequests;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStackRequestPacketPayload(::ItemStackRequestBatch const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ItemStackRequestPacketPayload(::ItemStackRequestBatch const& batch);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ItemStackRequestBatch> toRequestBatch() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ItemStackRequestBatch> toRequestBatch() const;

#ifdef LL_PLAT_C
    MCAPI ~ItemStackRequestPacketPayload();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStackRequestBatch const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemStackRequestBatch const& batch);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
