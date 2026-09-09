#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
