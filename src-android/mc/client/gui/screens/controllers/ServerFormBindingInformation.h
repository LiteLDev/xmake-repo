#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
