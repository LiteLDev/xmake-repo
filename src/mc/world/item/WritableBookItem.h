#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
class ItemStackBase;
class Player;
struct PageContent;
// clang-format on

class WritableBookItem : public ::Item {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    WritableBookItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WritableBookItem();
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requiresInteract() const;
#else // @header-generator platform
    virtual bool requiresInteract() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual std::string getInteractText(::Player const&) const;
#else // @header-generator platform
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _addPageAt(::ItemStackBase&, int, ::PageContent const&);
#else // @header-generator platform
    MCAPI static void _addPageAt(::ItemStackBase& book, int index, ::PageContent const& page);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PageContent _deletePage(::ItemStackBase&, int);
#else // @header-generator platform
    MCAPI static ::PageContent _deletePage(::ItemStackBase& book, int index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _deletePages(::ItemStackBase&);
#else // @header-generator platform
    MCAPI static void _replacePage(::ItemStackBase& book, int index, ::PageContent const& page);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _replacePage(::ItemStackBase&, int, ::PageContent const&);

    MCNAPI static void _signBookUserData(
        ::CompoundTag&,
        std::string,
        std::optional<std::string>,
        std::string,
        std::optional<std::string>,
        std::string
#else // @header-generator platform
    MCAPI static void _signBookUserData(
        ::CompoundTag&                 userData,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addPageAt(::ItemStack&, int, ::PageContent const&);
#else // @header-generator platform
    MCAPI static void addPageAt(::ItemStack& book, int index, ::PageContent const& page);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void createUserDataIfEmpty(::ItemStackBase&);
#else // @header-generator platform
    MCAPI static void createUserDataIfEmpty(::ItemStackBase& book);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PageContent deletePage(::ItemStack&, int);
#else // @header-generator platform
    MCAPI static ::PageContent deletePage(::ItemStack& book, int index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void replacePage(::ItemStack&, int, ::PageContent const&);
#else // @header-generator platform
    MCAPI static void replacePage(::ItemStack& book, int index, ::PageContent const& page);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void signBook(
        ::ItemStack&,
        std::string,
        std::optional<std::string>,
        std::string,
        std::optional<std::string>,
        std::string
#else // @header-generator platform
    MCAPI static void signBook(
        ::ItemStack&                   book,
        ::std::string                  title,
        ::std::optional<::std::string> filteredTitle,
        ::std::string                  author,
        ::std::optional<::std::string> filteredAuthor,
        ::std::string                  xuid
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void swapPages(::ItemStack&, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void swapPages(::ItemStack& book, int page1, int page2);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requiresInteract() const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCFOLD bool $requiresInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getInteractText(::Player const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::string $getInteractText(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
