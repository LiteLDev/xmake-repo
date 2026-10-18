#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsWorldPackEditorCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldPackEditorCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor>> mRealmsWorldPackEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditorCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldPackEditorCommandsFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor
    );

    MCAPI void activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCAPI void changePackPriority(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        int                  fromPosition,
        int                  toPosition
    ) const;

    MCAPI void clearChangePackPriorityError() const;

    MCAPI void clearPackApplicationError() const;

    MCAPI void clearPendingPackAction() const;

    MCAPI void clearSavePackSettingsState() const;

    MCAPI void continuePendingPackAction() const;

    MCAPI void deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) const;

    MCAPI void reloadPacks() const;

    MCAPI void savePackSettings() const;

    MCAPI void setEditorEnabled(bool isEditorEnabled) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor);
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
class RealmsWorldPackEditorCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
