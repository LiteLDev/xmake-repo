#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/instruction/LessonItem.h"
#include "mc/client/library/OptionalProductInfo.h"
#include "mc/client/library/OptionalProductLink.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class WorldTemplateManager;
struct EduContentDocument;
// clang-format on

class LibraryItem : public ::LessonItem {
#else // @header-generator platform
class LibraryItem {
#endif // @header-generator platform
public:
    // LibraryItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BadgeCategory : uint {
        None     = 1,
        New      = 2,
        Featured = 4,
    };
#else // @header-generator platform
    enum class BadgeCategory : uint {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : int {
        Unknown         = 0,
        WorldTemplate   = 1,
        NonWorldContent = 2,
        ItemCollection  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                   mSubtitle;
    ::ll::TypedStorage<8, 24, std::string>                                                   mDifficulty;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                      mSearchKeywords;
    ::ll::TypedStorage<4, 4, ::LibraryItem::BadgeCategory>                                   mBadgeCategory;
    ::ll::TypedStorage<4, 4, ::LibraryItem::Type>                                            mType;
    ::ll::UntypedStorage<8, 24>                                                              mVersion;
    ::ll::TypedStorage<8, 8, long>                                                           mCreationDate;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                             mDuration;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                             mMinAge;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                             mMaxAge;
    ::ll::TypedStorage<8, 40, std::unordered_map<Library::OptionalProductInfo, std::string>> mOptionalProductInfo;
    ::ll::TypedStorage<8, 40, std::unordered_map<Library::OptionalProductLink, std::string>> mOptionalProductLinks;
    ::ll::UntypedStorage<8, 48>                                                              mDestructorCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryItem& operator=(LibraryItem const&);
    LibraryItem(LibraryItem const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryItem();

    virtual bool isNew() const;

    virtual void _createImageInfo();

    virtual ::ResourceLocation const& _getImageResourceLocation() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LibraryItem(::EduContentDocument);

    MCNAPI LibraryItem(::LibraryItem&&);

    MCNAPI bool containsSearchKeyword(std::string const&) const;

    MCNAPI std::string const& getDifficulty() const;

    MCNAPI int getDuration() const;

    MCNAPI int getMaxAge() const;

    MCNAPI int getMinAge() const;

    MCNAPI std::string const& getOptionalProductInfo(::Library::OptionalProductInfo) const;

    MCNAPI std::string const& getOptionalProductLink(::Library::OptionalProductLink) const;

    MCNAPI std::vector<std::string> const& getSearchKeywords() const;

    MCNAPI std::string const& getSubtitle() const;

    MCNAPI ::SemVersion const& getVersion() const;

    MCNAPI bool isMissingAllowKeyword() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EduContentDocument);

    MCNAPI void* $ctor(::LibraryItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isNew() const;

    MCNAPI void $_createImageInfo();

    MCNAPI ::ResourceLocation const& $_getImageResourceLocation() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class Type : int {};
#endif // @header-generator platform
};
