#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/content_binary/Type.h"
#include "mc/client/services/download/DlcHydrationInfo.h"

class DlcId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mUsePersonaLookupRequest;
    ::ll::TypedStorage<8, 24, std::string>          mProductId;
    ::ll::TypedStorage<1, 1, ::ContentBinary::Type> mBinaryType;
    ::ll::TypedStorage<8, 104, ::DlcHydrationInfo>  mHydrationInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcId(::DlcId const&);

    MCNAPI DlcId(::DlcId&&);

    MCNAPI DlcId(std::string const&, ::ContentBinary::Type const);

    MCNAPI DlcId(std::string const&, ::ContentBinary::Type const, ::DlcHydrationInfo&&);

    MCNAPI bool empty() const;

    MCNAPI ::ContentBinary::Type const& getBinaryType() const;

    MCNAPI ::DlcHydrationInfo const& getHydryationInfo() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI ::DlcId& operator=(::DlcId const&);

    MCNAPI ::DlcId& operator=(::DlcId&&);

    MCNAPI bool operator==(::DlcId const&) const;

    MCNAPI ~DlcId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DlcId const&);

    MCNAPI void* $ctor(::DlcId&&);

    MCNAPI void* $ctor(std::string const&, ::ContentBinary::Type const);

    MCNAPI void* $ctor(std::string const&, ::ContentBinary::Type const, ::DlcHydrationInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class DlcId {};
#endif // @header-generator platform
