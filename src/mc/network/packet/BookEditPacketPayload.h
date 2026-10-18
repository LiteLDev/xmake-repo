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
#if defined(LL_PLAT_A) // @header-generator platform
    using Operation = std::variant<
        BookEditAction::ReplacePage,
        BookEditAction::AddPage,
        BookEditAction::DeletePage,
        BookEditAction::SwapPages,
        BookEditAction::Finalize>;
#else // @header-generator platform
    using Operation = ::std::variant<
        ::BookEditAction::ReplacePage,
        ::BookEditAction::AddPage,
        ::BookEditAction::DeletePage,
        ::BookEditAction::SwapPages,
        ::BookEditAction::Finalize>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mBookSlot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, std::variant<BookEditAction::ReplacePage, BookEditAction::AddPage, BookEditAction::DeletePage, BookEditAction::SwapPages, BookEditAction::Finalize>> mOperation;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        104,
        ::std::variant<
            ::BookEditAction::ReplacePage,
            ::BookEditAction::AddPage,
            ::BookEditAction::DeletePage,
            ::BookEditAction::SwapPages,
            ::BookEditAction::Finalize>>
        mOperation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PageContent getPage() const;
#else // @header-generator platform
    MCAPI ::PageContent getPage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getText1() const;

    MCNAPI std::string const& getText2() const;

    MCNAPI void setToAddPage(int, int, ::PageContent const&);

    MCNAPI void setToDeletePage(int, int);

    MCNAPI void setToFinalize(int, std::string, std::string, std::string);

    MCNAPI void setToReplacePage(int, int, ::PageContent const&);

    MCNAPI void setToSwapPages(int, int, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setToAddPage(int bookSlot, int pageIndex, ::PageContent const& page);

    MCAPI void setToFinalize(int bookSlot, ::std::string title, ::std::string author, ::std::string xuid);

    MCAPI void setToReplacePage(int bookSlot, int pageIndex, ::PageContent const& page);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
