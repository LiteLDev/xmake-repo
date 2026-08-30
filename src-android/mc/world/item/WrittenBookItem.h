#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
struct ActorUniqueID;
struct PageContent;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class WrittenBookItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldFilterText;
    // NOLINTEND

public:
    // prevent constructor by default
    WrittenBookItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WrittenBookItem();

    virtual bool isGlint(::ItemStackBase const&) const;

    virtual bool requiresInteract() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const&) const;

    virtual bool hasCustomHoverName(::ItemStackBase const&) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual std::string getInteractText(::Player const&) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canBeCopied(::CompoundTag const*);

    MCNAPI static std::string const& getAuthor(::ItemStackBase const&);

    MCNAPI static ::ActorUniqueID getBookId(::ItemStack const&);

    MCNAPI static std::optional<std::string> getFilteredAuthor(::ItemStack const&);

    MCNAPI static std::optional<std::string> getFilteredTitle(::ItemStack const&);

    MCNAPI static int getGeneration(::CompoundTag const*);

    MCNAPI static ::PageContent getPage(::ItemStackBase const&, int);

    MCNAPI static int getPageCount(::ItemStackBase const&);

    MCNAPI static std::vector<int> getPageCountByType(::ItemStack const&);

    MCNAPI static std::vector<PageContent> getPages(::ItemStackBase const&);

    MCNAPI static std::string const& getTitle(::ItemStackBase const&);

    MCNAPI static std::string const& getXUID(::ItemStackBase const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_GENERATION();

    MCNAPI static int const& MAX_PAGES();

    MCNAPI static int const& MAX_PAGE_LENGTH();

    MCNAPI static int const& MAX_TITLE_LENGTH();

    MCNAPI static std::string_view const& TAG_AUTHOR();

    MCNAPI static std::string_view const& TAG_FILTERED_AUTHOR();

    MCNAPI static std::string_view const& TAG_FILTERED_TITLE();

    MCNAPI static std::string_view const& TAG_GENERATION();

    MCNAPI static std::string_view const& TAG_ID();

    MCNAPI static std::string_view const& TAG_PAGES();

    MCNAPI static std::string_view const& TAG_PAGE_FILTERED_PHOTO_NAME();

    MCNAPI static std::string_view const& TAG_PAGE_FILTERED_TEXT();

    MCNAPI static std::string_view const& TAG_PAGE_PHOTO_NAME();

    MCNAPI static std::string_view const& TAG_PAGE_TEXT();

    MCNAPI static std::string_view const& TAG_RESOLVED();

    MCNAPI static std::string_view const& TAG_TITLE();

    MCNAPI static std::string_view const& TAG_XUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGlint(::ItemStackBase const&) const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const&) const;

    MCNAPI bool $hasCustomHoverName(::ItemStackBase const&) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI std::string $getInteractText(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
