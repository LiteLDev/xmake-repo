#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsWorldEditorWorldDetailsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorWorldDetailsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorWorldDetailsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorWorldDetailsCommandsFacet(::std::weak_ptr<::Realms::RealmsWorldEditor> worldEditor);

    MCAPI void saveRealmDetails(::std::string const& realmId) const;

    MCAPI void setRealmCheatsEnabled(bool cheatsEnabled) const;

    MCAPI void setRealmDaylightCycle(int daylightCycle) const;

    MCAPI void setRealmWorldDifficulty(int difficulty) const;

    MCAPI void setRealmWorldGameType(int gameType) const;

    MCAPI void setRealmWorldIsHardcore(bool isHardcore) const;

    MCAPI void setRealmWorldName(::std::string const& name) const;

    MCAPI void setRealmsAreTexturePacksRequired(bool areTexturesRequired) const;

    MCAPI void setRealmsDescription(::std::string const& description) const;

    MCAPI void setRealmsName(::std::string const& name) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::Realms::RealmsWorldEditor> worldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWorldEditorWorldDetailsCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
