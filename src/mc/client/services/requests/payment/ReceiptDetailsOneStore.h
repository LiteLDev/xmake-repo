#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsOneStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mActor;
    ::ll::TypedStorage<8, 24, std::string const> mInventory;
    ::ll::TypedStorage<8, 24, std::string const> mAccessToken;
    ::ll::TypedStorage<8, 24, std::string const> mWSIDKey;
    ::ll::TypedStorage<1, 1, bool const>         mSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsOneStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceiptDetailsOneStore();

    virtual char const* getPath() const;

    virtual ::Json::Value toPostBody() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiptDetailsOneStore(
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool const
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
        std::string const&,
        bool const
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
#else // @header-generator platform
class ReceiptDetailsOneStore {};
#endif // @header-generator platform
