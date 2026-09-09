#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsAmazonAppStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mUserId;
    ::ll::TypedStorage<8, 24, std::string const> mReceiptId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsAmazonAppStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceiptDetailsAmazonAppStore();

    virtual char const* getPath() const;

    virtual ::Json::Value toPostBody() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiptDetailsAmazonAppStore(
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::string const&, std::string const&, std::string const&, bool, std::string const&, std::string const&);
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
