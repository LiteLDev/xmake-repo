#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldPackEditorCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldPackEditorCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mRealmsWorldPackEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditorCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldPackEditorCommandsFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>
    );

    MCNAPI void activatePack(std::string const&, ::ContentType, bool) const;

    MCNAPI void changePackPriority(std::string const&, ::ContentType, int, int) const;

    MCNAPI void clearChangePackPriorityError() const;

    MCNAPI void clearPackApplicationError() const;

    MCNAPI void clearPendingPackAction() const;

    MCNAPI void clearSavePackSettingsState() const;

    MCNAPI void continuePendingPackAction() const;

    MCNAPI void deactivatePack(std::string const&, ::ContentType, bool) const;

    MCNAPI void reloadPacks() const;

    MCNAPI void savePackSettings() const;

    MCNAPI void setEditorEnabled(bool) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[38]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>);
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
