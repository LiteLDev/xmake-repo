#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"
#else // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestData.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class BlockPalette;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestData;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ItemStackRequestBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackRequestData>>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestData>>> mRequests;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestBatch();

    MCNAPI void addDeserializedRequest(std::unique_ptr<ItemStackRequestData>);

    MCNAPI void addRequest(std::unique_ptr<ItemStackRequestData>);

    MCNAPI ~ItemStackRequestBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addDeserializedRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCAPI void addRequest(::std::unique_ptr<::ItemStackRequestData> request);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
