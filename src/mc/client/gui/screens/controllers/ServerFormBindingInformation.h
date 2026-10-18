#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/DynamicContentBindingInformation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ServerFormBindingInformation : public ::DynamicContentBindingInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>    mRequestCallback;
    ::ll::TypedStorage<1, 1, bool> mInCreation;
    ::ll::UntypedStorage<1, 15>    mIsValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFormBindingInformation();

    virtual void createBindingData(::Json::Value const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string _parseRawText(::Json::Value const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createBindingData(::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/DynamicContentBindingInformation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ServerFormBindingInformation : public ::DynamicContentBindingInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::function<void(::Core::Path const&)>)>>
                                   mRequestCallback;
    ::ll::TypedStorage<1, 1, bool> mInCreation;
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createBindingData(::Json::Value const& formData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _parseRawText(::Json::Value const& value) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createBindingData(::Json::Value const& formData);
    // NOLINTEND
};
#else // @header-generator platform
class ServerFormBindingInformation {};
#endif // @header-generator platform
#endif // @header-generator platform
