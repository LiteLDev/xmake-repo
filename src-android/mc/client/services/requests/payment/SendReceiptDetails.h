#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mWorldName;
    ::ll::TypedStorage<8, 24, std::string const> mSubscriptionId;
    ::ll::TypedStorage<8, 24, std::string const> mProductId;
    ::ll::TypedStorage<1, 1, bool const>         mIsFakeReceipt;
    // NOLINTEND

public:
    // prevent constructor by default
    SendReceiptDetails();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SendReceiptDetails();

    virtual char const* getPath() const = 0;

    virtual ::Json::Value toPostBody() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SendReceiptDetails(std::string const&, std::string const&, std::string const&, bool);

    MCNAPI void _addCommonProperties(::Json::Value&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, std::string const&, bool);
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
