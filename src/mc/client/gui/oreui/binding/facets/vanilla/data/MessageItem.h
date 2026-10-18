#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
struct MessageItemData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
struct MessageItemData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct MessageItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mId;
    ::ll::UntypedStorage<8, 216>                       mImage;
    ::ll::TypedStorage<8, 104, ::OreUI::MessageButton> mButton;
    ::ll::TypedStorage<8, 24, std::string>             mSaleBanner;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItem& operator=(MessageItem const&);
    MessageItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageItem(::OreUI::MessageItem const&);

    MCNAPI ~MessageItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::MessageItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MessageItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mId;
    ::ll::TypedStorage<8, 272, ::OreUI::MessageImage>  mImage;
    ::ll::TypedStorage<8, 136, ::OreUI::MessageButton> mButton;
    ::ll::TypedStorage<8, 32, ::std::string>           mSaleBanner;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageItem(
        ::MessageItemData const&                                   item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MessageItemData const&                                   item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
    );
    // NOLINTEND
};
#else // @header-generator platform
struct MessageItem {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
