#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
