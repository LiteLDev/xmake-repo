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
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    WrittenBookItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WrittenBookItem();
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool requiresInteract() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requiresInteract() const;
#else // @header-generator platform
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual ::std::string buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool hasCustomHoverName(::ItemStackBase const& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomHoverName(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual std::string getInteractText(::Player const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canBeCopied(::CompoundTag const*);
#else // @header-generator platform
    MCAPI static ::std::string const& getAuthor(::ItemStackBase const& book);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& getAuthor(::ItemStackBase const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getFilteredAuthor(::ItemStack const& book);

    MCAPI static ::std::optional<::std::string> getFilteredTitle(::ItemStack const& book);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorUniqueID getBookId(::ItemStack const&);
#else // @header-generator platform
    MCAPI static ::PageContent getPage(::ItemStackBase const& book, int index);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::string> getFilteredAuthor(::ItemStack const&);
#else // @header-generator platform
    MCAPI static int getPageCount(::ItemStackBase const& book);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::string> getFilteredTitle(::ItemStack const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<int> getPageCountByType(::ItemStack const& book);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getGeneration(::CompoundTag const*);
#else // @header-generator platform
    MCAPI static ::std::vector<::PageContent> getPages(::ItemStackBase const& book);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PageContent getPage(::ItemStackBase const&, int);
#else // @header-generator platform
    MCAPI static ::std::string const& getTitle(::ItemStackBase const& book);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getPageCount(::ItemStackBase const&);

    MCNAPI static std::vector<int> getPageCountByType(::ItemStack const&);

    MCNAPI static std::vector<PageContent> getPages(::ItemStackBase const&);

    MCNAPI static std::string const& getTitle(::ItemStackBase const&);

    MCNAPI static std::string const& getXUID(::ItemStackBase const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& getXUID(::ItemStackBase const& book);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_GENERATION();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_AUTHOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_PAGES();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_FILTERED_AUTHOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_PAGE_LENGTH();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_FILTERED_TITLE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_TITLE_LENGTH();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_GENERATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_AUTHOR();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_PAGES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_FILTERED_AUTHOR();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_PHOTO_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_FILTERED_TITLE();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_PAGE_FILTERED_TEXT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_GENERATION();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_PAGE_PHOTO_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_ID();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_PAGE_TEXT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& TAG_PAGES();
#else // @header-generator platform
    MCAPI static ::std::string_view const& TAG_TITLE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& TAG_XUID();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isGlint(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $requiresInteract() const;
#else // @header-generator platform
    MCFOLD bool $requiresInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI ::std::string $getInteractText(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& item, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomHoverName(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $hasCustomHoverName(::ItemStackBase const& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    MCAPI bool $inventoryTick(::ItemStack&, ::Level& level, ::Actor& owner, int, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getInteractText(::Player const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;
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
