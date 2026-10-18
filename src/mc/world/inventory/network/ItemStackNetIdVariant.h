#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetIdTag;
struct ItemStackRequestIdTag;
#endif // @header-generator platform
// clang-format on

struct ItemStackNetIdVariant {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mVariant;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::variant<::ItemStackNetId, ::ItemStackRequestId, ::ItemStackLegacyRequestId>>
        mVariant;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    ItemStackNetIdVariant() : mVariant(ItemStackNetId(0)) {}
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackNetIdVariant(::ItemStackNetIdVariant const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> deserialize(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackNetIdVariant(::ItemStackNetIdVariant&&);
#else // @header-generator platform
    MCAPI bool operator==(::ItemStackNetIdVariant const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND
};
