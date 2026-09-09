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

class RealmsWorldEditorWorldDetailsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldEditorWorldDetailsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorWorldDetailsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldEditorWorldDetailsCommandsFacet(std::weak_ptr<Realms::RealmsWorldEditor>);

    MCNAPI void saveRealmDetails(std::string const&) const;

    MCNAPI void setRealmCheatsEnabled(bool) const;

    MCNAPI void setRealmDaylightCycle(int) const;

    MCNAPI void setRealmWorldDifficulty(int) const;

    MCNAPI void setRealmWorldGameType(int) const;

    MCNAPI void setRealmWorldIsHardcore(bool) const;

    MCNAPI void setRealmWorldName(std::string const&) const;

    MCNAPI void setRealmsAreTexturePacksRequired(bool) const;

    MCNAPI void setRealmsDescription(std::string const&) const;

    MCNAPI void setRealmsName(std::string const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[46]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Realms::RealmsWorldEditor>);
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
