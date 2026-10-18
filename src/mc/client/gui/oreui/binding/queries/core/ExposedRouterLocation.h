#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class RouterLocation; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ExposedRouterLocation : public ::OreUI::PropertyObject<OreUI::ExposedRouterLocation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mPath;
    ::ll::UntypedStorage<8, 168> mQuery;
    ::ll::UntypedStorage<8, 168> mFragment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExposedRouterLocation& operator=(ExposedRouterLocation const&);
    ExposedRouterLocation(ExposedRouterLocation const&);
    ExposedRouterLocation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExposedRouterLocation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExposedRouterLocation(
        ::OreUI::Detail::IPropertyObject*,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, std::string const&, std::string const&, std::string const&);
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
class ExposedRouterLocation : public ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation> {
public:
    // ExposedRouterLocation inner types define
    using Base = ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mQuery;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mFragment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExposedRouterLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExposedRouterLocation(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string const&              path,
        ::std::string const&              query,
        ::std::string const&              fragment
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string const&              path,
        ::std::string const&              query,
        ::std::string const&              fragment
    );
    // NOLINTEND
};
#else // @header-generator platform
class ExposedRouterLocation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
