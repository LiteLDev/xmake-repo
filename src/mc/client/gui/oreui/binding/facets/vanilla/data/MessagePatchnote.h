#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ImageData;
struct MessagePatchnoteData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct MessagePatchnote {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mBody;
    ::ll::UntypedStorage<8, 216>           mImage;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePatchnote& operator=(MessagePatchnote const&);
    MessagePatchnote();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessagePatchnote(::OreUI::MessagePatchnote const&);

    MCNAPI ~MessagePatchnote();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::MessagePatchnote const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MessagePatchnote {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>          mBody;
    ::ll::TypedStorage<8, 272, ::OreUI::MessageImage> mImage;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePatchnote& operator=(MessagePatchnote const&);
    MessagePatchnote();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessagePatchnote(::OreUI::MessagePatchnote const&);

    MCAPI ~MessagePatchnote();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::MessagePatchnote const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MessagePatchnote {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
