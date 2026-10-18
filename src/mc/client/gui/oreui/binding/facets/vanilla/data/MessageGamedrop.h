#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessagePatchnote.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
struct ImageData;
struct MessageGamedropData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
struct ImageData;
struct MessageGamedropData;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct MessagePatchnote; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct MessageGamedrop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::MessagePatchnote>> mPatchnotes;
    ::ll::TypedStorage<8, 104, ::OreUI::MessageButton>              mFooterButton;
    ::ll::TypedStorage<8, 24, std::string>                          mFooterTitle;
    ::ll::TypedStorage<8, 24, std::string>                          mFooterBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageGamedrop& operator=(MessageGamedrop const&);
    MessageGamedrop();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageGamedrop(::OreUI::MessageGamedrop const&);

    MCNAPI ::OreUI::MessageGamedrop& operator=(::OreUI::MessageGamedrop&&);

    MCNAPI ~MessageGamedrop();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::MessageGamedrop const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MessageGamedrop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessagePatchnote>> mPatchnotes;
    ::ll::TypedStorage<8, 136, ::OreUI::MessageButton>                  mFooterButton;
    ::ll::TypedStorage<8, 32, ::std::string>                            mFooterTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                            mFooterBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageGamedrop& operator=(MessageGamedrop const&);
    MessageGamedrop(MessageGamedrop const&);
    MessageGamedrop();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageGamedrop(
        ::MessageGamedropData const&                               item,
        ::std::function<::ButtonData(::std::string)>               buttonLookup,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::OreUI::MessageGamedrop& operator=(::OreUI::MessageGamedrop&&);

    MCAPI ~MessageGamedrop();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MessageGamedropData const&                               item,
        ::std::function<::ButtonData(::std::string)>               buttonLookup,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MessageGamedrop {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
