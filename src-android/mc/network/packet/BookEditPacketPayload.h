#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/book_edit_action/AddPage.h"
#include "mc/network/packet/book_edit_action/DeletePage.h"
#include "mc/network/packet/book_edit_action/Finalize.h"
#include "mc/network/packet/book_edit_action/ReplacePage.h"
#include "mc/network/packet/book_edit_action/SwapPages.h"

// auto generated forward declare list
// clang-format off
struct PageContent;
// clang-format on

struct BookEditPacketPayload {
public:
    // BookEditPacketPayload inner types define
    using Operation = std::variant<
        BookEditAction::ReplacePage,
        BookEditAction::AddPage,
        BookEditAction::DeletePage,
        BookEditAction::SwapPages,
        BookEditAction::Finalize>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mBookSlot;
    ::ll::TypedStorage<8, 80, std::variant<BookEditAction::ReplacePage, BookEditAction::AddPage, BookEditAction::DeletePage, BookEditAction::SwapPages, BookEditAction::Finalize>> mOperation;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PageContent getPage() const;

    MCNAPI std::string const& getText1() const;

    MCNAPI std::string const& getText2() const;

    MCNAPI void setToAddPage(int, int, ::PageContent const&);

    MCNAPI void setToDeletePage(int, int);

    MCNAPI void setToFinalize(int, std::string, std::string, std::string);

    MCNAPI void setToReplacePage(int, int, ::PageContent const&);

    MCNAPI void setToSwapPages(int, int, int);
    // NOLINTEND
};
