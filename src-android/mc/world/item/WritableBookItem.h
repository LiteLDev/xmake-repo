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
    // prevent constructor by default
    WritableBookItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WritableBookItem();

    virtual bool requiresInteract() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual std::string getInteractText(::Player const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addPageAt(::ItemStackBase&, int, ::PageContent const&);

    MCNAPI static ::PageContent _deletePage(::ItemStackBase&, int);

    MCNAPI static void _deletePages(::ItemStackBase&);

    MCNAPI static void _replacePage(::ItemStackBase&, int, ::PageContent const&);

    MCNAPI static void _signBookUserData(
        ::CompoundTag&,
        std::string,
        std::optional<std::string>,
        std::string,
        std::optional<std::string>,
        std::string
    );

    MCNAPI static void addPageAt(::ItemStack&, int, ::PageContent const&);

    MCNAPI static void createUserDataIfEmpty(::ItemStackBase&);

    MCNAPI static ::PageContent deletePage(::ItemStack&, int);

    MCNAPI static void replacePage(::ItemStack&, int, ::PageContent const&);

    MCNAPI static void signBook(
        ::ItemStack&,
        std::string,
        std::optional<std::string>,
        std::string,
        std::optional<std::string>,
        std::string
    );

    MCNAPI static void swapPages(::ItemStack&, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requiresInteract() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI std::string $getInteractText(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
