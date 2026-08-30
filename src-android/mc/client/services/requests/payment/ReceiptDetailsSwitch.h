#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsSwitch : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mNintendoToken;
    ::ll::TypedStorage<8, 24, std::string const> mNsaId;
    ::ll::TypedStorage<8, 24, std::string const> mCourseId;
    ::ll::TypedStorage<8, 24, std::string const> mNsUid;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsSwitch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceiptDetailsSwitch();

    virtual char const* getPath() const;

    virtual ::Json::Value toPostBody() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiptDetailsSwitch(
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getPath() const;

    MCNAPI ::Json::Value $toPostBody() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
