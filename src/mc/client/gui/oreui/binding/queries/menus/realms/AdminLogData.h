#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace Realms { struct AdminLog; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AdminLogData : public ::OreUI::PropertyObject<OreUI::AdminLogData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mLogType;
    ::ll::UntypedStorage<8, 168> mDatePosted;
    ::ll::UntypedStorage<8, 168> mTimePosted;
    ::ll::UntypedStorage<8, 104> mParameters;
    ::ll::UntypedStorage<8, 104> mKeys;
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogData& operator=(AdminLogData const&);
    AdminLogData(AdminLogData const&);
    AdminLogData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogData();
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
class AdminLogData : public ::OreUI::PropertyObject<::OreUI::AdminLogData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mLogType;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDatePosted;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTimePosted;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mParameters;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mKeys;
    // NOLINTEND
};
#else // @header-generator platform
class AdminLogData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
