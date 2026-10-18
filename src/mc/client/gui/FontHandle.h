#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontRepository;
// clang-format on

class FontHandle : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                      mFontRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Font>> mDefaultFont;
    ::ll::TypedStorage<8, 8, ulong>                  mFontId;
    ::ll::TypedStorage<1, 1, bool>                   mIsDummyHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontHandle();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontHandle(::FontHandle, std::string const&);

    MCNAPI ::Font& getFont() const;

    MCNAPI bool isLoaded() const;

    MCNAPI bool isValid() const;

    MCNAPI ::FontHandle& operator=(::FontHandle const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FontHandle& INVALID_FONT_HANDLE();

    MCNAPI static ::FontHandle& TEST_FONT_HANDLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FontHandle, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontRepository;
// clang-format on

class FontHandle : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::FontRepository>> mFontRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Font>>                    mDefaultFont;
    ::ll::TypedStorage<8, 8, uint64>                                        mFontId;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDummyHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    FontHandle(FontHandle const&);
    FontHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontHandle() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FontHandle(::FontHandle defaultFont, ::std::string const& newFontAlias);

    MCAPI FontHandle(
        ::std::shared_ptr<::Font>                       defaultFont,
        uint64 const                                    fontId,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository> fontRepository
    );

    MCAPI ::Font& getFont() const;

    MCAPI ::FontHandle& operator=(::FontHandle const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FontHandle& INVALID_FONT_HANDLE();

    MCAPI static ::FontHandle& TEST_FONT_HANDLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FontHandle defaultFont, ::std::string const& newFontAlias);

    MCAPI void* $ctor(
        ::std::shared_ptr<::Font>                       defaultFont,
        uint64 const                                    fontId,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository> fontRepository
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FontHandle {};
#endif // @header-generator platform
#endif // @header-generator platform
