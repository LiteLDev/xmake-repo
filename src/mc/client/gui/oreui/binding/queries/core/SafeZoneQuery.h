#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SafeZoneQuery : public ::OreUI::QueryBase<OreUI::SafeZoneQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mSafeZoneX;
    ::ll::UntypedStorage<8, 104> mSafeZoneY;
    ::ll::UntypedStorage<8, 104> mScreenPositionX;
    ::ll::UntypedStorage<8, 104> mScreenPositionY;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SafeZoneQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SafeZoneQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SafeZoneQuery : public ::OreUI::QueryBase<::OreUI::SafeZoneQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mSafeZoneX;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mSafeZoneY;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mScreenPositionX;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mScreenPositionY;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SafeZoneQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};
#else // @header-generator platform
class SafeZoneQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
