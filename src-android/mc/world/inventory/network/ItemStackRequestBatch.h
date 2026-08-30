#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStackRequestData;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackRequestData>>> mRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
