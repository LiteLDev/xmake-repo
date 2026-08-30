#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
