#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct PageContent {
public:
    // PageContent inner types define
    enum class PageType : uchar {
        Text  = 0,
        Photo = 1,
        Count = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mParsedFilteredText;
    ::ll::TypedStorage<8, 24, std::string>                mParsedText;
    ::ll::TypedStorage<8, 24, std::string>                mPhotoName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredPhotoName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                  mText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mParsedFilteredText;
    ::ll::TypedStorage<8, 32, ::std::string>                  mParsedText;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPhotoName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredPhotoName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PageContent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PageContent(::PageContent const&);
#else // @header-generator platform
    MCAPI PageContent(::PageContent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PageContent(std::string, std::optional<std::string>);
#else // @header-generator platform
    MCAPI PageContent(::std::string nText, ::std::optional<::std::string> nFilteredText);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> createTag() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PageContent::PageType getType() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::PageContent& operator=(::PageContent&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PageContent& operator=(::PageContent&&);
#else // @header-generator platform
    MCAPI ::PageContent& operator=(::PageContent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PageContent& operator=(::PageContent const&);

    MCNAPI ~PageContent();
#else // @header-generator platform
    MCAPI ~PageContent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PageContent read(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::PageContent read(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void write(::PageContent const&, ::CompoundTag&);
#else // @header-generator platform
    MCAPI static void write(::PageContent const& page, ::CompoundTag& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PageContent const& BLANK_PAGE();
#else // @header-generator platform
    MCAPI static ::PageContent const& BLANK_PAGE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PageContent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::PageContent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::optional<std::string>);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string nText, ::std::optional<::std::string> nFilteredText);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
