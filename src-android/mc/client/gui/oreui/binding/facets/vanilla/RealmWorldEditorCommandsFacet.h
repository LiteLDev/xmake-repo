#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmWorldEditorCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmWorldEditorCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldEditorCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldEditorCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmWorldEditorCommandsFacet(std::shared_ptr<Realms::RealmsWorldEditor>);

    MCNAPI void clearRealmWorldEditorState();

    MCNAPI void resetRealmWorld(std::string const&);

    MCNAPI void saveRealmWorld(std::string const&);

    MCNAPI void setUseRealmWorldBackend(bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsWorldEditor>);
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
