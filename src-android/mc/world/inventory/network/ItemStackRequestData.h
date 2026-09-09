#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStackRequestAction;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                     mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                             mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>                           mStringsToFilterOrigin;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ItemStackRequestAction>>> mActions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestData();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&);

    MCNAPI void* $ctor(::ItemStackRequestData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
