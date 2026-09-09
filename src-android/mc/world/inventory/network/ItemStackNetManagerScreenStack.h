#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScreen.h"

// auto generated forward declare list
// clang-format off
class ItemStackNetManagerScreen;
class ItemStackRequestData;
// clang-format on

class ItemStackNetManagerScreenStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::deque<std::unique_ptr<ItemStackNetManagerScreen>>> mStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void foreachScreen(std::function<bool(ItemStackNetManagerScreen&)> const);

    MCNAPI ::ItemStackNetManagerScreen* getScreenForRequest(::ItemStackRequestData const&);

    MCNAPI ::ItemStackNetManagerScreen* getScreenForRequest(::ItemStackRequestScreen);

    MCNAPI bool pop();

    MCNAPI ::ItemStackNetManagerScreen* push(std::unique_ptr<ItemStackNetManagerScreen>);

    MCNAPI ulong size() const;

    MCNAPI ::ItemStackNetManagerScreen const* top() const;

    MCNAPI ::ItemStackNetManagerScreen* top();
    // NOLINTEND
};
