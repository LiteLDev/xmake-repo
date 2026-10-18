#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class BlockPalette;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestAction;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
struct ItemStackRequestIdTag;
#endif // @header-generator platform
// clang-format on

class ItemStackRequestData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                                     mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                             mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>                           mStringsToFilterOrigin;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackRequestAction>>> mActions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemStackRequestId>                                       mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>                                 mStringsToFilterOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestAction>>> mActions;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&);
    ItemStackRequestData(ItemStackRequestData const&);
    ItemStackRequestData();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestData();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ItemStackRequestData(::ItemStackRequestData&&);

    MCAPI ::ItemStackRequestData& operator=(::ItemStackRequestData&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStackRequestData(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);

    MCNAPI ItemStackRequestData(::ItemStackRequestData&&);

    MCNAPI void addAction(std::unique_ptr<ItemStackRequestAction>);

    MCNAPI void addDeserializedAction(std::unique_ptr<ItemStackRequestAction>);

    MCNAPI int addStringToFilter(std::string const&, ::TextProcessingEventOrigin const);

    MCNAPI std::vector<std::unique_ptr<ItemStackRequestAction>> const& getActions() const;

    MCNAPI std::vector<std::string> const& getStringsToFilter() const;

    MCNAPI ::TextProcessingEventOrigin const& getStringsToFilterOrigin() const;

    MCNAPI ::ItemStackRequestData& operator=(::ItemStackRequestData&&);

    MCNAPI void setStringsToFilterOrigin(::TextProcessingEventOrigin);

    MCNAPI ::ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType) const;

    MCNAPI ~ItemStackRequestData();
#else // @header-generator platform
    MCAPI ~ItemStackRequestData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);

    MCNAPI void* $ctor(::ItemStackRequestData&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemStackRequestData&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
