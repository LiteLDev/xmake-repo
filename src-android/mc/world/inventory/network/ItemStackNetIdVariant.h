#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct ItemStackNetIdVariant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackNetIdVariant(::ItemStackNetIdVariant const&);

    MCNAPI ItemStackNetIdVariant(::ItemStackNetIdVariant&&);

    MCNAPI ::Bedrock::Result<void, std::error_code> deserialize(::ReadOnlyBinaryStream&);

    MCNAPI bool hasServerNetId() const;

    MCNAPI bool isValid() const;

    MCNAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant const&);

    MCNAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant&&);

    MCNAPI ::ItemStackNetIdVariant& operator=(::TypedServerNetId<ItemStackNetIdTag, int, 0> const&);

    MCNAPI ::ItemStackNetIdVariant& operator=(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);

    MCNAPI ::ItemStackNetIdVariant& operator=(::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const&);

    MCNAPI bool operator==(::ItemStackNetIdVariant const&) const;

    MCNAPI void serialize(::BinaryStream&) const;

    MCNAPI std::string toString() const;

    MCNAPI ::TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0> const* tryGetLegacyRequestId() const;

    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const* tryGetRequestId() const;

    MCNAPI ::TypedServerNetId<ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;

    MCNAPI ~ItemStackNetIdVariant();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetIdVariant const&);

    MCNAPI void* $ctor(::ItemStackNetIdVariant&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
