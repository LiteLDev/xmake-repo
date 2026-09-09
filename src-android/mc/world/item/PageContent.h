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
    ::ll::TypedStorage<8, 24, std::string>                mText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredText;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mParsedFilteredText;
    ::ll::TypedStorage<8, 24, std::string>                mParsedText;
    ::ll::TypedStorage<8, 24, std::string>                mPhotoName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredPhotoName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PageContent(::PageContent const&);

    MCNAPI PageContent(std::string, std::optional<std::string>);

    MCNAPI std::unique_ptr<CompoundTag> createTag() const;

    MCNAPI ::PageContent::PageType getType() const;

    MCNAPI ::PageContent& operator=(::PageContent&&);

    MCNAPI ::PageContent& operator=(::PageContent const&);

    MCNAPI ~PageContent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PageContent read(::CompoundTag const&);

    MCNAPI static void write(::PageContent const&, ::CompoundTag&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PageContent const& BLANK_PAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PageContent const&);

    MCNAPI void* $ctor(std::string, std::optional<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
