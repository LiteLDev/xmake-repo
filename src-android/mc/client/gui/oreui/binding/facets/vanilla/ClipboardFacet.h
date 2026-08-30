#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/util/ClipboardProxy.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
// clang-format on

namespace OreUI {

class ClipboardFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ClipboardFacet> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>&> mClipboardManager;
    ::ll::TypedStorage<1, 1, bool> mIsDirty;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardFacet& operator=(ClipboardFacet const&);
    ClipboardFacet(ClipboardFacet const&);
    ClipboardFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClipboardFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClipboardFacet(
        ::ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>&
    );

    MCNAPI void copyToClipboard(std::string const&);

    MCNAPI bool isClipboardCopySupported();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
