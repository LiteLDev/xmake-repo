#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestScreen.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackNetManagerScreen;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ItemStackNetManagerScreenStack {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ItemStackNetManagerScreen>>> mStack;
#endif // @header-generator platform
    // NOLINTEND
};
